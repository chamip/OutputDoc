#### 使用github管理git仓库一般步骤

1. 安装git
2. 创建ssh_key，配置git

- ​	设置`username` & 'email'

​	`git config --global user.name xxx`

​	`git config --global user.email yyy`

- ​	创建ssh_key

​	`ssh-keygen -t rsa -C "yyy"`

- ​	查看id_rsa.pub，粘贴到git上

  `cat .ssh/id_rsa.pub`

- ​	验证

​	`ssh -T git@github.com`


#### 常用操作
-- 查看每一次的提交记录
`git reflog`
包括reset回退到某版本之后，该版本之后的提交信息，常用于回滚到最新版本。
`git reset --hard （最新版本的commit id）`

