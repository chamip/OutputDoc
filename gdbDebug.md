

### GDB调试笔记

#### 主要功能

GDB主要有以下功能：

- 设置断点
- 单步调试
- 查看变量的值
- 动态改变程序的执行环境
- 分析崩溃程序产生的core文件

#### 常用命令

| 序号 | 命令                      | 简写                | 含义                                        |
| ---- | ------------------------- | ------------------- | ------------------------------------------- |
| 1    | file <file>               | -                   | 装入待调试的可执行文件                      |
| 2    | **run**                   | r                   | 执行程序(至结束)                            |
| 3    | **start**                 | -                   | 开始调试(至main开始处暂停)                  |
| 4    | **step**                  | s                   | 执行一条程序，若为函数则进入内部执行        |
| 5    | **next**                  | n                   | 执行一条程序，不进入函数内部                |
| 6    | continue                  | c                   | 连续运行                                    |
| 7    | finish                    | -                   | 运行到当前函数返回                          |
| 8    | kill                      | k                   | 终止正在调试的程序                          |
| 9    | **list**                  | l                   | 列出源代码的一部分(10行)                    |
| 10   | **print** <tmp>           | p <tmp>             | 打印变量的值                                |
| 11   | **info locals**           | i locals            | 查看当前栈帧的局部变量                      |
| 12   | **backtrace**             | bt                  | 查看函数调用栈帧编号                        |
| 13   | **frame** <id>            | f <id>              | 选择栈帧(再看局部变量)                      |
| 14   | **display** <tmp>         | -                   | 每次自动显示跟踪的变量的值                  |
| 15   | undisplay <tmp>           | -                   | 取消跟踪                                    |
| 16   | **break** <num>           | b                   | 设置(调试)断点                              |
| 17   | delete breakpoints <num>  | d breakpoints <num> | 删除断点，不加行号则删除所有                |
| 18   | disable breakpoints <num> | -                   | 屏蔽断点                                    |
| 19   | enable breakpoints <num>  | -                   | 启用断点                                    |
| 20   | **info breakpoints**      | i breakpoints       | 显示所有断点                                |
| 21   | break 9 if sum != 0       | -                   | 根据条件设置断点(sum不等于0时，第9行设断点) |
| 22   | **set var** sum=0         | -                   | 修改变量的值(使sum变量的值为0)              |
| 23   | watch <tmp>               | -                   | 监视一个变量的值                            |
| 24   | examine <...>             | -                   | 查看内存中的地址                            |
| 25   | jump <num>                | j                   | 跳转执行                                    |
| 26   | signal <...>              | -                   | 产生信号量                                  |
| 27   | return                    | -                   | 强制函数返回                                |
| 28   | call <fun>                | -                   | 强制调用函数                                |
| 29   | make <...>                | -                   | 不退出gdb下重新产生可执行文件               |
| 30   | shell <...>               | -                   | 不退出gdb下执行shell命令                    |
| 31   | **quit**                  | q                   | 退出gdb环境                                 |

#### 相似命令的区别

- run VS start

1、默认情况下，run 指令会一直执行程序，直到执行结束。如果程序中手动设置有断点，则 run 指令会执行程序至第一个断点处；
2、start 指令会执行程序至 main() 主函数的起始位置，即在 main() 函数的第一行语句处停止执行（该行代码尚未执行）。

- print VS display

1. print只能打印一次变量的值，还能修改变量的值（eg. print xx=123）

2. display在每次程序暂停执行时都会打印变量的值（如单步执行）

   一行监控多个变量：`p {var1, var2, var3}`

​	跟踪程序自动显示：`display {var1, var2, var3}`

​	多个变量，其中任何一个改变时显示：`watch {var1, var2, var3}`
