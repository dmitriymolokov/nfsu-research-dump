/* spd-match: far pct=47.50 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_00549EA0 */
#include "ghidra_compat.h"
extern int __fastcall FUN_0054b700(int p1, int p2, int p3);
extern int __fastcall FUN_00549ed0(int p1, int p2, int p3);
int __fastcall FUN_00549ea0(int ecx_val, int dummy, int arg1) {
  int* self = (int*)ecx_val;
  if (self[0x68/4] == 0) return 0;
  FUN_0054b700(ecx_val, ecx_val, ecx_val);
  return FUN_00549ed0(ecx_val, arg1, ecx_val);
}
