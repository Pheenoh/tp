from .util import *

def get_repository_id(owner: str, repo: str, personal_access_token: str) -> str:
    query = '''
    query ($owner: String!, $repo: String!) {
        repository(owner: $owner, name: $repo) {
            id
        }
    }
    '''
    variables = {
        "owner": owner,
        "repo": repo,
    }
    data = make_graphql_request(query, variables, personal_access_token)
    return data['data']['repository']['id'] if data else None