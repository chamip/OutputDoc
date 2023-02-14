#### apue编译运行示例

1. 下载源码（`chamip/apue.3e`），解压，`make`
2. 拷贝`apue.h`和`error.c`到 `/usr/local/include`下

```shell
cp ./include/apue.h /usr/local/include
cp ./lib/error.c /usr/local/include
```

3. `vim /usr/local/include/apue.h`, 在下图光标上 添加一行 `#include “error.c"`