/* spd-match: far pct=28.57 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.6-c3-ctx/va_005794C0 */
#include "ghidra_compat.h"
extern int DAT_0073b0dc;
extern int *DAT_0073b0e0;
extern int __cdecl FUN_00579140(void);
void __fastcall FUN_005794c0(int *eax) {
  int *esi = (int *)*eax;
  if (--esi[0x36] == 0) {
    if (esi[0x38] != 0) {
      int *a = (int *)esi[0];
      int *b = (int *)esi[1];
      *b = (int)a;
      *(int *)(a + 1) = (int)b;
      esi[0x38] = 0;
      FUN_00579140();
    }
    *(int **)DAT_0073b0e0 = esi;
    esi[1] = (int)DAT_0073b0e0;
    DAT_0073b0e0 = esi;
    *esi = (int)&DAT_0073b0dc;
  }
}
