/* spd-match: far pct=8.52 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0060dc56 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4  FUN_0060dc56(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint auStack_74 [8];
  uint auStack_54 [9];
  uint local_30;
  uint local_20;
  uint local_1c;
  uint local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  if (param_2 == (uint *)0x0) {
    uVar7 = 1;
  }
  else {
    iVar8 = FUN_005f7a96();
    if (iVar8 == 0) {
      uVar11 = *param_2 & 0xffffff;
      local_20 = param_2[1] / uVar11;
      if (1 < local_20) {
        iVar8 = *(int *)(param_1 + 0x58);
        iVar1 = *(int *)(param_1 + 0x60);
        uVar2 = *(uint *)(param_1 + 0x54);
        auStack_54[iVar8] = 0;
        auStack_54[iVar1] = 0;
        auStack_54[uVar2] = 0;
        auStack_74[iVar8] = 1;
        uVar3 = *(uint *)(param_1 + 0x68);
        local_c = uVar2;
        auStack_74[iVar1] = 3;
        local_30 = uVar3;
        auStack_54[uVar3] = 0;
        auStack_74[uVar2] = 1;
        uVar2 = local_20;
        auStack_74[uVar3] = 1;
        local_1c = 0;
        local_8 = 0;
        if (uVar2 != 0) {
          iVar8 = *(int *)(param_1 + 0x10);
          iVar1 = *(int *)(param_1 + 0x14);
          piVar4 = (int *)param_2[2];
          piVar9 = piVar4;
          do {
            puVar5 = *(uint **)(iVar1 + *piVar9 * 4);
            uVar2 = *puVar5;
            uVar3 = *(uint *)(*(int *)(iVar8 + uVar2 * 4) + 4);
            uVar10 = local_30;
            if ((uVar3 & 0x100) == 0) {
              local_14 = uVar2;
              if ((uVar3 & 0x40) != 0) goto LAB_0060dd38;
            }
            else {
              if ((uVar3 & 0x40) == 0) {
                uVar10 = local_c;
              }
LAB_0060dd38:
              local_14 = uVar10;
            }
            param_2 = (uint *)0x0;
            local_10 = piVar4;
            if (local_8 != 0) {
              do {
                puVar6 = *(uint **)(iVar1 + *local_10 * 4);
                if (((uVar2 == *puVar6) && (puVar5[1] == puVar6[1])) && (puVar5[2] == puVar6[2]))
                break;
                param_2 = (uint *)((uint)param_2 + 1);
                local_10 = local_10 + uVar11;
              } while ((uint)param_2 < local_8);
            }
            if (((uint)param_2 == local_8) && (local_14 < 8)) {
              puVar5 = auStack_54 + local_14;
              *puVar5 = *puVar5 + 1;
              if (auStack_74[local_14] < *puVar5) goto LAB_0060dddb;
            }
            if (((uVar3 & 0x100) != 0) && (local_1c = local_1c + 1, 2 < local_1c)) {
LAB_0060dddb:
              if (param_3 == (uint *)0x0) {
                return 1;
              }
              *param_3 = local_8;
              return 1;
            }
            piVar9 = piVar9 + uVar11;
            local_8 = local_8 + 1;
          } while (local_8 < local_20);
        }
      }
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}

