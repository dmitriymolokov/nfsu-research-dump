/* spd-match: far pct=18.97 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.5/va_00577D10 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);


struct ThisCallBox {
  int key;
  int pad_c;
  int pad_10;
  void *list_head;
  int FUN_00577d10(int param_2);
};
int ThisCallBox::FUN_00577d10(int param_2) {
  int param_1 = (int)this;
  undefined4 *puVar1;
  int iVar2;

  if (param_2 != *(int *)(param_1 + 0x10)) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x20); puVar1 != (undefined4 *)(param_1 + 0x20);
        puVar1 = (undefined4 *)*puVar1) {
      iVar2 = ((ThisCallBox *)puVar1)->FUN_00577d10(param_2);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    param_1 = 0;
  }
  return param_1;
}
