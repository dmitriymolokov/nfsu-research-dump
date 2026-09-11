/* Decompiled from Speed.exe @ 00621910 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_00621910(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_10;
  uint local_c;
  uint local_8;
  int local_4;
  
  iVar4 = FUN_00626990();
  local_4 = iVar4;
  if ((param_1[1] != 0) && (local_10 = 0, 0 < iVar4)) {
    do {
      puVar3 = *(uint **)(param_1[1] + local_10 * 4);
      uVar5 = *puVar3;
      uVar7 = local_c;
      while (local_c = uVar7, uVar5 != 0) {
        uVar5 = *puVar3 >> 0x10;
        local_8 = *puVar3 & 0xffff;
        if (uVar5 == 5) {
          if (puVar3[3] != 0xffffffff) {
            local_c = puVar3[4];
            if (local_c != 0xffffffff) {
              FUN_00622c60(&local_c,0);
            }
            puVar3[1] = 0xffffffff;
            puVar3[2] = 0xffffffff;
            puVar3[3] = 0xffffffff;
            puVar3[4] = 0xffffffff;
            puVar3[5] = 0xffffffff;
            uVar7 = local_c;
          }
        }
        else if (uVar5 == 8) {
          local_c = puVar3[2];
          if (local_c != 0xffffffff) {
            FUN_00623500(&local_c);
            puVar3[1] = 0xffffffff;
            puVar3[2] = 0xffffffff;
            uVar7 = local_c;
          }
        }
        else if ((((uVar5 == 0x40) || (uVar5 == 0x41)) || (uVar5 == 0x42)) || (uVar5 == 0x43)) {
          puVar1 = puVar3 + 1;
          uVar5 = puVar3[1];
          while (uVar7 = local_c, uVar5 != 0) {
            uVar7 = *puVar1 >> 0x10;
            uVar5 = *puVar1 & 0xffff;
            if ((uVar7 == 5) || (uVar7 == 0x4c)) {
              local_c = puVar1[4];
              FUN_00622c60(&local_c,0);
              puVar1[1] = 0xffffffff;
              puVar1[2] = 0xffffffff;
              puVar1[3] = 0xffffffff;
              puVar1[4] = 0xffffffff;
              puVar1[5] = 0xffffffff;
            }
            puVar2 = puVar1 + uVar5;
            puVar1 = puVar1 + uVar5;
            uVar5 = *puVar2;
          }
        }
        local_c = uVar7;
        puVar1 = puVar3 + local_8;
        puVar3 = puVar3 + local_8;
        iVar4 = local_4;
        uVar7 = local_c;
        uVar5 = *puVar1;
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar4);
  }
  iVar4 = 1;
  if (param_1[3] != 0) {
    iVar4 = FUN_00626990();
  }
  if (param_1[9] != 0) {
    iVar9 = 0;
    if (0 < iVar4) {
      do {
        uVar6 = FUN_00626980(iVar9);
        if (param_1[6] == 0) {
          if (iVar9 == 0) {
            FUN_00621670(param_1[9]);
          }
          else {
            FUN_00621410(param_1[9],uVar6);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar4);
    }
    param_1[9] = 0;
  }
  puVar8 = (undefined4 *)(*param_1 + -4);
  *param_1 = (int)puVar8;
  (*(code *)PTR_FUN_006dfaa0)(puVar8,*puVar8);
  iVar4 = param_1[1];
  *param_1 = 0;
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_006dfaa0)(iVar4 + -4,*(undefined4 *)(iVar4 + -4));
  }
  param_1[1] = 0;
  return;
}

