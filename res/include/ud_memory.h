#ifndef UD_MEMORY_H
# define UD_MEMORY_H

// Lib
#include <stdlib.h>

// Macro
# define ud_mem_cpy_rs(dst, src, len)   ud_mem_cpy_rs_ctr(dst, (void**)&src, len)
# define ud_mem_cpy_rd(dst, src, len)   ud_mem_cpy_rd_ctr((void**)&dst, src, len)
# define ud_mem_cpy_rds(dst, src, len)  ud_mem_cpy_rds_ctr((void**)&dst, (void**)&src, len)

// Structures

// Prototypes
void            ud_mem_cpy(void *dst, void *src, size_t len);
void            ud_mem_cpy_rs_ctr(void *dst, void **src, size_t len);
void            ud_mem_cpy_rd_ctr(void **dst, void *src, size_t len);
void            ud_mem_cpy_rds_ctr(void **dst, void **src, size_t len);
void            ud_mem_set(void *dst, int c, size_t len);
int             ud_mem_cmp(void *dst, void *src, size_t len);

#endif