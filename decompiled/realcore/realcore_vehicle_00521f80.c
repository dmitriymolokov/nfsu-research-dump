/* spd-match: far pct=6.21 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00521F80 */
#include <windows.h>
extern int DAT_00735684;
void __fastcall FUN_00521f80(int* eax, int ecx, int edx) {
  eax[0x38/4] = ecx;
  eax[0x3c/4] = edx;
  if (ecx == 0xc) goto L12;
  if (ecx == 0xd) goto L13;
  if (ecx == 8) goto L8;
  if (ecx == 7) goto L7;
  DAT_00735684 = eax[(0x570/4) + ecx] + edx;
  return;
L12: DAT_00735684 = eax[0x5a0/4] + eax[0x40/4] + (edx * 4); return;
L13: DAT_00735684 = eax[0x5a4/4] + eax[0x40/4] + (edx * 5); return;
L8:  DAT_00735684 = eax[0x590/4] + eax[0x40/4] + (edx * 5); return;
L7:  DAT_00735684 = eax[0x58c/4] + eax[0x40/4] + (edx * 5); return;
}
