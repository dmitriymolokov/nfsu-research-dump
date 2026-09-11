/* spd-match: far pct=24.62 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.5q/va_00566ED0 */
#include "ghidra_compat.h"

struct ThisCallBox {
  int FUN_00566ed0(int param_2);
};
int ThisCallBox::FUN_00566ed0(int param_2)
{
  int param_1;
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  
  param_1 = (int)this;
  iVar4 = 0;
  if (param_1 != 0) {
    puVar1 = (unsigned int *)(param_1 + 0x28);
    do {
      uVar3 = ((unsigned int)(param_2 - param_1) - 0x30U) / *puVar1;
      if (((int)uVar3 >= 0) && ((int)uVar3 < *(int *)(param_1 + 0x24))) {
        return (int)(uVar3 + (unsigned int)iVar4);
      }
      piVar2 = (int *)(param_1 + 0x24);
      param_1 = *(int *)(param_1 + 8);
      iVar4 = iVar4 + *piVar2;
    } while (param_1 != 0);
  }
  return -1;
}
