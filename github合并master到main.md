### github合并master到main

---

在本地创建的仓库推送到main时，分支名时master，推送之后内容还是在master，并没有显示在main，此时就需要合并分支。

```
git checkout main
//切换分支到main
git branch
//list branch
git merge master --allow-unrelated-histories
//合并
git pull origin main
//拉取
git push origin main
```

