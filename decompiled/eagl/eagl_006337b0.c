/* spd-match: far pct=1.68 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0047b020(...);
extern int DAT_006cc7a4;
extern unsigned char *DAT_0070d364;
extern int _DAT_006a7eb0;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
int unaff_ESI;
extern void LAB_006338e1(...);
extern void LAB_006339d3(...);
extern void LAB_00633aa1(...);

struct ThisCallBox {
  void FUN_006337b0(float param_2);
};
void ThisCallBox::FUN_006337b0(float param_2) {
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_ESI;
  int local_8;
  
  if (param_2 < DAT_006cc7a4) {
    fVar1 = param_2 + _DAT_006a7eb0;
  }
  else {
    fVar1 = param_2 - _DAT_006a7eb0;
  }
  local_8 = (int)ROUND(fVar1);
  if (local_8 < 0) {
    local_8 = 0;
  }
  if (*(int *)(((int)this) + 0x2c) + -1 <= local_8) {
    local_8 = *(int *)(((int)this) + 0x2c) + -2;
  }
  *(float *)(((int)this) + 0x28) = param_2 - (float)local_8;
  iVar2 = *(int *)(((int)this) + 0x30);
  if (local_8 == iVar2) goto LAB_00633aa1;
  if (local_8 == iVar2 + 1) {
    (**(code **)(*DAT_0070d364 + 0x2c))(*(undefined4 *)(((int)this) + 0x18));
    *(undefined4 *)(unaff_ESI + 0x18) = *(undefined4 *)(unaff_ESI + 0x1c);
LAB_006338e1:
    uVar3 = (**(code **)(*DAT_0070d364 + 0x24))
                      (*(undefined4 *)(*(int *)(unaff_ESI + 0xc) + 4 + local_8 * 4));
    *(undefined4 *)(((int)this) + 0x1c) = uVar3;
  }
  else {
    if (local_8 != iVar2 + -1) {
      if (*(int *)(((int)this) + 0x18) != 0) {
        (**(code **)(*DAT_0070d364 + 0x2c))(*(int *)(((int)this) + 0x18));
      }
      if (*(int *)(((int)this) + 0x1c) != 0) {
        (**(code **)(*DAT_0070d364 + 0x2c))(*(int *)(((int)this) + 0x1c));
      }
      uVar3 = (**(code **)(*DAT_0070d364 + 0x24))
                        (*(undefined4 *)(*(int *)(((int)this) + 0xc) + local_8 * 4));
      *(undefined4 *)(unaff_ESI + 0x18) = uVar3;
      goto LAB_006338e1;
    }
    (**(code **)(*DAT_0070d364 + 0x2c))(*(undefined4 *)(((int)this) + 0x1c));
    *(undefined4 *)(unaff_ESI + 0x1c) = *(undefined4 *)(unaff_ESI + 0x18);
    uVar3 = (**(code **)(*DAT_0070d364 + 0x24))
                      (*(undefined4 *)(*(int *)(unaff_ESI + 0xc) + local_8 * 4));
    *(undefined4 *)(((int)this) + 0x18) = uVar3;
  }
  if (*(int *)(((int)this) + 0x14) != 0) {
    if (local_8 == *(int *)(((int)this) + 0x30) + 1) {
      (**(code **)(*DAT_0070d364 + 0x2c))(*(undefined4 *)(((int)this) + 0x20));
      *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x24);
    }
    else {
      if (local_8 == *(int *)(((int)this) + 0x30) + -1) {
        (**(code **)(*DAT_0070d364 + 0x2c))(*(undefined4 *)(((int)this) + 0x24));
        *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(unaff_ESI + 0x20);
        uVar3 = (**(code **)(*DAT_0070d364 + 0x24))
                          (*(undefined4 *)(*(int *)(unaff_ESI + 0x14) + local_8 * 4));
        *(undefined4 *)(((int)this) + 0x20) = uVar3;
        goto LAB_006339d3;
      }
      if (*(int *)(((int)this) + 0x20) != 0) {
        FUN_0047b020(*(int *)(((int)this) + 0x20));
      }
      if (*(int *)(((int)this) + 0x24) != 0) {
        FUN_0047b020(*(int *)(((int)this) + 0x24));
      }
      uVar3 = (**(code **)(*DAT_0070d364 + 0x24))
                        (*(undefined4 *)(*(int *)(((int)this) + 0x14) + local_8 * 4));
      *(undefined4 *)(unaff_ESI + 0x20) = uVar3;
    }
    uVar3 = (**(code **)(*DAT_0070d364 + 0x24))
                      (*(undefined4 *)(*(int *)(unaff_ESI + 0x14) + 4 + local_8 * 4));
    *(undefined4 *)(((int)this) + 0x24) = uVar3;
  }
LAB_006339d3:
  iVar2 = *(int *)(*(int *)(((int)this) + 0x10) + local_8 * 4);
  if ((*(byte *)(iVar2 + 8) & 1) == 0) {
    uVar4 = (uint)*(byte *)(iVar2 + 10) + (uint)*(ushort *)(iVar2 + 6);
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 6);
  }
  *(float *)(((int)this) + 0x38) = (float)uVar4;
  *(float *)(((int)this) + 0x3c) =
       (float)*(ushort *)(*(int *)(*(int *)(((int)this) + 0x10) + 4 + local_8 * 4) + 6);
  iVar2 = *(int *)(*(int *)(((int)this) + 0x10) + 4 + local_8 * 4);
  if ((*(byte *)(iVar2 + 8) & 1) == 0) {
    *(float *)(((int)this) + 0x3c) = (float)*(byte *)(iVar2 + 10) + *(float *)(((int)this) + 0x3c);
  }
  *(int *)(((int)this) + 0x30) = local_8;
  iVar2 = *(int *)(*(int *)(((int)this) + 0x10) + *(int *)(((int)this) + 0x30) * 4);
  *(float *)(((int)this) + 0x40) =
       (float)((uint)*(byte *)(iVar2 + 0xb) + (uint)*(byte *)(iVar2 + 10)) * _DAT_006cc7dc;
  iVar2 = *(int *)(*(int *)(((int)this) + 0x10) + 4 + *(int *)(((int)this) + 0x30) * 4);
  *(float *)(((int)this) + 0x44) =
       (float)((uint)*(byte *)(iVar2 + 0xb) + (uint)*(byte *)(iVar2 + 10)) * _DAT_006cc7dc;
LAB_00633aa1:
  fVar1 = *(float *)(((int)this) + 0x48);
  *(float *)(((int)this) + 0x48) =
       *(float *)(((int)this) + 0x28) / *(float *)(((int)this) + 0x44) +
       (_DAT_006cc7bc - *(float *)(((int)this) + 0x28)) / *(float *)(((int)this) + 0x40);
  *(float *)(((int)this) + 0x50) =
       ((*(float *)(((int)this) + 0x50) + *(float *)(((int)this) + 0x4c)) / *(float *)(((int)this) + 0x48)) *
       fVar1 - *(float *)(((int)this) + 0x4c);
  return;
}
