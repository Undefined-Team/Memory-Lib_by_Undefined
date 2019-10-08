#include "ud_memory.h"

void        ud_mem_cpy(void* dst, void *src, size_t len)
{
    char *dstc = (char*)dst;
    char *srcc = (char*)src;
	while (len-- > 0) *dstc++ = *srcc++;
}

char        *ud_mem_cpy_rs(void* dst, void *src, size_t len)
{
    char *dstc = (char*)dst;
    char *srcc = (char*)src;
	while (len-- > 0) *dstc++ = *srcc++;
    return srcc - 1;
}

char        *ud_mem_cpy_rd(void* dst, void *src, size_t len)
{
    char *dstc = (char*)dst;
    char *srcc = (char*)src;
	while (len-- > 0) *dstc++ = *srcc++;
    return dstc - 1;
}