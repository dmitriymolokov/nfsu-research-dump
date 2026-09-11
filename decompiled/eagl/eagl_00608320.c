/* Decompiled from Speed.exe @ 00608320 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __thiscall FUN_00608320(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  puVar11 = (uint *)0x0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_006083b1:
    FUN_005fbec8(param_1,0,0x12d7,"internal error: uppropagation failed");
    return -0x7fffbffb;
  }
  do {
    puVar1 = *(uint **)(param_2 + local_14 * 4);
    if ((((puVar1 != (uint *)0x0) && ((*puVar1 & 0xff000000) != 0)) && ((*puVar1 & 0xffffff) != 0))
       && (uVar12 = puVar1[3], uVar12 != 0)) {
      piVar7 = (int *)puVar1[4];
      piVar6 = *(int **)(*(int *)(param_1 + 0x14) + *piVar7 * 4);
      if ((piVar6[2] == param_4) && (*piVar6 == *(int *)(param_1 + 0x60))) {
        local_18 = local_14;
        uVar3 = 0;
        puVar11 = puVar1;
        if (uVar12 != 0) {
          do {
            if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar7 * 4) + 0xc) == 2) {
              return 0;
            }
            uVar3 = uVar3 + 1;
            piVar7 = piVar7 + 1;
          } while (uVar3 < uVar12);
        }
      }
    }
    local_14 = local_14 + 1;
  } while (local_14 < param_3);
  if (puVar11 == (uint *)0x0) goto LAB_006083b1;
  uVar12 = *puVar11 & 0xffffff;
  if ((*puVar11 & 0xff000000) == 0x30000000) {
    pvVar4 = _malloc(0x38);
    if (pvVar4 == (void *)0x0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_005f7709();
    }
    if (param_3 == 0) {
      return -0x7ff8fff2;
    }
    iVar5 = FUN_005f7760(*puVar11,puVar11[1],puVar11[3] + 1,0);
    if (iVar5 < 0) goto LAB_006086e9;
    piVar7 = (int *)(param_2 + local_18 * 4);
    iVar5 = FUN_005f7a42();
    if (iVar5 < 0) goto LAB_006086e9;
    iVar5 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),param_4,2,0);
    if (iVar5 == -1) {
LAB_00608479:
      iVar5 = -0x7ff8fff2;
      goto LAB_006086e9;
    }
    puVar13 = (undefined4 *)puVar11[2];
    puVar14 = *(undefined4 **)(param_3 + 8);
    for (uVar12 = *(uint *)(param_3 + 4) & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    puVar13 = (undefined4 *)puVar11[4];
    puVar14 = *(undefined4 **)(param_3 + 0x10);
    for (uVar12 = puVar11[3] & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    *(int *)(*(int *)(param_3 + 0x10) + puVar11[3] * 4) = iVar5;
    if (*piVar7 != 0) {
      FUN_005f7186();
    }
    *piVar7 = param_3;
  }
  else {
    pvVar4 = _malloc(0x38);
    if (pvVar4 == (void *)0x0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_005f7709();
    }
    if (param_3 == 0) {
      return -0x7ff8fff2;
    }
    uVar3 = puVar11[1] / uVar12;
    iVar5 = FUN_005f7760((uVar12 + 1 ^ *puVar11) & 0xffffff ^ *puVar11,puVar11[1] + uVar3,
                         puVar11[3] + 1,0);
    if (iVar5 < 0) goto LAB_006086e9;
    piVar7 = (int *)(param_2 + local_18 * 4);
    iVar5 = FUN_005f7a42();
    if (iVar5 < 0) goto LAB_006086e9;
    local_1c = 0;
    if (uVar3 != 0) {
      local_14 = uVar12 * 4;
      local_10 = 0;
      local_c = 0;
      iVar8 = local_14 + 4;
      do {
        bVar2 = true;
        if (1 < uVar12) {
          piVar6 = (int *)(puVar11[2] + local_c);
          iVar5 = *piVar6;
          local_24 = uVar12 - 1;
          do {
            piVar6 = piVar6 + 1;
            if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar6 * 4) + 0xc) !=
                *(int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar5 * 4) + 0xc)) {
              bVar2 = false;
            }
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
        puVar13 = (undefined4 *)(puVar11[2] + local_c);
        puVar14 = (undefined4 *)(*(int *)(param_3 + 8) + local_10);
        for (uVar9 = uVar12; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        if (bVar2) {
          *(undefined4 *)(local_14 + *(int *)(param_3 + 8)) = *(undefined4 *)(local_c + puVar11[2]);
        }
        else {
          piVar6 = *(int **)(*(int *)(param_1 + 0x14) +
                            *(int *)(local_10 + *(int *)(param_3 + 8)) * 4);
          iVar5 = piVar6[2];
          iVar10 = FUN_005f74cf(*piVar6,iVar5,2,0);
          if (iVar10 == -1) goto LAB_00608479;
          *(int *)(local_14 + *(int *)(param_3 + 8)) = iVar10;
          if ((*piVar6 == *(int *)(param_1 + 0x60)) &&
             (iVar5 = FUN_00608320(param_2,local_18,iVar5), iVar5 < 0)) goto LAB_006086e9;
        }
        iVar5 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),param_4,2,0);
        if (iVar5 == -1) goto LAB_00608479;
        puVar13 = (undefined4 *)puVar11[4];
        puVar14 = *(undefined4 **)(param_3 + 0x10);
        for (uVar9 = puVar11[3] & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        local_1c = local_1c + 1;
        for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        *(int *)(*(int *)(param_3 + 0x10) + puVar11[3] * 4) = iVar5;
        local_c = local_c + uVar12 * 4;
        local_10 = local_10 + iVar8;
        local_14 = local_14 + iVar8;
      } while (local_1c < uVar3);
    }
    if (*piVar7 != 0) {
      FUN_005f7186();
    }
    *piVar7 = param_3;
  }
  param_3 = 0;
  iVar5 = 0;
LAB_006086e9:
  if (param_3 != 0) {
    FUN_005f7186();
    return iVar5;
  }
  return iVar5;
}

