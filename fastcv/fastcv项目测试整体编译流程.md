### fastcv项目测试整体编译流程

---

#### 先putty远程进入服务器环境：

1. 终端：`putty`，打开GUI，输入ip（192.168.146.42），输入用户名（tianqing)，密码（123456）。
2. 启动`docker`：`sudo docker exec -it build /bin/bash`，切换`root`用户：`su scm`。
3. 进入目录`UsbUpgrade`编译文件：

```
cd home/scm/
cd disk/descartes/
cd apps/qnx_ap/
source setenv_64.sh
cd ../../
cd qnx_ap/ts/
cd proprietary/
cd UsbUpgrade/
//修改common.mk
vim commom.mk
//修改NAME变量(=fastcndownscale_color_ch)，方便得到自己编译的可执行文件
//在UsbUpgrade下make
make
//拷贝可执行文件到本地
cd aarch64/o-le/
scp fastcvdownscale_color_ch chamip1@192.168.146.40:/home/chamip1/fastcv
```

4. 终端（home/chamip1/fastcv）推送本地可执行文件到共享目录

   `adb push fastcvdownscale_color_ch /sdcard/QNXtemp`

5. 终端启动ftp服务，并将/sdcard/QNXtemp/作为根目录：

   `adb shell "busybox tcpsvd -vE 0.0.0.0 21 busybox ftpd -w -A /sdcard/QNXtemp"`

6. 终端进入QNX环境执行获取

   ```
   adb shell
   busybox telnet 192.168.1.1
   //连接android开发板，方便共享文件
   ftp 192.168.1.3
   //QNX得到可执行文件
   get fastcvdownscale_color_ch
   //qnx执行
   //新开终端
   adb shell
   busybox telnet 192.168.1.1
   ./fastcvdownscale_color_ch
   //进入qnx环境top查看cpu直到稳定
   top
   //连接android开发板，方便共享文件
   ftp 192.168.1.3
   put dst.yuv
   //终端
   adb pull /sdcard/QNXtemp/dst.yuv /home/chamip1/fastcv/
   ```

7. 查看输出文件

   `ffplay -f rawvideo -video_size 1920*1080 dst.yuv`

