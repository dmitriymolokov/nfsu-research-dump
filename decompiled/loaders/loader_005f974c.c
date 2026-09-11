/* spd-match: far pct=5.80 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2446 */
#include "ghidra_compat.h"

int __cdecl FUN_005f74cf(...);
int __cdecl FUN_005f7ac7(...);
extern void LAB_005f9873(...);
extern void LAB_005f98e4(...);

struct ThisCallBox {
  bool FUN_005f974c(uint *param_2, int param_3);
};
bool ThisCallBox::FUN_005f974c(uint *param_2, int param_3) {
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  uint local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  uint local_18;
  int local_14;
  uint local_8;
  
  puVar6 = param_2;
  iVar7 = FUN_005f7ac7();
  if (iVar7 == 0) {
    return true;
  }
  iVar7 = *(int *)(((int)this) + 0x14);
  piVar10 = *(int **)(iVar7 + *(int *)param_2[4] * 4);
  if ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar10 * 4) + 4) & 1) == 0) {
    return true;
  }
  uVar12 = *param_2 & 0xffffff;
  if (param_3 != 0) {
    local_28 = -1;
    dVar4 = 0.0;
    local_8 = 0;
    local_14 = 0;
    local_24 = 0;
    if (uVar12 != 0) {
      piVar9 = (int *)param_2[2];
      local_20 = piVar9 + uVar12;
      do {
        iVar2 = *(int *)(*(int *)(iVar7 + *local_20 * 4) + 0x1c);
        iVar3 = *(int *)(*(int *)(iVar7 + *piVar9 * 4) + 0x1c);
        piVar14 = *(int **)(iVar7 + iVar2 * 4);
        piVar8 = *(int **)(iVar7 + iVar3 * 4);
        if (((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar8 * 4) + 4) & 0x80) == 0) ||
           (piVar8[1] != -1)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar14 * 4) + 4) & 0x80) == 0) ||
           (piVar14[1] != -1)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((bVar17) && (*(double *)(piVar8 + 4) == 0.0)) ||
           ((bVar5 && (*(double *)(piVar14 + 4) == 0.0)))) {
LAB_005f9873:
          local_8 = local_8 + 1;
        }
        else {
          if (bVar17) {
            if (bVar5) {
              dVar4 = *(double *)(piVar14 + 4) * *(double *)(piVar8 + 4) + dVar4;
              goto LAB_005f9873;
            }
            dVar1 = *(double *)(piVar8 + 4);
          }
          else {
            if (!bVar5) break;
            dVar1 = *(double *)(piVar14 + 4);
            iVar2 = iVar3;
          }
          if (dVar1 != 1.0) break;
          local_14 = local_14 + 1;
          local_28 = iVar2;
        }
        local_24 = local_24 + 1;
        local_20 = local_20 + 1;
        piVar9 = piVar9 + 1;
      } while ((unsigned int)(local_24) < uVar12);
      if (((local_14 == 1) && (uVar12 - 1 == local_8)) && (dVar4 == 0.0)) {
        *param_2 = 0;
        goto LAB_005f98e4;
      }
    }
    if (uVar12 == local_8) {
      *param_2 = 0;
      local_28 = FUN_005f74cf(*(undefined4 *)(((int)this) + 0x50),0,0,dVar4);
      piVar10[7] = local_28;
      piVar10 = *(int **)(*(int *)(((int)this) + 0x14) + local_28 * 4);
LAB_005f98e4:
      piVar10[7] = local_28;
      return false;
    }
  }
  local_8 = 0;
  bVar17 = false;
  if (uVar12 != 0) {
    piVar9 = (int *)param_2[2];
    piVar10 = piVar9 + uVar12;
    local_2c = uVar12;
    do {
      piVar14 = *(int **)(iVar7 + *piVar10 * 4);
      piVar8 = *(int **)(iVar7 + *piVar9 * 4);
      if (param_3 != 0) {
        piVar8 = *(int **)(iVar7 + piVar8[7] * 4);
        piVar14 = *(int **)(iVar7 + piVar14[7] * 4);
      }
      if (((((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar8 * 4) + 4) & 0x80) == 0) ||
           (piVar8[1] != -1)) || (*(double *)(piVar8 + 4) != 0.0)) &&
         ((((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar14 * 4) + 4) & 0x80) == 0 ||
           (piVar14[1] != -1)) || (*(double *)(piVar14 + 4) != 0.0)))) {
        local_8 = local_8 + 1;
      }
      piVar10 = piVar10 + 1;
      piVar9 = piVar9 + 1;
      local_2c = local_2c - 1;
    } while (local_2c != 0);
    if (((unsigned int)(local_8) < uVar12) && ((local_8 == 1 || ((*(byte *)(((int)this) + 0x90) & 6) == 0)))) {
      if (local_8 == 0) {
        *param_2 = 0;
        return false;
      }
      iVar7 = uVar12 << 2;
      local_8 = 0;
      local_18 = 0;
      local_28 = iVar7;
      do {
        uVar11 = param_2[2];
        iVar2 = *(int *)(uVar11 + local_18 * 4);
        iVar3 = *(int *)(((int)this) + 0x14);
        iVar13 = *(int *)(uVar11 + iVar7);
        piVar10 = *(int **)(iVar3 + iVar2 * 4);
        if (param_3 != 0) {
          piVar10 = *(int **)(iVar3 + piVar10[7] * 4);
          iVar13 = *(int *)(*(int *)(iVar3 + iVar13 * 4) + 0x1c);
        }
        piVar9 = *(int **)(iVar3 + iVar13 * 4);
        if (((((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar10 * 4) + 4) & 0x80) == 0) ||
             (piVar10[1] != -1)) || (*(double *)(piVar10 + 4) != 0.0)) &&
           ((((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar9 * 4) + 4) & 0x80) == 0 ||
             (piVar9[1] != -1)) || (*(double *)(piVar9 + 4) != 0.0)))) {
          *(int *)(uVar11 + local_8 * 4) = iVar2;
          local_8 = local_8 + 1;
          *(undefined4 *)(param_2[2] + local_28) = *(undefined4 *)(param_2[2] + iVar7);
          local_28 = local_28 + 4;
        }
        local_18 = local_18 + 1;
        iVar7 = iVar7 + 4;
      } while ((unsigned int)(local_18) < uVar12);
      puVar15 = (undefined4 *)(uVar12 * 4 + param_2[2]);
      puVar16 = (undefined4 *)(local_8 * 4 + param_2[2]);
      for (uVar11 = local_8 & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar16 = *(undefined1 *)puVar15;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      if (local_8 == 1) {
        uVar11 = 0x25000001;
      }
      else {
        uVar11 = local_8 & 0xffffff | 0x30000000;
      }
      *param_2 = uVar11;
      param_2[1] = local_8 * 2;
      bVar17 = uVar12 != local_8;
      param_2[3] = 1;
      uVar12 = local_8;
    }
  }
  if ((uVar12 < 2) || ((uVar12 == 2 && ((*(byte *)(((int)this) + 0x90) & 0x20) == 0)))) {
    param_2 = (uint *)0x0;
    if (uVar12 != 0) {
      local_18 = uVar12 << 2;
      do {
        if (param_3 == 0) {
          piVar10 = *(int **)(*(int *)(((int)this) + 0x14) + *(int *)(puVar6[2] + (int)param_2 * 4) * 4)
          ;
          piVar9 = *(int **)(*(int *)(((int)this) + 0x14) + *(int *)(puVar6[2] + local_18) * 4);
        }
        else {
          iVar7 = *(int *)(((int)this) + 0x14);
          piVar10 = *(int **)(iVar7 + *(int *)(*(int *)(iVar7 + *(int *)(puVar6[2] +
                                                                        (int)param_2 * 4) * 4) +
                                              0x1c) * 4);
          piVar9 = *(int **)(iVar7 + *(int *)(*(int *)(iVar7 + *(int *)(puVar6[2] + local_18) * 4) +
                                             0x1c) * 4);
        }
        if (((((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar10 * 4) + 4) & 0x80) == 0) ||
             (piVar10[1] != -1)) || (*(double *)(piVar10 + 4) != 1.0)) &&
           ((((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar9 * 4) + 4) & 0x80) == 0 ||
             (piVar9[1] != -1)) || (*(double *)(piVar9 + 4) != 1.0)))) break;
        param_2 = (uint *)((int)param_2 + 1);
        local_18 = local_18 + 4;
      } while ((unsigned int)(param_2) < uVar12);
    }
    if ((unsigned int)(param_2) == uVar12) {
      param_2 = (uint *)0x0;
      if (uVar12 != 0) {
        local_28 = uVar12 << 2;
        do {
          piVar10 = (int *)(puVar6[2] + (int)param_2 * 4);
          if (param_3 == 0) {
            piVar9 = *(int **)(*(int *)(((int)this) + 0x14) + *piVar10 * 4);
          }
          else {
            piVar9 = *(int **)(*(int *)(((int)this) + 0x14) +
                              *(int *)(*(int *)(*(int *)(((int)this) + 0x14) + *piVar10 * 4) + 0x1c) * 4
                              );
          }
          if ((((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar9 * 4) + 4) & 0x80) != 0) &&
              (piVar9[1] == -1)) && (*(double *)(piVar9 + 4) == 1.0)) {
            *piVar10 = *(int *)(puVar6[2] + local_28);
          }
          param_2 = (uint *)((int)param_2 + 1);
          local_28 = local_28 + 4;
        } while ((unsigned int)(param_2) < uVar12);
      }
      if (uVar12 == 2) {
        *puVar6 = 0x24000001;
        puVar6[1] = 2;
      }
      else {
        *puVar6 = 0x10000001;
        puVar6[1] = 1;
      }
      bVar17 = true;
    }
  }
  return !bVar17;
}
