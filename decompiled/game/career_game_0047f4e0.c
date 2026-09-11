/* spd-match: far pct=8.13 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_0042c6d0(...);
int __cdecl FUN_0047c580(...);
int __cdecl FUN_0047c9e0(...);
int __cdecl FUN_0048e760(...);
int __cdecl FUN_0048e7b0(...);
extern int DAT_006cc7a4;
extern int DAT_006fc5f0;
extern int DAT_006ffdbc;
extern int DAT_00700aa4;
extern int DAT_0073457c;
extern int DAT_00735f54;
extern int DAT_007361bc;
extern int DAT_007361c4;
extern int DAT_007361f0;
extern int DAT_00779800;
extern int _DAT_00735f58;

struct ThisCallBox {
  void FUN_0047f4e0(undefined4 param_2);
};
void ThisCallBox::FUN_0047f4e0(undefined4 param_2) {
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_007361c4;
  iVar4 = 0;
  if ((*(int *)(((int)this) + 0x20) == 0) || (DAT_00735f54 == 0)) {
    if (DAT_006ffdbc != DAT_006cc7a4) {
      *(float *)(((int)this) + 0x2c) = ((int)(DAT_0073457c)) + *(float *)(((int)this) + 0x2c);
    }
    if (*(float *)(((int)this) + 0x24) <= *(float *)(((int)this) + 0x2c)) {
      FUN_0047c9e0(&DAT_00779800);
    }
    else if (DAT_006fc5f0 != 0) {
      FUN_0047c580(&DAT_00779800,param_2);
    }
    if (*(int *)(((int)this) + 0x20) != 0) {
      iVar5 = *(int *)(((int)(DAT_007361bc)) + 0x27c);
      if (((iVar5 != 0) && (*(int *)(iVar5 + 0xc) == 0x16)) &&
         (((DAT_00735f54 == 0 && (*(float *)(((int)this) + 0x28) <= *(float *)(((int)this) + 0x2c))) ||
          (*(int *)(iVar5 + 0x2c) == 0)))) {
        *(undefined4 *)(((int)this) + 0x20) = 0;
      }
      if ((*(int *)(((int)this) + 0x20) == 0) && (iVar5 = 0, 0 < DAT_007361c4)) {
        do {
          iVar4 = *(int *)(((int)(DAT_007361f0)) + 0x3c);
          iVar2 = (&DAT_007361bc)[iVar5];
          if (((iVar4 == 0) || ((*(int *)(iVar4 + 0x20) == 0 || (*(int *)(iVar4 + 0x1c) == 0)))) &&
             ((*(int *)(((int)(DAT_007361f0)) + 0x40) == 0 ||
              (*(int *)(*(int *)(((int)(DAT_007361f0)) + 0x40) + 0x1c) == 0)))) {
            FUN_0042c6d0(iVar2,(-(DAT_00700aa4 != 0) & 0x10U) + 1,0);
            piVar3 = *(int **)(iVar2 + 0x27c);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x34))();
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_007361c4);
      }
    }
  }
  else if ((DAT_006ffdbc * *(float *)(((int)this) + 0x2c) != _DAT_00735f58) &&
          (*(float *)(((int)this) + 0x2c) = _DAT_00735f58 / DAT_006ffdbc, 0 < iVar5)) {
    do {
      if ((*(int *)((&DAT_007361bc)[iVar4] + 0x27c) != 0) &&
         (*(int *)(*(int *)((&DAT_007361bc)[iVar4] + 0x27c) + 0xc) == 0x16)) {
        uVar1 = *(undefined4 *)(((int)this) + 0x2c);
        FUN_0048e760();
        FUN_0048e7b0(uVar1,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_007361c4);
    return;
  }
  return;
}
