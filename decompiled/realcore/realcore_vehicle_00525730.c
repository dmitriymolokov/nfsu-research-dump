/* spd-match: far pct=17.71 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s1/va_00525730 */
#include "ghidra_compat.h"
extern int __cdecl FUN_0064c000(void*);
extern int __cdecl FUN_0064c1a0(void*, int*);
extern int DAT_0073d7fc;
extern void* PTR_s_FX_NITROUS_01_006f2238;
void __cdecl FUN_00525730(int a, int b, int c, int d, int e, int* esi) {
  int* target = esi + 1;
  target[0] = (a < 0) ? 0 : (a > 2 ? 2 : a);
  target[1] = (b < 0) ? 0 : (b > 0x7fff ? 0x7fff : b);
  target[2] = (c < 0) ? 0 : (c > 0x1fff ? 0x1fff : c);
  target[3] = (d < 0) ? 0 : (d > 0xffff ? 0xffff : d);
  target[4] = (e < 0) ? 0 : (e > 1 ? 1 : e);
  if (FUN_0064c1a0(&DAT_0073d7fc, target) < 0) {
    FUN_0064c000(&PTR_s_FX_NITROUS_01_006f2238);
    FUN_0064c1a0(&DAT_0073d7fc, target);
  }
}
