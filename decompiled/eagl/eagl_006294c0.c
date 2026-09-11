/* spd-match: far pct=1.10 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_00634b20(...);
int __cdecl FUN_00634ed0(...);
extern int DAT_006cc7a4;
extern unsigned char *DAT_0070d364;
extern int _DAT_006a7eb0;

struct ThisCallBox {
  undefined4 FUN_006294c0(float param_2, int param_3, int param_4);
};
undefined4 ThisCallBox::FUN_006294c0(float param_2, int param_3, int param_4) {
  int iVar1;
  ushort uVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = *(int *)(((int)this) + 0xc);
  uVar2 = *(ushort *)(iVar6 + 8);
  iVar1 = iVar6 + 10;
  if ((*(int *)(((int)this) + 0x1c) == 0) && (**(ushort **)(iVar6 + 4) != 0)) {
    uVar7 = (uint)**(ushort **)(iVar6 + 4);
    uVar4 = (**(code **)(*DAT_0070d364 + 0x14))(uVar7 * 2);
    iVar6 = 0;
    *(undefined4 *)(((int)this) + 0x1c) = uVar4;
    if (uVar7 != 0) {
      do {
        uVar5 = *(ushort *)(iVar1 + iVar6 * 2) / 0xc;
        if ((*(uint *)(param_4 + ((int)(uVar5 & 0xff) >> 5) * 4) & 1 << ((byte)uVar5 & 0x1f)) != 0)
        {
          *(short *)(*(int *)(((int)this) + 0x1c) + *(int *)(((int)this) + 0x18) * 2) = (short)iVar6;
          *(int *)(((int)this) + 0x18) = *(int *)(((int)this) + 0x18) + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar7);
    }
  }
  if (param_2 < DAT_006cc7a4) {
    fVar3 = param_2 + _DAT_006a7eb0;
  }
  else {
    fVar3 = param_2 - _DAT_006a7eb0;
  }
  iVar6 = (int)ROUND(fVar3);
  uVar7 = (uint)*(ushort *)(*(int *)(((int)this) + 0xc) + 8);
  if (iVar6 < (int)uVar7) {
    iVar8 = iVar6;
    if (iVar6 < 0) {
      iVar8 = 0;
    }
  }
  else {
    iVar8 = uVar7 - 1;
  }
  FUN_00634b20(1,*(undefined4 *)(((int)this) + 0x10),iVar8,*(undefined4 *)(((int)this) + 0x14),
               *(undefined4 *)(((int)this) + 0x14),*(undefined4 *)(((int)this) + 0x18),
               *(undefined4 *)(((int)this) + 0x1c));
  *(int *)(((int)this) + 0x10) = iVar8;
  if ((param_2 != (float)iVar6) && (iVar6 + 1 < (int)(uint)uVar2)) {
    FUN_00634ed0(iVar6,iVar6 + 1,*(undefined4 *)(((int)this) + 0x14),param_3,1,iVar1,
                 param_2 - (float)iVar6,*(undefined4 *)(((int)this) + 0x18),
                 *(undefined4 *)(((int)this) + 0x1c));
    return 1;
  }
  iVar6 = 0;
  if (0 < *(int *)(((int)this) + 0x18)) {
    do {
      uVar7 = (uint)*(ushort *)(*(int *)(((int)this) + 0x1c) + iVar6 * 2);
      *(undefined4 *)(param_3 + (uint)*(ushort *)(iVar1 + uVar7 * 2) * 4) =
           *(undefined4 *)(*(int *)(((int)this) + 0x14) + uVar7 * 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(((int)this) + 0x18));
  }
  return 1;
}
