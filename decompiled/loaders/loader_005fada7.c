/* Decompiled from Speed.exe @ 005fada7 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005fada7(int param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *local_10;
  int *local_c;
  uint local_8;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + param_2 * 4);
  uVar5 = 0;
  if (*(int *)(iVar2 + 0x24) == 0) {
    local_8 = param_1;
    if (*(int *)(iVar2 + 0x14) != 0) {
      do {
        local_10 = (int *)0x0;
        piVar1 = (int *)(*(int *)(iVar2 + 0x18) + uVar5 * 4);
        iVar4 = *(int *)(*(int *)(local_8 + 0x18) + *piVar1 * 4);
        local_c = (int *)0x0;
        iVar3 = FUN_005fad2c(iVar4,&local_c,&local_10,*piVar1);
        if (iVar3 < 0) {
          return iVar3;
        }
        uVar5 = uVar5 + 1;
        *(uint *)(iVar4 + 0x2c) = (uint)local_10 / ((int)local_c + 1U);
      } while (uVar5 < *(uint *)(iVar2 + 0x14));
    }
    uVar5 = local_8;
    FUN_005f7e20(&LAB_005f7de8,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x14),local_8);
    uVar6 = 0;
    if (*(int *)(iVar2 + 0x14) != 0) {
      do {
        iVar4 = FUN_005fada7(*(undefined4 *)(*(int *)(iVar2 + 0x18) + uVar6 * 4),param_3,param_4);
        if (iVar4 < 0) {
          return iVar4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(iVar2 + 0x14));
    }
    if (*(int *)(iVar2 + 0x24) == 0) {
      local_8 = 0;
      *(undefined4 *)(iVar2 + 0x24) = 1;
      *(uint *)(param_3 + *param_4 * 4) = param_2;
      *param_4 = *param_4 + 1;
      if (*(int *)(iVar2 + 0x14) != 0) {
        do {
          iVar4 = *(int *)(uVar5 + 0x18);
          iVar3 = *(int *)(iVar4 + *(int *)(*(int *)(iVar2 + 0x18) + local_8 * 4) * 4);
          uVar6 = *(uint *)(iVar3 + 0x1c);
          param_2 = 0;
          if (uVar6 != 0) {
            local_10 = *(int **)(iVar3 + 0x20);
            uVar7 = 0xffffffff;
            local_c = local_10;
            do {
              uVar8 = uVar7;
              if ((*(int *)(*(int *)(iVar4 + *local_c * 4) + 0x24) == 0) &&
                 (uVar8 = param_2, uVar7 != 0xffffffff)) goto LAB_005faed1;
              param_2 = param_2 + 1;
              local_c = local_c + 1;
              uVar7 = uVar8;
            } while (param_2 < uVar6);
            if (uVar8 != 0xffffffff) {
LAB_005faed1:
              if (param_2 == uVar6) {
                iVar3 = *(int *)(iVar4 + local_10[uVar7] * 4);
                uVar6 = *(uint *)(iVar3 + 0x14);
                param_2 = 0;
                if (uVar6 != 0) {
                  local_c = *(int **)(iVar3 + 0x18);
                  do {
                    if (*(int *)(*(int *)(iVar4 + *local_c * 4) + 0x24) == 0) break;
                    param_2 = param_2 + 1;
                    local_c = local_c + 1;
                  } while (param_2 < uVar6);
                }
                if ((uVar6 <= param_2) &&
                   (iVar4 = FUN_005fada7(local_10[uVar7],param_3,param_4), iVar4 < 0)) {
                  return iVar4;
                }
              }
            }
          }
          local_8 = local_8 + 1;
        } while (local_8 < *(uint *)(iVar2 + 0x14));
      }
    }
  }
  return 0;
}

