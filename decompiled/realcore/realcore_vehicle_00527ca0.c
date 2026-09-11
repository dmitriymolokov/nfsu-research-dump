/* spd-match: far pct=17.78 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00527CA0 */
#include "ghidra_compat.h"
int __cdecl FUN_00527c60(int p1);
extern int DAT_006f1dd8;
extern int *DAT_006f4ee8;
void __fastcall FUN_00527ca0(int obj, int edx, int p1, int p2, int p3, int p4) {
  int *p_base;
  int idx;
  int val;
  p_base = (int *)(*(int *)(obj + 4) + 0x12c0);
  if (DAT_006f1dd8 != 0 && *(int *)(obj + 0x230) != 0) {
    idx = *p_base;
    val = DAT_006f4ee8[idx];
    FUN_00527c60(4);
    FUN_00527c60(4);
    FUN_00527c60(4);
  }
}
