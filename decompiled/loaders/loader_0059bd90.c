/* spd-match: far pct=2.27 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_00442690(...);
int __cdecl FUN_004561d0(...);
extern int DAT_006b5a20;
extern int DAT_006b5a24;
extern int DAT_006cc7a4;
extern int DAT_0077af30;
extern int _DAT_006b5a28;
extern void LAB_0059bef4(...);

struct ThisCallBox {
  void FUN_0059bd90(char param_2);
};
void ThisCallBox::FUN_0059bd90(char param_2) {
  int iVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_8 [4];
  int iStack_4;
  
  ((int *)this)[5] = ((int *)this)[5] & 0xfffffffe;
  ((int *)this)[3] = ((int *)this)[3] & 0xfffffffe;
  ((int *)this)[4] = ((int *)this)[4] & 0xfffffffe;
  ((int *)this)[10] = ((int *)this)[10] & 0xfffffffe;
  ((int *)this)[6] = ((int *)this)[6] & 0xfffffffe;
  ((int *)this)[7] = ((int *)this)[7] & 0xfffffffe;
  ((int *)this)[8] = ((int *)this)[8] & 0xfffffffe;
  ((int *)this)[9] = ((int *)this)[9] & 0xfffffffe;
  iVar1 = ((int *)this)[1];
  if (((int *)this)[0xb] != 0) {
    iVar5 = FUN_00442690((&DAT_0077af30)[*(byte *)(((int *)this)[0xb] + 0x83)],DAT_006b5a24,0x24,
                         *(undefined4 *)(iVar1 + 0x814));
    ((int *)this)[0xb] = iVar5;
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*((int *)this) + 0x40))();
      pfVar2 = (float *)((int *)this)[0xb];
      fVar3 = *(float *)(iVar1 + 0x60) - *pfVar2;
      if (iVar5 == 0) {
        fVar3 = fVar3 * pfVar2[4] - (*(float *)(iVar1 + 100) - pfVar2[1]) * pfVar2[3];
        if (fVar3 <= DAT_006cc7a4) {
          fVar3 = -(fVar3 + pfVar2[9]);
        }
        else {
          fVar3 = fVar3 - pfVar2[10];
        }
      }
      else {
        fVar3 = fVar3 * pfVar2[6] - (*(float *)(iVar1 + 100) - pfVar2[1]) * pfVar2[5];
        if (DAT_006cc7a4 <= fVar3) {
          fVar3 = fVar3 - pfVar2[9];
        }
        else {
          fVar3 = -(fVar3 + pfVar2[10]);
        }
      }
      if (_DAT_006b5a28 < fVar3) {
        ((int *)this)[0xb] = 0;
      }
    }
  }
  if (((int *)this)[0xb] == 0) {
    uVar6 = 0x24;
    if (param_2 == '\0') {
      uVar6 = 100;
    }
    iVar1 = ((int *)this)[1];
    cVar4 = FUN_004561d0(local_8,uVar6 | 0x8c0,*(undefined4 *)(iVar1 + 0x814));
    if (cVar4 == '\0') {
      cVar4 = FUN_004561d0(local_8,uVar6,*(undefined4 *)(iVar1 + 0x814));
      if (cVar4 == '\0') goto LAB_0059bef4;
    }
    ((int *)this)[0xb] = iStack_4;
  }
LAB_0059bef4:
  ((int *)this)[0xc] = DAT_006b5a20;
  ((int *)this)[0xe] = *(int *)(((int *)this)[1] + 0x3d4);
  return;
}
