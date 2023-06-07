import os, requests, json

def print_files(directory: str):
    for root, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith((".c", ".cpp")):
                file_path = os.path.join(root, file)
                num_dirs = root[len(directory):].count(os.sep)
                print(f"File: {file_path}, Number of folders: {num_dirs}")


def list_directories(directory: str):
    for dir in os.listdir(directory):
        dir_path = os.path.join(directory, dir)
        if os.path.isdir(dir_path):
            print(dir_path)

def make_graphql_request(query_or_mutation: str, variables: dict, personal_access_token: str):
    url = 'https://api.github.com/graphql'
    headers = {
        'Authorization': f'Bearer {personal_access_token}',
        'Accept': 'application/vnd.github.v3+json'
    }
    payload = {
        'query': query_or_mutation,
        'variables': variables
    }
    response = requests.post(url, headers=headers, json=payload)
    data = response.json()

    if 'errors' in data:
        error_message = data['errors'][0]['message']
        print(f"Fail. Error: {error_message}")
        return None

    return data