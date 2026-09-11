/* spd-match: far pct=29.07 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern unsigned char *DAT_0070d364;
extern void LAB_0062930f(...);

struct ThisCallBox {
  void FUN_006292c0(int param_2);
};
void ThisCallBox::FUN_006292c0(int param_2) {
  ushort uVar1;
  undefined4 uVar2;
  
  if (*(int *)(((int)this) + 0x14) == 0) {
    uVar1 = **(ushort **)(param_2 + 4);
  }
  else {
    if (**(ushort **)(param_2 + 4) < **(ushort **)(*(int *)(((int)this) + 0xc) + 4)) goto LAB_0062930f;
    (**(code **)(*DAT_0070d364 + 0x18))(*(int *)(((int)this) + 0x14));
    uVar1 = **(ushort **)(param_2 + 4);
  }
  uVar2 = (**(code **)(*DAT_0070d364 + 0x14))((uint)uVar1 << 2);
  *(undefined4 *)(((int)this) + 0x14) = uVar2;
LAB_0062930f:
  *(int *)(((int)this) + 0xc) = param_2;
  *(undefined4 *)(((int)this) + 0x10) = 0xffffffff;
  return;
}
