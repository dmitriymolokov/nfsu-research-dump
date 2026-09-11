/* Decompiled from Speed.exe @ 0060b6f6 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_0060b6f6(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  uint auStack_80 [8];
  uint auStack_60 [8];
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (param_2 == (uint *)0x0) {
    uVar5 = 1;
  }
  else {
    iVar6 = FUN_005f7a96();
    if (iVar6 == 0) {
      uVar1 = *param_2;
      local_14 = param_2[1] / (uVar1 & 0xffffff);
      uVar2 = param_3[1];
      uVar7 = *param_3 & 0xffffff;
      iVar6 = *(int *)(param_1 + 0x58);
      auStack_60[iVar6] = 0;
      iVar9 = *(int *)(param_1 + 0x60);
      local_34 = iVar6 * 4;
      auStack_60[iVar9] = 0;
      iVar6 = *(int *)(param_1 + 0x54);
      local_30 = iVar9 * 4;
      auStack_60[iVar6] = 0;
      local_c = 0;
      local_20 = 0;
      *(undefined4 *)((int)auStack_80 + local_34) = 2;
      *(undefined4 *)((int)auStack_80 + local_30) = 5;
      auStack_80[iVar6] = 3;
      local_8 = 0;
      local_40 = uVar2 / uVar7 + local_14;
      if (local_40 != 0) {
        local_30 = (uVar1 & 0xffffff) << 2;
        local_2c = uVar7 * local_14 * -4;
        local_28 = uVar7 << 2;
        local_34 = 0;
        local_38 = local_2c;
        do {
          if (local_8 < local_14) {
            iVar6 = *(int *)(local_34 + param_2[2]);
          }
          else {
            iVar6 = *(int *)(local_2c + param_3[2]);
          }
          piVar3 = *(int **)(*(int *)(param_1 + 0x14) + iVar6 * 4);
          iVar6 = *piVar3;
          local_10 = 0;
          local_3c = *(int *)(*(int *)(param_1 + 0x10) + iVar6 * 4);
          local_24 = iVar6 * 4;
          if (local_8 != 0) {
            local_1c = 0;
            local_18 = local_38;
            do {
              puVar8 = param_3;
              iVar9 = local_18;
              if (local_10 < local_14) {
                puVar8 = param_2;
                iVar9 = local_1c;
              }
              piVar4 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(iVar9 + puVar8[2]) * 4);
              if (((iVar6 == *piVar4) && (piVar3[1] == piVar4[1])) && (piVar3[2] == piVar4[2]))
              break;
              local_18 = local_18 + local_28;
              local_10 = local_10 + 1;
              local_1c = local_1c + local_30;
            } while (local_10 < local_8);
          }
          if (local_10 == local_8) {
            iVar9 = *(int *)(param_1 + 0x60);
            if (((iVar6 == iVar9) && (1 < (uint)piVar3[2])) && (local_c = local_c + 1, 3 < local_c))
            {
              return 1;
            }
            if (iVar6 == *(int *)(param_1 + 0x58)) {
              iVar6 = *(int *)(param_1 + 0x58);
              if ((((char)piVar3[0x14] == '\x03') &&
                  (iVar6 = iVar9, (*(uint *)(param_1 + 0x30) & 0xffff) == 0x101)) &&
                 (local_c = local_c + 1, 3 < local_c)) {
                return 1;
              }
              puVar8 = auStack_60 + iVar6;
              *puVar8 = *puVar8 + 1;
              bVar10 = *puVar8 < auStack_80[iVar6];
              bVar11 = *puVar8 == auStack_80[iVar6];
            }
            else {
              uVar1 = *(uint *)(local_3c + 4);
              if ((uVar1 & 0x40) != 0) break;
              if ((uVar1 & 0x100) == 0) {
                puVar8 = auStack_60 + iVar6;
                *puVar8 = *puVar8 + 1;
                bVar10 = *puVar8 < auStack_80[iVar6];
                bVar11 = *puVar8 == auStack_80[iVar6];
              }
              else {
                local_20 = local_20 + 1;
                bVar10 = local_20 < 3;
                bVar11 = local_20 == 3;
              }
            }
            if (!bVar10 && !bVar11) {
              return 1;
            }
          }
          local_8 = local_8 + 1;
          local_2c = local_2c + local_28;
          local_34 = local_34 + local_30;
        } while (local_8 < local_40);
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

