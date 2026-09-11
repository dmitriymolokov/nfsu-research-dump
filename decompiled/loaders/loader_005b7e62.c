/* Decompiled from Speed.exe @ 005b7e62 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b7e62(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  if (param_3 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  iVar3 = FUN_005b7369(param_2,1);
  if ((iVar3 != 0) &&
     ((iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0x40) + *(int *)((int)param_1 + 0x118) +
               *(int *)(iVar3 + 0x18), *(int *)(iVar4 + 0x10) == 0 || (*(int *)(iVar3 + 0x10) != -1)
      ))) {
    if (*(int *)(iVar4 + 4) == 2) {
      iVar3 = *(int *)(iVar3 + 0x1c);
      uVar1 = *(uint *)(iVar4 + 0x18);
      local_14 = 0;
      uVar2 = *(uint *)(iVar4 + 0x14);
      local_8 = 1;
      local_c = param_3;
      local_10 = 4;
      if (uVar2 < 5) {
        local_10 = uVar2;
      }
      param_2 = 4;
      if (uVar1 < 5) {
        param_2 = uVar1;
      }
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_3 = 0;
        param_3 = param_3 + 1;
      }
      do {
        param_3 = (undefined4 *)0x0;
        if (local_10 != 0) {
          param_1 = local_c;
          do {
            uVar6 = 0;
            puVar5 = param_1;
            if (param_2 != 0) {
              do {
                local_14 = FUN_005b5e0c(iVar3,puVar5);
                if (local_14 < 0) {
                  return local_14;
                }
                iVar3 = *(int *)(iVar3 + 0xc);
                uVar6 = uVar6 + 1;
                puVar5 = puVar5 + 4;
              } while (uVar6 < param_2);
            }
            if (uVar6 < uVar1) {
              iVar4 = uVar1 - uVar6;
              do {
                iVar4 = iVar4 + -1;
                iVar3 = *(int *)(iVar3 + 0xc);
              } while (iVar4 != 0);
            }
            param_3 = (undefined4 *)((int)param_3 + 1);
            param_1 = param_1 + 1;
          } while (param_3 < local_10);
        }
        if (param_3 < uVar2) {
          iVar4 = uVar2 - (int)param_3;
          uVar6 = uVar1;
          do {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              iVar3 = *(int *)(iVar3 + 0xc);
            }
            iVar4 = iVar4 + -1;
            uVar6 = uVar1;
          } while (iVar4 != 0);
        }
        local_8 = local_8 + -1;
        local_c = local_c + 0x10;
      } while (local_8 != 0);
      return local_14;
    }
    if (*(int *)(iVar4 + 4) == 3) {
      iVar3 = *(int *)(iVar3 + 0x1c);
      uVar1 = *(uint *)(iVar4 + 0x18);
      local_14 = 0;
      uVar2 = *(uint *)(iVar4 + 0x14);
      local_10 = 1;
      local_c = param_3;
      local_8 = 4;
      if (uVar2 < 5) {
        local_8 = uVar2;
      }
      param_2 = 4;
      if (uVar1 < 5) {
        param_2 = uVar1;
      }
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_3 = 0;
        param_3 = param_3 + 1;
      }
      do {
        param_3 = (undefined4 *)0x0;
        if (local_8 != 0) {
          param_1 = local_c;
          do {
            uVar6 = 0;
            puVar5 = param_1;
            if (param_2 != 0) {
              do {
                local_14 = FUN_005b5e0c(iVar3,puVar5);
                if (local_14 < 0) {
                  return local_14;
                }
                iVar3 = *(int *)(iVar3 + 0xc);
                uVar6 = uVar6 + 1;
                puVar5 = puVar5 + 1;
              } while (uVar6 < param_2);
            }
            if (uVar6 < uVar1) {
              iVar4 = uVar1 - uVar6;
              do {
                iVar4 = iVar4 + -1;
                iVar3 = *(int *)(iVar3 + 0xc);
              } while (iVar4 != 0);
            }
            param_3 = (undefined4 *)((int)param_3 + 1);
            param_1 = param_1 + 4;
          } while (param_3 < local_8);
        }
        if (param_3 < uVar2) {
          iVar4 = uVar2 - (int)param_3;
          uVar6 = uVar1;
          do {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              iVar3 = *(int *)(iVar3 + 0xc);
            }
            iVar4 = iVar4 + -1;
            uVar6 = uVar1;
          } while (iVar4 != 0);
        }
        local_10 = local_10 + -1;
        local_c = local_c + 0x10;
      } while (local_10 != 0);
      return local_14;
    }
  }
  return -0x7789f794;
}

