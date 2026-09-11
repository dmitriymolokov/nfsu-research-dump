/* spd-match: far pct=31.34 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_005472A0 */
#include "ghidra_compat.h"
extern void __cdecl FUN_0043ba60(int, int, int);
extern void __cdecl FUN_005473e0(int, int, int);
extern void __cdecl FUN_005490a0();
extern void __cdecl FUN_0054e530(int);
extern int DAT_006f1e08;
extern int DAT_0073ddc0;
void FUN_005472a0(int val) {
  int* p;
  int edi;
  int ebx = 0;
  DAT_006f1e08--;
  p = (int*)0x73ddc0;
  while (p < (int*)0x73de20) {
    if (p[1] == val) break;
    p += 8;
  }
  edi = *p;
  FUN_005490a0();
  if (ebx) { FUN_0054e530(val); }
  FUN_0043ba60(0x77b240, edi, ebx);
  FUN_005473e0(ebx, edi, val);
}
