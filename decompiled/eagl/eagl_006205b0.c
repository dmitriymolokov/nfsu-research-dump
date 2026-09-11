/* spd-match: far pct=12.23 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0061f7e0();
int __cdecl FUN_0061fd80();
int __cdecl FUN_0061fea0();
int __cdecl FUN_00620250();
int __cdecl FUN_006204e0();
int __cdecl FUN_00621020();
int __cdecl FUN_00621ea0();
int __cdecl FUN_00621f00();
int __cdecl FUN_00622e90();
int __cdecl FUN_00622f00();
int __cdecl FUN_00622fb0();
int __cdecl FUN_00622ff0();
int __cdecl FUN_00623060();
int __cdecl FUN_006230a0();
int __cdecl FUN_00623590();
int __cdecl FUN_006235d0();
int __cdecl FUN_00623650();
int __cdecl FUN_006385a0();
extern int DAT_007096d8;
extern int DAT_00709720;
extern int DAT_00709724;
extern unsigned char *DAT_00709d80;
extern int DAT_00709d8d;
extern int DAT_00709d90;
extern int DAT_00709d94;
extern int DAT_0070a4c8;
extern int _DAT_00709728;
extern int _DAT_0070972c;

int __fastcall FUN_006205b0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  int *apiStack_168 [2];
  
  FUN_00622e90();
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0xf4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xf4) = 0;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0xf8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xf8) = 0;
  }
  FUN_00621ea0();
  FUN_00623590();
  FUN_0040a880();
  FUN_00622fb0();
  FUN_00623060();
  _DAT_0070972c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xd8);
  if (DAT_00709720 == 0) {
    FUN_0061f7e0();
  }
  else {
    FUN_006204e0();
  }
  if (DAT_00709720 != 0) {
    uVar3 = FUN_00620250();
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x60) = uVar3;
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x60) == 0) {
    DAT_00709724 = 0;
  }
  else {
    apiStack_168[1] = (int *)0x620680;
    cVar2 = FUN_0061fea0();
    if (cVar2 == '\0') {
      return -0x7fffbffb;
    }
    DAT_00709724 = 1;
    _DAT_00709728 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40);
  }
  iVar4 = (**(code **)(*DAT_00709d80 + 0x38))();
  if (iVar4 < 0) {
    apiStack_168[1] = (int *)0x6206d9;
    ShowWindow(DAT_007096d8,6);
    apiStack_168[1] = (int *)0x6206e4;
    ShowWindow(DAT_007096d8,9);
    SetActiveWindow(DAT_007096d8);
    Sleep(1);
    iVar4 = (**(code **)(*DAT_00709d80 + 0xc))();
    if (iVar4 != -0x7789f797) {
      return iVar4;
    }
    _DAT_0070972c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xd8);
    if (DAT_00709720 == 0) {
      apiStack_168[1] = (int *)0x620734;
      FUN_0061f7e0();
    }
    else {
      apiStack_168[1] = (int *)0x62072d;
      FUN_006204e0();
    }
    if (DAT_00709720 != 0) {
      apiStack_168[1] = (int *)0x620748;
      uVar3 = FUN_00620250();
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x60) = uVar3;
    }
    iVar4 = *(int *)(param_1 + 0xc);
    apiStack_168[0] = (int *)(iVar4 + 0x60);
    if (*(int *)(iVar4 + 0x60) == 0) {
      DAT_00709724 = 0;
    }
    else {
      apiStack_168[1] = (int *)(iVar4 + 0x5c);
      cVar2 = FUN_0061fea0(*(undefined4 *)(iVar4 + 0xb8),*(undefined4 *)(iVar4 + 0xd0));
      if (cVar2 == '\0') {
        return -0x7fffbffb;
      }
      DAT_00709724 = 1;
      _DAT_00709728 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40);
    }
    apiStack_168[1] = DAT_00709d80;
    apiStack_168[0] = (int *)0x6207bd;
    iVar4 = (**(code **)(*DAT_00709d80 + 0x38))();
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  SetFocus(DAT_007096d8);
  apiStack_168[1] = (int *)0x6207dc;
  ShowWindow(DAT_007096d8,9);
  UpdateWindow(DAT_007096d8);
  SetCursor((HCURSOR)0x0);
  switch(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc4)) {
  case 0:
  case 2:
    apiStack_168[1] = (int *)0x62082e;
    DAT_00709d90 = FUN_006385a0();
    break;
  case 1:
  case 3:
    apiStack_168[1] = (int *)0x620816;
    DAT_00709d94 = FUN_006385a0();
  }
  FUN_0061fd80();
  iVar4 = FUN_00621020();
  if (((*(uint *)(iVar4 + 0x240) & 0x80000) == 0) ||
     (DAT_00709d8d = 1, (*(uint *)(iVar4 + 0x240) & 0x10000) == 0)) {
    DAT_00709d8d = 0;
  }
  FUN_00622f00();
  apiStack_168[1] = (int *)0x0;
  apiStack_168[0] = DAT_00709d80;
  (**(code **)(*DAT_00709d80 + 0x40))();
  if (DAT_00709724 != 0) {
    (**(code **)(*DAT_00709d80 + 0x84))(DAT_00709d80,*(int *)(param_1 + 0xc) + 0xf8);
  }
  FUN_00622ff0();
  FUN_006230a0();
  FUN_00621f00();
  FUN_006235d0();
  FUN_00623650();
  (**(code **)(*DAT_00709d80 + 200))(DAT_00709d80,0x89,DAT_0070a4c8);
  iVar4 = FUN_00621020();
  iVar4 = *(int *)(iVar4 + 0x2c4);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      if (0xf < iVar5) break;
      if (iVar5 < 3) {
        (**(code **)(*DAT_00709d80 + 0xb8))(DAT_00709d80,iVar5,1);
      }
      else {
        (**(code **)(*DAT_00709d80 + 0xb8))(DAT_00709d80,iVar5,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  ppiVar6 = apiStack_168;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppiVar6 = (int *)0x0;
    ppiVar6 = ppiVar6 + 1;
  }
  (**(code **)(*DAT_00709d80 + 0xa8))(DAT_00709d80,apiStack_168);
  return 0;
}
