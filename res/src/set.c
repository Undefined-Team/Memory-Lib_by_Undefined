#include <ud_memory.h>

void        ud_mem_set(void *dst, int c, size_t len)
{
  unsigned char *ptr = dst;
  while (len-- > 0) *ptr++ = c;
}