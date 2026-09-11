/* spd-match: far pct=23.38 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0055DB70 */
#include "ghidra_compat.h"
extern int __cdecl FUN_004f0800(int a, int b, int c);
extern int __cdecl FUN_004f3f90(int a);
extern int __cdecl FUN_004f65d0(int a);
extern int DAT_0073578c;
extern int DAT_00746104;
int __fastcall FUN_0055db70(int esi_reg) {
  int* p = (int*)esi_reg;
  int res1;
  int ecx_val;
  int r2;
  res1 = FUN_004f65d0(p[3]);
  if (res1 != 0) {
    *(int*)(res1 + 0x1c) = 0xff;
  }
  ecx_val = DAT_0073578c;
  if (ecx_val != 0) {
    r2 = FUN_004f3f90((int)&DAT_00746104);
    if (r2 != 0) {
      int val = *(int*)(r2 + 0x18);
      if (val != 0) {
        return FUN_004f0800(*(int*)(ecx_val + 8), val, 0x6c22f0);
      }
    }
  }
  return 0;
}
