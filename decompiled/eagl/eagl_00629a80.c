/* spd-match: far pct=3.96 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_006299a0(...);
int __cdecl FUN_00634b20(...);
int __cdecl FUN_00634ed0(...);
extern int DAT_006cc7a4;
extern unsigned char *DAT_0070d364;

struct ThisCallBox {
  undefined4 FUN_00629a80(float param_2, int param_3, int param_4);
};
undefined4 ThisCallBox::FUN_00629a80(float param_2, int param_3, int param_4) {
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(((int)this) + 0xc);
  uVar2 = *(ushort *)(iVar7 + 0xc);
  iVar3 = *(int *)(iVar7 + 8);
  iVar1 = iVar7 + 0xe;
  if ((*(int *)(((int)this) + 0x1c) == 0) && (**(ushort **)(iVar7 + 4) != 0)) {
    uVar6 = (uint)**(ushort **)(iVar7 + 4);
    uVar4 = (**(code **)(*DAT_0070d364 + 0x14))(uVar6 * 2);
    iVar7 = 0;
    *(undefined4 *)(((int)this) + 0x1c) = uVar4;
    if (uVar6 != 0) {
      do {
        uVar5 = *(ushort *)(iVar1 + iVar7 * 2) / 0xc;
        if ((*(uint *)(param_4 + ((int)(uVar5 & 0xff) >> 5) * 4) & 1 << ((byte)uVar5 & 0x1f)) != 0)
        {
          *(short *)(*(int *)(((int)this) + 0x1c) + *(int *)(((int)this) + 0x18) * 2) = (short)iVar7;
          *(int *)(((int)this) + 0x18) = *(int *)(((int)this) + 0x18) + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar6);
    }
  }
  iVar7 = FUN_006299a0(param_2);
  FUN_00634b20(1,*(undefined4 *)(((int)this) + 0x10),iVar7,*(undefined4 *)(((int)this) + 0x14),
               *(undefined4 *)(((int)this) + 0x14),*(undefined4 *)(((int)this) + 0x18),
               *(undefined4 *)(((int)this) + 0x1c));
  *(int *)(((int)this) + 0x10) = iVar7;
  if (iVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar3 + -2 + iVar7 * 2);
  }
  if ((((float)uVar6 != param_2) &&
      ((iVar7 != uVar2 - 1 || (param_2 <= (float)*(ushort *)(iVar3 + -4 + (uint)uVar2 * 2))))) &&
     ((iVar7 != 0 || (DAT_006cc7a4 <= param_2)))) {
    FUN_00634ed0(iVar7,iVar7 + 1,*(undefined4 *)(((int)this) + 0x14),param_3,1,iVar1,
                 (param_2 - (float)uVar6) / (float)(int)(*(ushort *)(iVar3 + iVar7 * 2) - uVar6),
                 *(undefined4 *)(((int)this) + 0x18),*(undefined4 *)(((int)this) + 0x1c));
    return 1;
  }
  iVar7 = 0;
  if (0 < *(int *)(((int)this) + 0x18)) {
    do {
      uVar6 = (uint)*(ushort *)(*(int *)(((int)this) + 0x1c) + iVar7 * 2);
      *(undefined4 *)(param_3 + (uint)*(ushort *)(iVar1 + uVar6 * 2) * 4) =
           *(undefined4 *)(*(int *)(((int)this) + 0x14) + uVar6 * 4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(((int)this) + 0x18));
  }
  return 1;
}
