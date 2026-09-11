/* spd-match: far pct=9.32 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_00700044;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006ccb7c;

struct ThisCallBox {
  void FUN_0046e020(float param_2);
};
void ThisCallBox::FUN_0046e020(float param_2) {
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(((int)this) + 0x3c) != 1) {
    *(float *)(((int)this) + 0x70) = param_2 + *(float *)(((int)this) + 0x70);
    *(float *)(*(int *)(((int)this) + 0x20) + 0x7c) =
         *(float *)(*(int *)(((int)this) + 0x20) + 0x7c) - param_2;
    iVar1 = *(int *)(((int)this) + 0x18);
    param_2 = param_2 * *(float *)(iVar1 + 0x20 + *(int *)(((int)this) + 0x3c) * 4);
    iVar2 = *(int *)(((int)this) + 0x24);
    fVar3 = (_DAT_006cc7bc - *(float *)(iVar1 + 0x10)) * *(float *)(iVar1 + 8) * param_2;
    fVar4 = param_2 * *(float *)(iVar1 + 0xc) * *(float *)(iVar1 + 0x10);
    if ((*(char *)(iVar2 + 0x155) == '\0') || (*(char *)(*(int *)(((int)this) + 0x28) + 0x155) == '\0'))
    {
      param_2 = 0.5;
    }
    else {
      param_2 = DAT_00700044;
    }
    iVar1 = *(int *)(*(int *)(((int)this) + 0x34) + 0x3c8);
    if (iVar1 == 1) {
      fVar5 = _DAT_006cc7bc - param_2;
    }
    else {
      fVar5 = param_2;
      if (iVar1 != 2) {
        fVar6 = *(float *)(iVar2 + 0x28) + *(float *)(*(int *)(((int)this) + 0x28) + 0x28);
        fVar5 = _DAT_006cc7dc;
        if (_DAT_006ccb7c < ABS(fVar6)) {
          fVar5 = *(float *)(*(int *)(((int)this) + 0x28) + 0x28) / fVar6;
          if (param_2 <= fVar5) {
            if (_DAT_006cc7bc - param_2 < fVar5) {
              fVar5 = DAT_00700044 * _DAT_006cc7dc;
            }
          }
          else {
            fVar5 = _DAT_006cc7bc - DAT_00700044 * _DAT_006cc7dc;
          }
        }
      }
    }
    if (*(int *)(iVar2 + 0x10c) == 0) {
      *(float *)(iVar2 + 0x108) = (_DAT_006cc7bc - fVar5) * fVar3 + *(float *)(iVar2 + 0x108);
    }
    iVar1 = *(int *)(((int)this) + 0x28);
    if (*(int *)(iVar1 + 0x10c) == 0) {
      *(float *)(iVar1 + 0x108) = fVar5 * fVar3 + *(float *)(iVar1 + 0x108);
    }
    iVar1 = *(int *)(((int)this) + 0x2c);
    if ((*(char *)(iVar1 + 0x155) == '\0') || (*(char *)(*(int *)(((int)this) + 0x30) + 0x155) == '\0'))
    {
      param_2 = 0.5;
    }
    else {
      param_2 = DAT_00700044;
    }
    iVar2 = *(int *)(*(int *)(((int)this) + 0x34) + 0x3c8);
    if (iVar2 == 1) {
      fVar3 = _DAT_006cc7bc - param_2;
    }
    else {
      fVar3 = param_2;
      if ((iVar2 != 2) &&
         (fVar5 = *(float *)(*(int *)(((int)this) + 0x30) + 0x28) + *(float *)(iVar1 + 0x28),
         fVar3 = _DAT_006cc7dc, _DAT_006ccb7c < ABS(fVar5))) {
        fVar3 = *(float *)(iVar1 + 0x28) / fVar5;
        if (param_2 <= fVar3) {
          if (_DAT_006cc7bc - param_2 < fVar3) {
            fVar3 = DAT_00700044 * _DAT_006cc7dc;
          }
        }
        else {
          fVar3 = _DAT_006cc7bc - DAT_00700044 * _DAT_006cc7dc;
        }
      }
    }
    if (*(int *)(iVar1 + 0x10c) == 0) {
      *(float *)(iVar1 + 0x108) = fVar3 * fVar4 + *(float *)(iVar1 + 0x108);
    }
    iVar1 = *(int *)(((int)this) + 0x30);
    if (*(int *)(iVar1 + 0x10c) == 0) {
      *(float *)(iVar1 + 0x108) = (_DAT_006cc7bc - fVar3) * fVar4 + *(float *)(iVar1 + 0x108);
    }
  }
  return;
}
