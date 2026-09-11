/* spd-match: far pct=3.64 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_09/attempt2/handle_thiscall */
#include "ghidra_compat.h"

int __stdcall ReleaseMutex(void *);

extern unsigned char *DAT_00713c50;

struct ThisCallBox {
  undefined4 FUN_0064bc30(undefined4 param_2);
};
undefined4 ThisCallBox::FUN_0064bc30(undefined4 param_2) {
  undefined4 *puVar1;
  
  WaitForSingleObject(&DAT_00713c50[0],0xffffffff);
  for (puVar1 = *(undefined4 **)(((int)this) + 8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_2,puVar1[3]);
  }
  ReleaseMutex(DAT_00713c50);
  return 0;
}
