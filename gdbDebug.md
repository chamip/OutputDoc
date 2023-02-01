- run VS start

1、默认情况下，run 指令会一直执行程序，直到执行结束。如果程序中手动设置有断点，则 run 指令会执行程序至第一个断点处；
2、start 指令会执行程序至 main() 主函数的起始位置，即在 main() 函数的第一行语句处停止执行（该行代码尚未执行）。

- print VS display

1. print只能打印一次变量的值，还能修改变量的值（eg. print xx=123）

2. display在每次程序暂停执行时都会打印变量的值（如单步执行）

   一行监控多个变量：`p {var1, var2, var3}`

​	跟踪程序自动显示：`display {var1, var2, var3}`

​	多个变量，其中任何一个改变时显示：`watch {var1, var2, var3}`
