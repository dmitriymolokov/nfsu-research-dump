/* spd-match: far pct=68.52 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00567DA0 */
#include "ghidra_compat.h"
int __fastcall FUN_00567da0(unsigned char *a1, unsigned char *edx_param) {
  unsigned char c1, c2;
  unsigned char *esi = a1;
  unsigned char *edx = edx_param;
  do {
    c1 = *esi;
    if (c1 >= 'a' && c1 <= 'z') c1 &= 0x5f;
    c2 = *edx;
    esi++;
    if (c2 >= 'a' && c2 <= 'z') c2 &= 0x5f;
    edx++;
  } while (c1 && c2 && c1 == c2);
  return (int)(char)c1 - (int)(char)c2;
}
