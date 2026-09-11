/* spd-match: far pct=5.30 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0040bd40(...);
int __cdecl FUN_00438aa0(...);
int __cdecl FUN_0046aa40(...);
int __cdecl FUN_004745b0(...);
int __cdecl FUN_00474730(...);
int __cdecl FUN_00474d40(...);
int __cdecl FUN_00674898(...);
extern int DAT_006ffde8;
extern int _DAT_006cc7dc;
extern int _DAT_006cc90c;
extern int _DAT_006f0738;
extern void LAB_00474af2(...);

struct ThisCallBox {
  float10 FUN_00474a90(float param_2);
};
float10 ThisCallBox::FUN_00474a90(float param_2) {
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  LARGE_INTEGER local_20;
  LARGE_INTEGER LStack_18;
  LARGE_INTEGER LStack_10;
  
  QueryPerformanceCounter(&local_20);
  iVar3 = *(int *)(*(int *)(((int)this) + 0x34) + 0x38);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x130) = 0;
      *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x134) = 0;
      *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x138) = 0;
      uVar2 = DAT_006ffde8;
      *(undefined1 *)(*(int *)(((int)this) + 0x28) + 0x30) = 0;
      *(undefined4 *)(*(int *)(((int)this) + 0x24) + 400) = uVar2;
      goto LAB_00474af2;
    }
    if (iVar3 != 2) goto LAB_00474af2;
  }
  *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x130) = 1;
  *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x134) = 1;
  *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x138) = 1;
  *(undefined1 *)(*(int *)(((int)this) + 0x28) + 0x30) = 1;
  *(undefined4 *)(*(int *)(((int)this) + 0x24) + 400) = 0x411ccccd;
LAB_00474af2:
  if (*(int *)(*(int *)(((int)this) + 0x34) + 0x3cc) == 0) {
    *(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x138) = 0;
  }
  FUN_004745b0();
  *(undefined2 *)(*(int *)(((int)this) + 0x24) + 0x130) = *(undefined2 *)(*(int *)(((int)this) + 4) + 0x1d0)
  ;
  *(undefined4 *)(*(int *)(((int)this) + 0x24) + 0x128) = *(undefined4 *)(*(int *)(((int)this) + 4) + 0x1dc)
  ;
  uVar2 = (**(code **)(**(int **)(((int)this) + 4) + 0x24))();
  *(undefined4 *)(*(int *)(((int)this) + 0x24) + 0x134) = uVar2;
  fVar1 = *(float *)(*(int *)(((int)this) + 4) + 0x1e4);
  local_20.s.LowPart = (DWORD)(*(float *)(*(int *)(((int)this) + 4) + 0x1e0) * _DAT_006cc7dc);
  if (fVar1 <= (float)local_20.s.LowPart) {
    fVar1 = (float)local_20.s.LowPart;
  }
  *(float *)(*(int *)(((int)this) + 0x24) + 300) = fVar1;
  *(undefined4 *)(*(int *)(((int)this) + 0x28) + 0x10) = *(undefined4 *)(*(int *)(((int)this) + 4) + 0x1dc);
  *(float *)(*(int *)(((int)this) + 0x28) + 0x14) =
       (float)*(int *)(*(int *)(((int)this) + 0x30) + 0x38c) * _DAT_006cc90c;
  if (*(char *)(*(int *)(*(int *)(((int)this) + 0x34) + 0x14) + 0x734) != '\0') {
    iVar3 = FUN_00438aa0();
    *(undefined4 *)(*(int *)(((int)this) + 0x24) + 0x1e0) = *(undefined4 *)(iVar3 + 0x23c);
  }
  iVar3 = *(int *)(((int)this) + 0x30);
  *(undefined4 *)(iVar3 + 0x2f0) = 0;
  *(undefined4 *)(iVar3 + 0x2f4) = 0;
  *(undefined4 *)(iVar3 + 0x2f8) = 0;
  *(undefined4 *)(iVar3 + 0x2fc) = 0;
  FUN_00474d40(*(undefined4 *)(*(int *)(((int)this) + 0x34) + 0x404));
  iVar3 = FUN_00674898();
  iVar3 = iVar3 + 1;
  local_20.s.LowPart = (DWORD)(param_2 / (float)iVar3);
  if (0 < iVar3) {
    do {
      _DAT_006f0738 = (float)local_20.s.LowPart;
      QueryPerformanceCounter(&LStack_18);
      FUN_0046aa40(((int)this) + 8,local_20.s.LowPart);
      FUN_0040bd40();
      QueryPerformanceCounter(&LStack_10);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00474730(param_2);
  return (float10)param_2;
}
