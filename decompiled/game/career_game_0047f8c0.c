/* spd-match: far pct=8.78 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_0047c580(...);
int __cdecl FUN_0048e760(...);
int __cdecl FUN_0048e7b0(...);
extern int DAT_006fc5f0;
extern int DAT_006ffdbc;
extern int DAT_0073457c;
extern int DAT_00735f54;
extern int DAT_007361bc;
extern int DAT_007361c4;
extern int DAT_00779800;
extern int _DAT_00735f58;

struct ThisCallBox {
  void FUN_0047f8c0(undefined4 param_2);
};
void ThisCallBox::FUN_0047f8c0(undefined4 param_2) {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_007361c4;
  if ((*(int *)(((int)this) + 0x1c) == 0) || (DAT_00735f54 == 0)) {
    *(float *)(((int)this) + 0x28) = ((int)(DAT_0073457c)) + *(float *)(((int)this) + 0x28);
    if ((*(int *)(((int)this) + 0x1c) != 0) && (iVar3 = 0, 0 < DAT_007361c4)) {
      do {
        iVar2 = *(int *)((&DAT_007361bc)[iVar3] + 0x27c);
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == 0x16)) && (*(int *)(iVar2 + 0x2c) == 0)) {
          FUN_0048e760();
          FUN_0048e7b0(*(undefined4 *)(((int)this) + 0x20),1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_007361c4);
    }
    if (DAT_006fc5f0 != 0) {
      FUN_0047c580(&DAT_00779800,param_2);
    }
  }
  else if (DAT_006ffdbc * *(float *)(((int)this) + 0x28) != _DAT_00735f58) {
    iVar2 = 0;
    *(float *)(((int)this) + 0x28) = _DAT_00735f58 / DAT_006ffdbc;
    if (0 < iVar3) {
      do {
        if ((*(int *)((&DAT_007361bc)[iVar2] + 0x27c) != 0) &&
           (*(int *)(*(int *)((&DAT_007361bc)[iVar2] + 0x27c) + 0xc) == 0x16)) {
          uVar1 = *(undefined4 *)(((int)this) + 0x28);
          FUN_0048e760();
          FUN_0048e7b0(uVar1,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_007361c4);
      return;
    }
  }
  return;
}
