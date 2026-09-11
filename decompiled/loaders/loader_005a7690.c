/* spd-match: far pct=3.92 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_0077af30;
extern int _DAT_006cc83c;

struct ThisCallBox {
  float10 FUN_005a7690(undefined4 param_2);
};
float10 ThisCallBox::FUN_005a7690(undefined4 param_2) {
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)((int *)this)[0x17];
  if ((cVar1 != -1) && (*(short *)((int)((int *)this) + 0x5e) != -1)) {
    if (cVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (&DAT_0077af30)[cVar1];
    }
    iVar2 = *(short *)((int)((int *)this) + 0x5e) * 0x88 + 0x27c + iVar2;
    if (iVar2 != 0) {
      iVar3 = (**(code **)(*((int *)this) + 0x10))(param_2);
      return (float10)((uint)*(byte *)(iVar3 + 0x6a + iVar2) << 0x10) * (float10)_DAT_006cc83c;
    }
  }
  return (float10)DAT_006cc7a4;
}
