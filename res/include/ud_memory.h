#ifndef UD_MEMORY_H
# define UD_MEMORY_H

// Lib
#include <stdlib.h>

// Macro

// Structures

// Prototypes
void            ud_mem_cpy(void* dst, void *src, size_t len);
char            *ud_mem_cpy_rs(void* dst, void *src, size_t len);
char            *ud_mem_cpy_rd(void* dst, void *src, size_t len);
void            ud_mem_set(void *dst, int c, size_t len);
int             ud_mem_cmp(void* dst, void *src, size_t len);

#endif