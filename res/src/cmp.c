#include "ud_memory.h"

int        ud_mem_cmp(void *dst, void *src, size_t len)
{
    char *dstc = (char*)dst;
    char *srcc = (char*)src;
	while (len-- > 0) if (*dstc++ != *srcc++) return *--dstc - *--srcc;
    return 0;
}