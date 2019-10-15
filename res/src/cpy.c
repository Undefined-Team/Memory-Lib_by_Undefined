#include "ud_memory.h"

void        ud_mem_cpy(void *dst, void *src, size_t len)
{
    char *dstc = (char*)dst;
    char *srcc = (char*)src;
	while (len-- > 0) *dstc++ = *srcc++;
}

void        ud_mem_cpy_rs(void *dst, void **src, size_t len)
{
    char *srcc = *(char**)src;
	while (len-- > 0) *dst++ = *srcc++;
    *src = srcc;
}

void        ud_mem_cpy_rd(void **dst, void *src, size_t len)
{
    char *dstc = *(char**)dst;
	while (len-- > 0) *dstc++ = *src++;
    *dst = dstc;
}

void        ud_mem_cpy_rds(void **dst, void **src, size_t len)
{
    char *dstc = *(char**)dst;
    char *srcc = *(char**)src;
	while (len-- > 0) *dstc++ = *srcc++;
    *dst = dstc;
    *src = srcc;
}