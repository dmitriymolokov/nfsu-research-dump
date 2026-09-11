/* spd-match: far pct=20.83 flags=/Og /c /nologo /TP method=m39 source=m39/m39/va_005715D0 */
#include "ghidra_compat.h"
extern "C" int __cdecl FUN_00445580();
extern "C" int __cdecl FUN_00445c60();
extern "C" int __cdecl FUN_00445ca0(int param_1);
extern "C" int __cdecl FUN_0053f470(int param_1);
extern "C" int __cdecl FUN_00540680(int param_1);
int __cdecl FUN_005715D0(int *esi, int ebp_val) {
  int ebx = 0;
  if (esi[2] != 0) return 1;
  if (!FUN_00540680(ebp_val)) return 0;
  FUN_0053f470(ebp_val);
  int *p = esi;
  p[0] = 0x3f800000; p[5] = 0x3f800000; p[10] = 0x3f800000; p[15] = 0x3f800000;
  int iVar6 = FUN_00445ca0(ebp_val);
  if (iVar6 == 0) return 0;
  return 1;
}
