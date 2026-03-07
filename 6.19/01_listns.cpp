// 01_listns.cpp : listns system call

#include <stdint.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

#define K_NR_listns 470

struct k_ns_id_req
{
	uint32_t size;
	uint32_t spare;
	uint64_t ns_id;
	uint32_t ns_type;
	uint32_t spare2;
	uint64_t user_ns_id;
};

long k_listns( const struct k_ns_id_req * req, uint64_t * ns_ids, uint64_t nr_ns_ids, uint32_t flags )
{
	long ret = syscall( K_NR_listns, req, ns_ids, nr_ns_ids, flags );
	return ret;
}

int main( int argc, char * argv[] )
{
	struct k_ns_id_req req;
	memset( &req, 0, sizeof(req) );
	req.size = sizeof(req);
	uint64_t ns_ids[1024] = {0};
	long ret = k_listns( &req, ns_ids, 1024, 0 );
	printf( "ret = %ld, errno %d\n", ret, errno );
	for( int i = 0; i < 10 && i < ret; ++i )
	{
		printf( "%2d : %llu\n", i, (unsigned long long)ns_ids[i] );
	}
	return 0;
}
