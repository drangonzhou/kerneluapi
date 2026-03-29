
# file_getattr (468) 系统调用

获取文件属性，类似 ioctl 的 FS_IOC_FSGETXATTR 命令，但使用 *at() 机制，不需要打开文件fd而是直接按文件名操作。

## 参考资料

- [man page : file_getattr.2](https://www.man7.org/linux/man-pages/man2/file_getattr.2.html)
- [article : lwn.net](https://lwn.net/Articles/1020992/)
- [内核实现：]()

## 接口说明

```
long file_getattr( int dirfd, const char *pathname,	struct fsxattr *fsx, size_t size, unsigned int at_flags );
```
参数说明：
- dirfd：如果pathname是绝对路径，则difrd忽略，如果pathname为空，则操作此fd，否则pathname相对于此目录
- pathname：文件路径，可以是绝对路径或者相对路径
- fsx：存放文件属性的缓冲区
- size：缓冲区大小
- at_flags: 标志位

返回值：成功0成功，此时fsx存放文件属性，失败返回 -1 并设置 errno



