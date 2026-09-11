/* Decompiled from Speed.exe @ 006182a2 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_006182a2(int param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint *local_14;
  int *local_10;
  uint local_c;
  
  *(undefined4 *)(param_1 + 0xf0) = 0;
  puVar4 = *(uint **)(param_1 + 0x98);
  if ((*puVar4 & 0xff000000) != 0x24000000) {
    return 1;
  }
  uVar6 = *puVar4 & 0xffffff;
  bVar3 = true;
  if (uVar6 != 0) {
    piVar8 = (int *)puVar4[2];
    piVar9 = piVar8 + uVar6;
    local_c = uVar6;
    do {
      if (*piVar8 != *piVar9) {
        bVar3 = false;
      }
      piVar9 = piVar9 + 1;
      piVar8 = piVar8 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
    fVar2 = _DAT_006cc920;
    if (!bVar3) goto LAB_00618331;
  }
  puVar4 = (uint *)FUN_0061556b(uVar6 | 0x24000000,puVar4,0,2,1);
  local_14 = puVar4;
  fVar2 = _DAT_006cc8a8;
  if (puVar4 == (uint *)0x0) {
    return 1;
  }
LAB_00618331:
  local_10 = (int *)puVar4[2];
  iVar5 = *(int *)(param_1 + 0x14);
  uVar6 = *puVar4 & 0xffffff;
  piVar9 = local_10 + uVar6;
  piVar8 = piVar9;
  if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + **(int **)(iVar5 + *piVar9 * 4) * 4) + 4) &
       0x80) == 0) &&
     (iVar1 = *local_10, piVar8 = local_10, local_10 = piVar9,
     (*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + **(int **)(iVar5 + iVar1 * 4) * 4) + 4) & 0x80)
     == 0)) {
    return 1;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      if (fVar2 != (float)*(double *)(*(int *)(iVar5 + piVar8[uVar7] * 4) + 0x10)) {
        return 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  if (bVar3) {
    local_10 = *(int **)(*(int *)(param_1 + 0x98) + 8);
  }
  else {
    local_14 = (uint *)FUN_0061556b(**(uint **)(param_1 + 0x98) & 0xffffff | 0x24000000,
                                    *(uint **)(param_1 + 0x98),0,2,2);
    if (local_14 == (uint *)0x0) {
      return 1;
    }
    bVar3 = true;
    if (uVar6 != 0) {
      piVar8 = (int *)local_14[2];
      piVar9 = piVar8 + uVar6;
      do {
        if (*piVar8 != *piVar9) {
          bVar3 = false;
        }
        piVar9 = piVar9 + 1;
        piVar8 = piVar8 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if (!bVar3) {
        return 1;
      }
    }
  }
  iVar5 = FUN_0061742a(0x60000,0,local_10,0x60000,local_14);
  if (iVar5 == 0) {
    *local_14 = 0;
    return 0;
  }
  return iVar5;
}

