/* spd-match: far pct=8.00 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_005EC8B6 */
#include "ghidra_compat.h"

int __cdecl FUN_005e9c6c(int a);
int __cdecl FUN_005ed576(void* p1, void* p2, int p3);

void* FUN_005ec8b6(void* dst, int stride, void* src, int src_stride, int p5, unsigned int count) {
  unsigned int num_blocks = count >> 2;
  unsigned char* p_dst = (unsigned char*)dst;
  unsigned char* p_src = (unsigned char*)src;
  if (num_blocks > 0) {
    FUN_005e9c6c(p5);
    do {
      *(float*)(p_dst) = *(float*)(p_src);
      p_src += src_stride;
      p_dst += stride;
      num_blocks--;
    } while (num_blocks > 0);
  }
  return dst;
}
