# TODO: Optimize all of the getter functions to just run 1 graphql query with all project metadata 
# and parse out relevant info per query

from .util import *

def get_project_id(owner: str, repo: str, project_number: int, personal_access_token: str) -> int:
    query = '''
    query ($owner: String!, $repo: String!, $project_number: Int!) {
        repository(owner: $owner, name: $repo) {
            projectV2(number: $project_number) {
                id
            }
        }
    }
    '''
    variables = {
        "owner": owner,
        "repo": repo,
        "project_number": project_number,
    }

    data = make_graphql_request(query, variables, personal_access_token)
    return data['data']['repository']['projectV2']['id'] if data else None

def create_github_project(owner: str, repo: str, project_name: str, personal_access_token: str) -> int:
    query = '''
    query ($owner: String!, $repo: String!) {
        repository(owner: $owner, name: $repo) {
            owner {
                id
            }
            id
        }
    }
    '''
    variables = {
        "owner": owner,
        "repo": repo
    }

    data = make_graphql_request(query, variables, personal_access_token)
    if not data:
        return

    owner_id = data['data']['repository']['owner']['id']
    repo_id = data['data']['repository']['id']

    mutation = '''
    mutation ($ownerId: ID!, $repoId: ID!, $projectName: String!) {
        createProjectV2(input: { ownerId: $ownerId, repositoryId: $repoId, title: $projectName }) {
            projectV2 {
                title
                number
                id
            }
        }
    }
    '''
    variables = {
        "ownerId": owner_id,
        "repoId": repo_id,
        "projectName": project_name
    }

    data = make_graphql_request(mutation, variables, personal_access_token)
    if data:
        project_name = data['data']['createProjectV2']['projectV2']['title']
        project_id = data['data']['createProjectV2']['projectV2']['id']
        print(f"Successfully created project '{project_name}' with global ID {project_id}!")
        project_number = data['data']['createProjectV2']['projectV2']['number']
        return project_number

def create_project_item(owner: str, repo: str, project_number: str, item_title: str, item_body: str, personal_access_token: str):
    query = '''
    query ($owner: String!, $repo: String!, $projectNumber: Int!, $itemTitle: String!, $itemBody: String!) {
        repository(owner: $owner, name: $repo) {
            projectV2(number: $projectNumber) {
                items(first: 100) {
                    nodes {
                        content {
                            ... on Issue {
                                title
                                body
                            }
                        }
                    }
                }
            }
        }
    }
    '''
    variables = {
        "owner": owner,
        "repo": repo,
        "projectNumber": project_number,
        "itemTitle": item_title,
        "itemBody": item_body,
    }

    data = make_graphql_request(query, variables, personal_access_token)
    if data:
        print(data['data']['repository']['projectV2']['items']['nodes'])

def get_project_items(owner: str, repo: str, project_number: str, personal_access_token: str):
    query = '''
    query ($owner: String!, $repo: String!, $projectNumber: Int!) {
        repository(owner: $owner, name: $repo) {
            projectV2(number: $projectNumber) {
                items(first: 100) {
                    nodes {
                        content {
                            ... on Issue {
                                title
                                body
                            }
                        }
                    }
                }
            }
        }
    }
    '''
    variables = {
        "owner": owner,
        "repo": repo,
        "projectNumber": project_number
    }

    data = make_graphql_request(query, variables, personal_access_token)
    if data:
        print(data['data']['repository']['projectV2']['items']['nodes'])

def get_project_titles(owner: str, repo: str, personal_access_token: str) -> list[str]:
    query = '''
    query ($owner: String!, $repo: String!) {
        repository(owner: $owner, name: $repo) {
            projectsV2(first: 20) {
                nodes {
                    title
                }
            }
        }
    }
    '''
    variables = {
        "owner": owner,
        "repo": repo,
    }

    data = make_graphql_request(query, variables, personal_access_token)
    if data:
        projects = data['data']['repository']['projectsV2']['nodes']
        project_titles = [d["title"] for d in projects]
        return project_titles