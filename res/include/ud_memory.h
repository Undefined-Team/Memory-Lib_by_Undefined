#ifndef UD_MEMORY_H
# define UD_MEMORY_H

// Lib
#include <stdlib.h>

// Macro
# define ud_mem_cpy_rs(_dst, _src, _len)   ud_mem_cpy_rs_ctr(_dst, (void**)&(_src), _len)
# define ud_mem_cpy_rd(_dst, _src, _len)   ud_mem_cpy_rd_ctr((void**)&(_dst), _src, _len)
# define ud_mem_cpy_rds(_dst, _src, _len)  ud_mem_cpy_rds_ctr((void**)&(_dst), (void**)&(_src), _len)

// Structures

// Prototypes
void            ud_mem_cpy(void *dst, void *src, size_t len);
void            ud_mem_cpy_rs_ctr(void *dst, void **src, size_t len);
void            ud_mem_cpy_rd_ctr(void **dst, void *src, size_t len);
void            ud_mem_cpy_rds_ctr(void **dst, void **src, size_t len);
void            ud_mem_set(void *dst, int c, size_t len);
int             ud_mem_cmp(void *dst, void *src, size_t len);

#endif