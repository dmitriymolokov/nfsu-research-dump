/* spd-match: far pct=7.03 M4.0.2-CE */
/* Decompiled from Speed.exe @ 006109ea */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4  FUN_006109ea(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint auStack_64 [8];
  uint auStack_44 [9];
  int local_20;
  uint local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (param_2 == (uint *)0x0) {
    uVar7 = 1;
  }
  else {
    iVar8 = FUN_005f7a96();
    if (iVar8 == 0) {
      uVar11 = *param_2 & 0xffffff;
      local_10 = param_2[1] / uVar11;
      uVar9 = *param_2 & 0xff000000;
      if (((uVar9 == 0xf7000000) || (uVar9 == 0xf8000000)) || (uVar9 == 0xf9000000)) {
        local_10 = 2;
      }
      if (1 < local_10) {
        iVar8 = *(int *)(param_1 + 0x58);
        iVar1 = *(int *)(param_1 + 0x54);
        auStack_44[iVar8] = 0;
        iVar2 = *(int *)(param_1 + 0x60);
        auStack_44[iVar2] = 0;
        auStack_44[iVar1] = 0;
        local_20 = iVar1 * 4;
        auStack_64[iVar8] = 1;
        auStack_64[iVar2] = 3;
        *(undefined4 *)((int)auStack_64 + local_20) = 1;
        local_18 = 0;
        local_c = 0;
        if (local_10 != 0) {
          piVar3 = (int *)param_2[2];
          iVar8 = *(int *)(param_1 + 0x14);
          piVar10 = piVar3;
          do {
            puVar4 = *(uint **)(iVar8 + *piVar10 * 4);
            uVar9 = *puVar4;
            uVar5 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + uVar9 * 4) + 4);
            if (((uVar5 & 0x100) == 0) || ((uVar5 & 0x40) != 0)) {
              local_8 = uVar9;
              if (((uVar5 & 8) != 0) && ((uVar5 & 0x100) == 0)) {
                local_8 = *(uint *)(param_1 + 0x58);
              }
            }
            else {
              local_8 = *(uint *)(param_1 + 0x54);
            }
            param_2 = (uint *)0x0;
            local_14 = piVar3;
            if (local_c != 0) {
              do {
                puVar6 = *(uint **)(iVar8 + *local_14 * 4);
                if (((uVar9 == *puVar6) && (puVar4[1] == puVar6[1])) && (puVar4[2] == puVar6[2]))
                break;
                param_2 = (uint *)((uint)param_2 + 1);
                local_14 = local_14 + uVar11;
              } while ((uint)param_2 < local_c);
            }
            if (((uint)param_2 == local_c) && (local_8 < 8)) {
              puVar4 = auStack_44 + local_8;
              *puVar4 = *puVar4 + 1;
              if (auStack_64[local_8] < *puVar4) goto LAB_00610b98;
            }
            if (((0x1ff < (*(uint *)(param_1 + 0x30) & 0xffff)) &&
                (*(uint *)(param_1 + 0x54) == local_8)) && (local_18 = local_18 + 1, 2 < local_18))
            {
LAB_00610b98:
              if (param_3 != (uint *)0x0) {
                *param_3 = local_c;
              }
              return 1;
            }
            piVar10 = piVar10 + uVar11;
            local_c = local_c + 1;
          } while (local_c < local_10);
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

