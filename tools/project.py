




def setup_projects(projects: list[str], project_type: str):

repo_id = get_repository_id(owner, repo, personal_access_token)
project_id = get_project_id(owner, repo, 48, personal_access_token)
print(repo_id)
print(project_id)
content_id = create_issue(owner, repo_id, "TEST_ISSUE","TEST_BODY", personal_access_token)
add_issue_to_project(project_id, content_id, personal_access_token)
# get_project_items(owner, repo, 48, personal_access_token)
# setup_projects(libs, "libs")
# setup_projects(actors, "actors")
# setup_projects(framework, "framework")
# setup_projects(boot, "boot")
# setup_projects(m_do, "m_do")
# setup_projects(misc, "misc")
# setup_projects(dylink, "dylink")
# setup_projects(dolzel, "dolzel")