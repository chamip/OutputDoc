### gitee与github同步

---

#### 命令行方式同步

1. 删除已关联的名为origin远程库：`git remote rm origin`
2. 关联github远程库：`git remote add github git@github.com:chamip/OutputDoc`
3. 关联gitee远程库：`git remote add igtee git@github.com:chamip/OutputDoc`

#### 查看远程库

使用`git remote -v`查看远程库信息。

```
gitee	git@gitee.com:chamip/OutputDoc (fetch)
gitee	git@gitee.com:chamip/OutputDoc (push)
github	git@github.com:chamip/OutputDoc (fetch)
github	git@github.com:chamip/OutputDoc (push)
```

说明配置生效。

#### 上传代码

```
git add .
git commit -m "test gitee"
```

#### 提交到github

```
git push github main
```

#### 提交到gitee

```
git push gitee main
```

更新代码

```
#从github拉取
git pull github

#从gitee拉取
git pull gitee
```

