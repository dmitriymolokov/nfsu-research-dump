/* spd-match: far pct=9.11 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005f7186();
int __cdecl FUN_005f7478();
int __cdecl FUN_005f74cf();
int __cdecl FUN_005f7709();
int __cdecl FUN_005f7760();
int __cdecl FUN_005f7a42();
int __cdecl FUN_0060ec98();
extern int DAT_0069ecd8;
extern void LAB_0060ee8c(void);
extern void LAB_0060f0db(void);
extern void LAB_0060f21b(void);
extern void LAB_0060f225(void);

int __fastcall FUN_0060ed62(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_7c [4];
  int local_6c [4];
  int local_5c [4];
  int local_4c [4];
  int local_3c [5];
  uint local_28;
  uint local_24;
  uint *local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)param_1[0x26] != 0x30000002) {
    return 1;
  }
  local_3c[4] = *(int *)((int *)param_1[0x26])[4];
  iVar7 = *(int *)(param_1[5] + local_3c[4] * 4);
  local_8 = 0;
  local_14 = 0;
  uVar3 = *(uint *)(iVar7 + 0x38);
  local_20 = *(uint **)(param_1[6] + uVar3 * 4);
  if (((*local_20 & 0xff000000) == 0x24000000) &&
     (((*(uint *)(iVar7 + 0x34) <= (uint)param_1[0x25] || (uVar3 <= *(uint *)(iVar7 + 0x34))) &&
      (uVar3 == *(uint *)(iVar7 + 0x3c))))) {
    local_28 = *local_20 & 0xffffff;
    local_1c = (int *)0x0;
    if (local_20[1] != 0) {
      piVar6 = (int *)local_20[2];
      do {
        piVar2 = *(int **)(param_1[5] + *piVar6 * 4);
        if (param_1[0x18] == *piVar2) {
          if ((((uint)param_1[0x25] < (uint)piVar2[0xd]) && ((uint)piVar2[0xd] < (uint)piVar2[0xe]))
             || ((uint)param_1[0x25] < (uint)piVar2[0xb])) goto LAB_0060f0db;
        }
        local_1c = (int *)((int)local_1c + 1);
        piVar6 = piVar6 + 1;
      } while (local_1c < (int *)local_20[1]);
    }
    local_c = 0;
    local_10 = 0;
    local_18 = 0;
    if (local_28 != 0) {
      piVar2 = (int *)local_20[2];
      local_1c = piVar2 + local_28;
      piVar6 = local_7c + local_28 + 3;
      iVar7 = local_20[4] - (int)piVar2;
      local_24 = local_28;
      do {
        uVar1 = local_c;
        uVar3 = local_18;
        if (*piVar2 == local_3c[4]) {
          iVar8 = *local_1c;
LAB_0060ee8c:
          local_c = local_c + 1;
          local_3c[uVar1] = iVar8;
          uVar3 = local_10;
          local_10 = local_10 + 1;
          local_4c[uVar3] = *(int *)(iVar7 + (int)piVar2);
        }
        else {
          if (*local_1c == local_3c[4]) {
            iVar8 = *piVar2;
            goto LAB_0060ee8c;
          }
          local_18 = local_18 + 1;
          local_7c[uVar3] = *(int *)(iVar7 + (int)piVar2);
          local_5c[uVar3] = *piVar2;
          *piVar6 = *local_1c;
          piVar6 = piVar6 + 1;
        }
        local_1c = local_1c + 1;
        piVar2 = piVar2 + 1;
        local_24 = local_24 - 1;
      } while (local_24 != 0);
    }
    uVar3 = 1;
    if (1 < local_c) {
      do {
        if (local_3c[uVar3] != local_3c[0]) goto LAB_0060f0db;
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_c);
    }
    local_24 = *(uint *)(param_1[5] + local_3c[0] * 4);
    if (*(uint *)(local_24 + 0x2c) < (uint)param_1[0x25]) goto LAB_0060f0db;
    uVar3 = 0;
    if (local_10 != 0) {
      do {
        local_24 = *(uint *)(param_1[5] + local_4c[uVar3] * 4);
        if ((uint)param_1[0x25] < *(uint *)(local_24 + 0x30)) goto LAB_0060f0db;
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_10);
    }
    if (local_18 == local_28) goto LAB_0060f0db;
    if (local_18 != 0) {
      pvVar4 = _malloc(0x38);
      if (pvVar4 == (void *)0x0) {
        local_14 = 0;
      }
      else {
        local_14 = FUN_005f7709();
      }
      if (local_14 == 0) {
        return -0x7ff8fff2;
      }
      iVar7 = FUN_005f7760(local_18 & 0xffffff | 0x24000000,local_18 * 2,local_18,0);
      if ((iVar7 < 0) || (iVar7 = FUN_005f7a42(), iVar7 < 0)) goto LAB_0060f225;
      local_28 = local_18 * 4;
      piVar6 = local_5c;
      piVar2 = *(int **)(local_14 + 8);
      for (uVar3 = local_18 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar2 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar2 = piVar2 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(char *)piVar2 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar2 = (int *)((int)piVar2 + 1);
      }
      piVar6 = local_7c + 4;
      piVar2 = (int *)(*(int *)(local_14 + 8) + local_18 * 4);
      for (uVar3 = local_18 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar2 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar2 = piVar2 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(char *)piVar2 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar2 = (int *)((int)piVar2 + 1);
      }
      piVar6 = local_7c;
      piVar2 = *(int **)(local_14 + 0x10);
      for (uVar3 = local_18 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar2 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar2 = piVar2 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(char *)piVar2 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar2 = (int *)((int)piVar2 + 1);
      }
    }
    pvVar4 = _malloc(0x38);
    if (pvVar4 == (void *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = FUN_005f7709();
    }
    iVar8 = local_8;
    if (local_8 != 0) {
      iVar7 = FUN_005f7760(0xfa000002,6,local_10,0);
      if ((-1 < iVar7) && (iVar7 = FUN_005f7a42(), -1 < iVar7)) {
        piVar6 = local_4c;
        piVar2 = *(int **)(iVar8 + 0x10);
        for (uVar3 = local_10; uVar3 != 0; uVar3 = uVar3 - 1) {
          *piVar2 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar2 = piVar2 + 1;
        }
        uVar3 = 0;
        do {
          *(undefined4 *)(uVar3 + *(int *)(local_8 + 8)) =
               *(undefined4 *)(uVar3 + *(int *)(param_1[0x26] + 8));
          uVar3 = uVar3 + 4;
        } while (uVar3 < 0x10);
        *(int *)(*(int *)(local_8 + 8) + 0x10) = local_3c[0];
        *(int *)(*(int *)(local_8 + 8) + 0x14) = local_3c[0];
        iVar7 = (**(code **)(*param_1 + 0x24))(local_8);
        if ((iVar7 == 0) && (iVar7 = FUN_0060ec98(), iVar7 == 0)) {
          if (*(int *)(param_1[6] + param_1[0x25] * 4) != 0) {
            FUN_005f7186();
          }
          iVar7 = local_14;
          uVar3 = local_24;
          *(int *)(param_1[6] + param_1[0x25] * 4) = local_8;
          if (local_14 == 0) {
            *local_20 = 0;
          }
          else {
            if (*(int *)(param_1[6] + *(int *)(local_24 + 0x38) * 4) != 0) {
              FUN_005f7186();
            }
            *(int *)(param_1[6] + *(int *)(uVar3 + 0x38) * 4) = iVar7;
          }
          return 0;
        }
        goto LAB_0060f0db;
      }
      goto LAB_0060f21b;
    }
  }
  else {
LAB_0060f0db:
    if (param_1[0x4d] == -1) {
      uVar5 = FUN_005f7478(&DAT_0069ecd8,0x189,1,4);
      iVar7 = FUN_005f74cf(uVar5,0,0,0);
      param_1[0x4d] = iVar7;
      iVar7 = FUN_005f74cf(uVar5,0,1,0x3ff0000000000000);
      param_1[0x4e] = iVar7;
    }
    if (local_8 != 0) {
      FUN_005f7186();
    }
    pvVar4 = _malloc(0x38);
    if (pvVar4 == (void *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = FUN_005f7709();
    }
    if (local_8 != 0) {
      iVar7 = FUN_005f7760(0xfa000002,6,1,0);
      if ((-1 < iVar7) && (iVar7 = FUN_005f7a42(), iVar8 = local_8, -1 < iVar7)) {
        **(int **)(local_8 + 0x10) = local_3c[4];
        uVar3 = 0;
        do {
          *(undefined4 *)(uVar3 + *(int *)(local_8 + 8)) =
               *(undefined4 *)(uVar3 + *(int *)(param_1[0x26] + 8));
          uVar3 = uVar3 + 4;
        } while (uVar3 < 0x10);
        *(int *)(*(int *)(local_8 + 8) + 0x10) = param_1[0x4d];
        *(int *)(*(int *)(local_8 + 8) + 0x14) = param_1[0x4d];
        iVar7 = (**(code **)(*param_1 + 0x24))(local_8,0);
        if ((iVar7 == 0) && (iVar7 = FUN_0060ec98(), iVar7 == 0)) {
          if (*(int *)(param_1[6] + param_1[0x25] * 4) != 0) {
            FUN_005f7186();
          }
          *(int *)(param_1[6] + param_1[0x25] * 4) = iVar8;
          iVar7 = 0;
          goto LAB_0060f225;
        }
        iVar7 = 1;
      }
LAB_0060f21b:
      FUN_005f7186();
      goto LAB_0060f225;
    }
  }
  iVar7 = -0x7ff8fff2;
LAB_0060f225:
  if (local_14 != 0) {
    FUN_005f7186();
  }
  return iVar7;
}
