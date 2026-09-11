/* spd-match: far pct=53.12 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_004F1680 */
#include <windows.h>

unsigned int __fastcall FUN_004f1680(unsigned int val, void* esi) {
  unsigned int i = 0;
  unsigned int* p = (unsigned int*)((unsigned char*)esi + 0x5150);
  while (i < 0x20) {
    if (*p == val) return p[1];
    p += 2;
    i++;
  }
  return 0;
}
