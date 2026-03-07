
# listns 系统调用 （470）

## 简介

## 接口说明

```
    struct ns_id_req {
        __u32 size;         /* sizeof(struct ns_id_req) */
        __u32 spare;        /* Reserved, must be 0 */
        __u64 ns_id;        /* Last seen namespace ID (for pagination) */
        __u32 ns_type;      /* Filter by namespace type(s) */
        __u32 spare2;       /* Reserved, must be 0 */
        __u64 user_ns_id;   /* Filter by owning user namespace */
    };

long listns( const struct ns_id_req * req, uint64_t * ns_ids, size_t nr_ns_ids, unsigned int flags );
```
参数说明：
- req：请求参数，包含了分页信息、过滤信息等
- ns_ids：返回的命名空间 ID 列表
- nr_ns_ids：ns_ids 数组的最大长度
- flags：标志位，目前只支持 0

返回值：成功返回实际个数，失败返回 -1 并设置 errno

（TODO）返回的ns_ids 的用途


## 参考资料

- [listns manpage](https://www.man7.org/linux/man-pages/man2/setns.2.html)
- [listns lwn.net](hhttps://lwn.net/Articles/1043824/)
