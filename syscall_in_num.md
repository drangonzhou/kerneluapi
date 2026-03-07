# syscall in num

按系统调用号列出的系统调用列表

## system call 0 ~ 49

## system call 50 ~ 99

## system call 100 ~ 149

## system call 150 ~ 199

## system call 200 ~ 249

## system call 250 ~ 299

## system call 300 ~ 349

## system call 350 ~ 399

## system call 400 ~ 449

## system call 450 ~ 499

| 系统调用号 | 系统调用名称 | 内核版本 | 功能分类 | 功能说明 |
| ---------- | ------------ | ---------- | ------------ | ------------ |
| 450        | [set_mempolicy_home_node](docs/set_mempolicy_home_node.md) | 5.17  | 内存管理 | 设置指定范围的内存的NUMA节点 |
| 451        | [cachestat](docs/cachestat.md) | 6.5  | 内存管理 | 查询文件的缓存状态 |
| 452        | [fchmodat2](docs/fchmodat2.md) | 6.6  | 文件管理 | 修改文件权限 |
| 453        | [map_shadow_stack](docs/map_shadow_stack.md) | 6.6  | 内存管理 | 映射影子堆栈 |
| 454        | [futex_wake](docs/futex_wake.md) | 6.7  | 进程通信 | futex唤醒等待的进程 |
| 455        | [futex_wait](docs/futex_wait.md) | 6.7  | 进程通信 | futex等待事件发生或超时 |
| 456        | [futex_requeue](docs/futex_requeue.md) | 6.7  | 进程通信 | futex将等待者重新放入队列 |
| 457        | [statmount](docs/statmount.md) | 6.8  | 文件系统 | 获取挂载文件系统的信息 |
| 458        | [listmount](docs/listmount.md) | 6.8  | 文件系统 | 列出挂载的文件系统 |
| 459        | [lsm_get_self_attr](docs/lsm_get_self_attr.md) | 6.8  | 安全管理 | 获取LSM属性 |
| 460        | [lsm_set_self_attr](docs/lsm_set_self_attr.md) | 6.8  | 安全管理 | 设置LSM属性 |
| 461        | [lsm_list_modules](docs/lsm_list_modules.md) | 6.8  | 安全管理 | 获取系统的LSM模块信息 |
| 462        | [mseal](docs/mseal.md) | 6.10  | 内存管理 | 锁定指定内存 |
| 463        | [setxattrat](docs/setxattrat.md) | 6.13  | 文件管理 | 设置文件扩展属性 |
| 464        | [getxattrat](docs/getxattrat.md) | 6.13  | 文件管理 | 获取文件扩展属性|
| 465        | [listxattrat](docs/listxattrat.md) | 6.13  | 文件管理 | 列出文件扩展属性 |
| 466        | [removexattr](docs/removexattr.md) | 6.13  | 文件管理 | 删除文件扩展属性 |
| 467        | [open_tree_attr](docs/open_tree_attr.md) | 6.15  | 文件系统 | 创建一个挂载树 |
| 468        | [file_getattr](docs/file_getattr.md) | 6.17  | 文件管理 | 获取文件的inode属性 |
| 469        | [file_setattr](docs/file_setattr.md) | 6.17  | 文件管理 | 设置文件的inode属性 |
| 470        | [listns](docs/listns.md) | 6.19  | 进程管理 | 获取系统中的namespace列表 |
