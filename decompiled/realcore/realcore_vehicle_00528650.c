/* spd-match: far pct=17.50 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00528650 */
#include "ghidra_compat.h"
extern int __stdcall FUN_00528610();
extern int __stdcall FUN_005286b0();
extern void __stdcall FUN_0064bc30(void* p);
extern unsigned char* DAT_007356a8;
void __stdcall FUN_00528650(int* obj) {
  int* p238 = *(int**)((char*)obj + 0x238);
  if (p238 && *(char*)((char*)obj + 0xc)) {
    if (*(DAT_007356a8 + 0x84)) {
      p238[2] = 0;
    }
    if (*p238) {
      FUN_0064bc30(p238 + 1);
    }
    if (FUN_00528610()) {
      FUN_005286b0();
    }
  }
}
