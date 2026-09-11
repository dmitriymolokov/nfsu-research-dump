/* spd-match: far pct=21.25 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0054A4E0 */
#include "ghidra_compat.h"
extern int DAT_007346c8, DAT_0073d868, DAT_0073ddac, DAT_0073ddb0, DAT_0073dda8;
extern int __cdecl FUN_0054b7b0(void*);
void __fastcall FUN_0054a4e0(int obj, int edx, int p2, int p3) {
  if (*(int*)(obj + 0x68) == 0) return;
  *(int*)(obj + 0x540) = 9;
  *(int*)(obj + 0x544) = p3;
  DAT_0073ddb0 = edx;
  DAT_007346c8 = 0;
  FUN_0054b7b0(&DAT_0073d868);
  DAT_0073dda8 = 0;
  DAT_0073ddac = 0;
}
