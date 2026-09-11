/* spd-match: far pct=25.77 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0055CD50 */
#include "ghidra_compat.h"
extern int __cdecl FUN_004f7660(float, float);
extern int DAT_0070649c;
extern int DAT_007064a0;
extern unsigned char DAT_007064b2;
void __fastcall FUN_0055cd50(int obj) {
  int i = 4;
  int *p = (int *)(obj + 0x64);
  while (i > 0) {
    if (*p && DAT_007064b2) {
      float f1 = (float)(DAT_007064a0 + 0xFFFFFF10);
      float f2 = (float)(DAT_0070649c + 0xFFFFFEC0);
      FUN_004f7660(f1, f2);
    }
    p++;
    i--;
  }
}
