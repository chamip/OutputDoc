remotes：指远程服务器上的存储库（如 GitLab、Gitea 或 GitHub）；
origin：系统中远程仓库的别名；
HEAD：默认分支，如果没有指定分支，则 clone 该分支。

删除远程分支
git push origin --delete branch-name

删除本地残留的无效远端分支
git remote prune origin
