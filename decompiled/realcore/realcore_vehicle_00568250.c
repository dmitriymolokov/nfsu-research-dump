/* spd-match: far pct=36.36 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00568250 */
#include "ghidra_compat.h"
extern int *ptr_007677a8;
extern int *ptr_0075eef8;
int __cdecl FUN_004b5df0(void);
int __cdecl FUN_00568200(int);
int __cdecl FUN_005682d0(void);
int __cdecl FUN_005a0ce0(int);
int __cdecl FUN_005a0dc0(int, int);
void __fastcall FUN_00568250(int val, int dummy) {
  if (val >= 0 && val < 0x100) {
    FUN_005a0ce0((int)ptr_0075eef8);
    if (FUN_00568200(val)) {
      FUN_004b5df0();
    } else {
      FUN_005a0dc0((int)ptr_0075eef8, val);
      FUN_005682d0();
    }
  }
}
