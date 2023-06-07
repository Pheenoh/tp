from .util import *

def create_issue(owner: str, repo: str, issue_title: str, issue_body: str, personal_access_token: str):
    mutation = """
    mutation CreateIssue($input: CreateIssueInput!) {
        createIssue(input: $input) {
            issue {
                id
            }
        }
    }
    """

    variables = {
        "input": {
            "repositoryId": repo,
            "title": issue_title,
            "body": issue_body
        }
    }

    data = make_graphql_request(mutation, variables, personal_access_token)
    contentId = data["data"]["createIssue"]["issue"]["id"] if data else None
    return contentId

def add_issue_to_project(project_id: int, contentId: str, personal_access_token: str):
    mutation = """
    mutation AddProjectV2ItemById($input: AddProjectV2ItemByIdInput!) {
        addProjectV2ItemById(input: $input) {
            clientMutationId
        }
    }
    """

    variables = {
        "input": {
            "projectId": project_id,
            "contentId": contentId,
            "clientMutationId": "UNIQUE_ID"
        }
    }

    response = make_graphql_request(mutation, variables, personal_access_token)
    if response:
        print(json.dumps(add_to_project_response, indent=4))