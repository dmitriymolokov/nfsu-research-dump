/* spd-match: far pct=9.78 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_int_float/batches/20260724T133755Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_004f7350(...);
int __cdecl FUN_004fd230(...);
int __cdecl FUN_004ffb70(...);
extern int DAT_0073578c;
extern void LAB_0059e735(...);
extern void LAB_0059e74d(...);
extern void LAB_0059e753(...);
extern void LAB_0059e785(...);
extern void LAB_0059e79d(...);
extern void LAB_0059e7a3(...);
extern void LAB_0059e7d5(...);
extern void LAB_0059e7ed(...);
extern void LAB_0059e7f3(...);
extern void LAB_0059e7f8(...);

struct ThisCallBox {
  void FUN_0059e6f0(int *param_2);
};
void ThisCallBox::FUN_0059e6f0(int *param_2) {
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_4;
  
  piVar1 = param_2;
  if (*param_2 != 0) {
    *(int *)(((int)this) + 4) = *param_2;
  }
  local_4 = ((int)this);
  if (param_2[1] != 0) {
    uVar2 = FUN_004fd230();
    if (*(int *)(((int)this) + 4) == 0) {
LAB_0059e735:
      if (DAT_0073578c != 0) {
        iVar3 = FUN_004ef050(uVar2);
        if (iVar3 != 0) goto LAB_0059e74d;
      }
LAB_0059e753:
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_0059e735;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_0059e735;
LAB_0059e74d:
      if (*(int *)(iVar3 + 0x18) != 1) goto LAB_0059e753;
    }
    *(int *)(((int)this) + 0xc) = iVar3;
  }
  if (piVar1[1] != 0) {
    uVar2 = FUN_004fd230();
    if (*(int *)(((int)this) + 4) == 0) {
LAB_0059e785:
      if (DAT_0073578c != 0) {
        iVar3 = FUN_004ef050(uVar2);
        if (iVar3 != 0) goto LAB_0059e79d;
      }
LAB_0059e7a3:
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_0059e785;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_0059e785;
LAB_0059e79d:
      if (*(int *)(iVar3 + 0x18) != 1) goto LAB_0059e7a3;
    }
    *(int *)(((int)this) + 8) = iVar3;
  }
  if (piVar1[3] == 0) goto LAB_0059e7f8;
  uVar2 = FUN_004fd230();
  if (*(int *)(((int)this) + 4) == 0) {
LAB_0059e7d5:
    if (DAT_0073578c != 0) {
      iVar3 = FUN_004ef050(uVar2);
      if (iVar3 != 0) goto LAB_0059e7ed;
    }
LAB_0059e7f3:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_0059e7d5;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_0059e7d5;
LAB_0059e7ed:
    if (*(int *)(iVar3 + 0x18) != 2) goto LAB_0059e7f3;
  }
  *(int *)(((int)this) + 0x10) = iVar3;
LAB_0059e7f8:
  *(int *)(((int)this) + 0x14) = piVar1[5];
  *(int *)(((int)this) + 0x18) = piVar1[4];
  iVar3 = piVar1[6];
  *(int *)(((int)this) + 0x1c) = iVar3;
  *(int *)(((int)this) + 0x20) = iVar3;
  *(int *)(((int)this) + 0x24) = piVar1[7];
  *(int *)(((int)this) + 0x2c) = piVar1[8];
  FUN_004f7350(&param_2,&local_4);
  *(float *)(((int)this) + 0x28) =
       (float)(unsigned int)(param_2) - (*(float *)(((int)this) + 0x2c) + *(float *)(((int)this) + 0x2c));
  return;
}
