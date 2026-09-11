/* spd-match: far pct=8.78 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2440_int_ptr_casts/batches/20260724T141741Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif

int __cdecl FUN_005fbec8(...);
int __cdecl FUN_0060dde6(...);
extern unsigned char *DAT_006df5c8;
extern void LAB_0060ebce(...);
extern void LAB_0060ec53(...);

struct ThisCallBox {
  undefined4 FUN_0060eafe(int *param_2, uint param_3, uint param_4, uint *param_5);
};
undefined4 ThisCallBox::FUN_0060eafe(int *param_2, uint param_3, uint param_4, uint *param_5) {
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint local_28 [4];
  int local_18 [4];
  int local_8;
  
  iVar5 = *(int *)(((int)this) + 0x14);
  piVar2 = *(int **)(iVar5 + *param_2 * 4);
  local_8 = ((int)this);
  if ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar2 * 4) + 4) & 0x40) != 0) {
    *param_5 = 0xe40000;
    return 0;
  }
  bVar10 = (param_4 & 0x10000) != 0;
  if (bVar10) {
    local_18[0] = 0;
  }
  uVar4 = (uint)bVar10;
  if ((param_4 & 0x20000) != 0) {
    local_18[uVar4] = 1;
    uVar4 = uVar4 + 1;
  }
  if ((param_4 & 0x40000) != 0) {
    local_18[uVar4] = 2;
    uVar4 = uVar4 + 1;
  }
  if ((param_4 & 0x80000) != 0) {
    local_18[uVar4] = 3;
    uVar4 = uVar4 + 1;
  }
  if (uVar4 < param_3) {
    param_3 = uVar4;
  }
  iVar8 = *(int *)(((int)this) + 0x90) << 0x1e;
  if (iVar8 < 0) {
    local_28[0] = 0xffffffff;
  }
  else {
    uVar4 = 0;
    if (param_3 != 0) {
      do {
        if (piVar2[3] != *(int *)(*(int *)(iVar5 + param_2[uVar4] * 4) + 0xc)) break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_3);
      if (uVar4 < param_3) {
        uVar4 = 0;
        do {
          local_28[uVar4] = uVar4;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 4);
        goto LAB_0060ebce;
      }
    }
    local_28[0] = piVar2[3];
  }
  local_28[1] = local_28[0];
  local_28[2] = local_28[0];
  local_28[3] = local_28[0];
LAB_0060ebce:
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      piVar1 = local_18 + uVar4;
      piVar2 = param_2 + uVar4;
      uVar4 = uVar4 + 1;
      local_28[*piVar1] = *(uint *)(*(int *)(iVar5 + *piVar2 * 4) + 0xc);
    } while (uVar4 < param_3);
  }
  if (-1 < iVar8) {
    puVar6 = local_28;
LAB_0060ec53:
    uVar7 = 0;
    uVar4 = 0x10;
    do {
      uVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 | uVar3 << ((byte)uVar4 & 0x1f);
      uVar4 = uVar4 + 2;
    } while (uVar4 < 0x18);
    *param_5 = uVar7;
    return 0;
  }
  uVar4 = 0;
  puVar9 = (undefined4 *)(unsigned int)(&DAT_006df5c8);
  do {
    iVar5 = FUN_0060dde6(local_28,puVar9);
    if (iVar5 != 0) {
      puVar6 = (undefined4 *)(unsigned int)(&DAT_006df5c8+ uVar4 * 4);
      if ((uint *)(unsigned int)(puVar6) != (uint *)0x0) goto LAB_0060ec53;
      break;
    }
    uVar4 = uVar4 + 1;
    puVar9 = puVar9 + 4;
  } while (uVar4 < 8);
  FUN_005fbec8(local_8,*(undefined4 *)(*(int *)(local_8 + 0x98) + 0x34),0x12d2,
               "internal error: invalid swizzle found");
  return 0x80004005;
}
