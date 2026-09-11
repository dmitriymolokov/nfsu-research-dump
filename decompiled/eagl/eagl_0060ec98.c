/* spd-match: far pct=14.85 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_int_uint */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif

int __cdecl FUN_0060dde6(uint *param_1, undefined4 *param_2);
extern int DAT_006df5c8;

struct ThisCallBox {
  undefined4 FUN_0060ec98(uint *param_2);
};
undefined4 ThisCallBox::FUN_0060ec98(uint *param_2) {
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_28 [5];
  int local_14;
  uint local_10;
  int local_c;
  undefined4 *local_8;
  
  uVar6 = *param_2 & 0xffffff;
  if (uVar6 == 0) {
    uVar2 = 1;
  }
  else {
    local_28[4] = param_2[1] / uVar6;
    local_10 = 0;
    if (local_28[4] != 0) {
      iVar1 = *(int *)(((int)this) + 0x90);
      local_c = 0;
      local_14 = ((int)this);
      do {
        local_28[0] = 0xffffffff;
        local_28[1] = 0xffffffff;
        local_28[2] = 0xffffffff;
        uVar5 = 0;
        local_28[3] = 0xffffffff;
        if (uVar6 != 0) {
          iVar4 = *(int *)(local_14 + 0x14);
          piVar3 = (int *)(param_2[2] + local_c);
          do {
            local_28[uVar5] = *(uint *)(*(int *)(iVar4 + *piVar3 * 4) + 0xc);
            uVar5 = uVar5 + 1;
            piVar3 = piVar3 + 1;
          } while (uVar5 < uVar6);
        }
        if (iVar1 << 0x1e < 0) {
          uVar5 = 0;
          local_8 = (undefined4 *)(unsigned int)(&DAT_006df5c8);
          do {
            iVar4 = FUN_0060dde6(local_28,local_8);
            if (iVar4 != 0) break;
            local_8 = local_8 + 4;
            uVar5 = uVar5 + 1;
          } while (uVar5 < 8);
          if (uVar5 == 8) {
            return 1;
          }
        }
        local_10 = local_10 + 1;
        local_c = local_c + uVar6 * 4;
      } while (local_10 < local_28[4]);
    }
    uVar2 = 0;
  }
  return uVar2;
}
