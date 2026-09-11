/* Decompiled from Speed.exe @ 005b66cd */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b66cd(uint param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_10 = 0;
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar2 = *(uint *)(param_1 + 0x18);
    local_c = 4;
    if (uVar1 < 5) {
      local_c = uVar1;
    }
    local_8 = 4;
    if (uVar2 < 5) {
      local_8 = uVar2;
    }
    puVar4 = param_3;
    for (iVar3 = (param_4 & 0x3ffffff) << 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar5 = (int)param_2, iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    do {
      param_1 = 0;
      if (local_c != 0) {
        param_2 = param_3;
        do {
          uVar6 = 0;
          puVar4 = param_2;
          if (local_8 != 0) {
            do {
              local_10 = FUN_005b5e0c(iVar5,puVar4);
              if (local_10 < 0) {
                return local_10;
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              uVar6 = uVar6 + 1;
              puVar4 = puVar4 + 4;
            } while (uVar6 < local_8);
          }
          if (uVar6 < uVar2) {
            iVar3 = uVar2 - uVar6;
            do {
              iVar3 = iVar3 + -1;
              iVar5 = *(int *)(iVar5 + 0xc);
            } while (iVar3 != 0);
          }
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
        } while (param_1 < local_c);
      }
      if (param_1 < uVar1) {
        iVar3 = uVar1 - param_1;
        uVar6 = uVar2;
        do {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            iVar5 = *(int *)(iVar5 + 0xc);
          }
          iVar3 = iVar3 + -1;
          uVar6 = uVar2;
        } while (iVar3 != 0);
      }
      param_4 = param_4 - 1;
      param_3 = param_3 + 0x10;
    } while (param_4 != 0);
  }
  return local_10;
}

