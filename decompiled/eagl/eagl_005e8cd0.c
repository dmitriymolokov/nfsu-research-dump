/* spd-match: far pct=8.20 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_005E8CD0 */
#include "ghidra_compat.h"
int __cdecl FUN_0061319b(short *a, int b, int c, int d);
extern int DAT_006a37cc, DAT_006a37d0, DAT_006a37d4;
int __cdecl FUN_005e8cd0(int param_2, char *param_3, short *param_4, short param_5, unsigned int param_6) {
  int iVar1 = (int)param_3;
  param_6 |= 0x80000000;
  if (DAT_006a37d4 != *param_4 && DAT_006a37d0 != *param_4 && DAT_006a37cc != *param_4) {
    short arr[] = {1, 3, 1, 4, 1, 0};
    int res = FUN_0061319b(arr, 0x10, 6, iVar1 + 0xc);
    if (res < 0) return res;
    return FUN_0061319b(param_4, -1, 7, iVar1);
  }
  return 0;
}
