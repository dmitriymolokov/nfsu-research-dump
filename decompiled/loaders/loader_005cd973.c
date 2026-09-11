/* spd-match: far pct=3.90 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2446/batches/20260724T132809Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_004010a0(...);
int __cdecl FUN_005c90b3(...);
int __cdecl FUN_005c90f8(...);
int __cdecl FUN_005cd207(...);
extern unsigned char *DAT_006dc264;
extern unsigned char *DAT_006dc274;
extern void LAB_005cdc42(...);

struct ThisCallBox {
  uint FUN_005cd973(int *param_2, int *param_3, uint param_4);
};
uint ThisCallBox::FUN_005cd973(int *param_2, int *param_3, uint param_4) {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  uint local_10;
  uint local_c;
  
  piVar3 = param_3;
  piVar2 = param_2;
  puVar4 = (uint *)(*(int *)(((int)this) + 0x28) + *(int *)(((int)this) + 0x2c));
  piVar10 = (int *)*param_2;
  puVar6 = (uint *)(piVar10 + 5);
  if ((unsigned int)(puVar4) < (unsigned int)(puVar6)) {
    return 0x80004005;
  }
  iVar8 = *piVar10;
  local_c = piVar10[4];
  uVar5 = FUN_005c90f8(piVar10[2]);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar5 = FUN_005c90b3(piVar10[3]);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  if (local_c == 0) {
    local_c = 1;
  }
  iVar7 = piVar10[1];
  if (iVar7 < 0) {
    return 0x80004005;
  }
  if (iVar7 < 4) {
    if (iVar8 < 1) {
      return 0x80004005;
    }
    if ((2 < iVar8) && (iVar8 != 3)) {
      return 0x80004005;
    }
    uVar5 = -(uint)((unsigned int)(puVar4) < (unsigned int)(piVar10 + 7)) & 0x80004005;
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    iVar8 = piVar10[6] * *puVar6 * local_c;
    uVar5 = -(uint)((unsigned int)(puVar4) < (unsigned int)(piVar10 + iVar8)) & 0x80004005;
    if (-1 < (int)uVar5) {
      *param_3 = *param_3 + iVar8 * 4;
      *param_2 = *param_2 + 0x1c;
      return uVar5;
    }
    return uVar5;
  }
  if (iVar7 != 4) {
    if (iVar7 != 5) {
      return 0x80004005;
    }
    if (iVar8 != 0) {
      return 0x80004005;
    }
    puVar9 = (uint *)(piVar10 + 6);
    uVar5 = -(uint)((unsigned int)(puVar4) < (unsigned int)(puVar9)) & 0x80004005;
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar1 = *puVar6;
    *param_2 = (int)puVar9;
    local_10 = 0;
    if (local_c != 0) {
      do {
        *piVar2 = (int)puVar9;
        param_2 = (int *)0x0;
        if (uVar1 != 0) {
          do {
            uVar5 = FUN_005cd973(piVar2,param_3,param_4);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            param_2 = (int *)((int)param_2 + 1);
          } while ((unsigned int)(param_2) < uVar1);
        }
        local_10 = local_10 + 1;
      } while ((unsigned int)(local_10) < (unsigned int)(local_c));
      return uVar5;
    }
    return uVar5;
  }
  if (iVar8 < 4) {
    return 0x80004005;
  }
  if (9 < iVar8) {
    if (iVar8 < 0xf) {
      uVar5 = -(uint)((unsigned int)(puVar4) < (unsigned int)((int *)*param_3 + 1)) & 0x80004005;
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      iVar8 = *(int *)(*(int *)(((int)this) + 0x8c) + param_4 * 4);
      iVar7 = *(int *)*param_3;
      *(int *)(iVar8 + 0x3c) = iVar7;
      if (*(int *)(iVar8 + 0x40) != 0) {
        return 0x80004005;
      }
      piVar10 = (int *)_malloc(iVar7 * 0xac + 4);
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        *piVar10 = iVar7;
        piVar10 = piVar10 + 1;
        FUN_004010a0(piVar10,0xac,iVar7,FUN_005cd207);
      }
      *(int **)(iVar8 + 0x40) = piVar10;
      if (piVar10 == (int *)0x0) {
        return 0x8007000e;
      }
      *param_3 = *param_3 + 4;
      uVar5 = -(uint)((uint)(*(int *)(((int)this) + 0x28) + *(int *)(((int)this) + 0x2c)) <
                     (uint)(*(int *)(iVar8 + 0x3c) * 0x10 + *param_3)) & 0x80004005;
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      local_10 = 0;
      if (*(int *)(iVar8 + 0x3c) != 0) {
        param_3 = (int *)0x0;
        do {
          puVar6 = (uint *)(*(int *)(iVar8 + 0x40) + (int)param_3);
          puVar6[0x15] = 0xffffffff;
          puVar6[10] = puVar6[10] | 1;
          puVar6[0xb] = 0;
          puVar6[0x17] = param_4;
          *puVar6 = *(uint *)*piVar3;
          *piVar3 = *piVar3 + 4;
          puVar6[1] = *(uint *)*piVar3;
          *piVar3 = *piVar3 + 4;
          puVar6[4] = *(uint *)*piVar3;
          *piVar3 = *piVar3 + 4;
          puVar6[5] = *(uint *)*piVar3;
          *piVar3 = *piVar3 + 4;
          puVar6[3] = 0;
          if (0xb2 < *puVar6) {
            return 0x80004005;
          }
          iVar7 = *puVar6 * 0x1c;
          if (*(int *)(&DAT_006dc274 + iVar7) == 0x5000000) {
            *(undefined4 *)
             (*(int *)(puVar6[5] + *(int *)(((int)this) + 0x2c)) * 0x1c + *(int *)(((int)this) + 0x24)) =
                 *(undefined4 *)(&DAT_006dc264 + iVar7);
          }
          local_10 = local_10 + 1;
          param_3 = (int *)((int)param_3 + 0xac);
        } while ((unsigned int)(local_10) < *(uint *)(iVar8 + 0x3c));
      }
      goto LAB_005cdc42;
    }
    if (0x10 < iVar8) {
      return 0x80004005;
    }
  }
  uVar5 = -(uint)((unsigned int)(puVar4) < (unsigned int)((uint *)(*param_3 + local_c * 4))) & 0x80004005;
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  param_3 = (int *)0x0;
  if (local_c != 0) {
    do {
      uVar1 = *(uint *)*piVar3;
      if (*(uint *)(((int)this) + 0x20) <= uVar1) {
        return 0x80004005;
      }
      if (uVar1 != 0) {
        iVar7 = uVar1 * 0x1c;
        piVar10 = (int *)(*(int *)(((int)this) + 0x24) + iVar7);
        if (*piVar10 != 0x7fffffff) {
          return 0x80004005;
        }
        *piVar10 = iVar8;
        *(uint *)(*(int *)(((int)this) + 0x24) + 8 + iVar7) = param_4;
        if ((iVar8 == 0x10) || (iVar8 == 0xf)) {
          *(uint *)(*(int *)(*(int *)(((int)this) + 0x24) + 0x18 + iVar7) + 0x5c) = param_4;
        }
      }
      param_3 = (int *)((int)param_3 + 1);
      *piVar3 = *piVar3 + 4;
    } while ((unsigned int)(param_3) < (unsigned int)(local_c));
  }
LAB_005cdc42:
  *param_2 = *param_2 + 0x14;
  return uVar5;
}
