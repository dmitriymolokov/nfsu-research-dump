/* Decompiled from Speed.exe @ 005b65fe */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b65fe(uint param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
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
    iVar5 = (int)param_2;
    if (uVar2 < 5) {
      local_8 = uVar2;
    }
    do {
      param_1 = 0;
      if (local_c != 0) {
        param_2 = param_3;
        do {
          uVar4 = 0;
          puVar6 = param_2;
          if (local_8 != 0) {
            do {
              local_10 = FUN_005b5dbd(iVar5,*puVar6);
              if (local_10 < 0) {
                return local_10;
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              uVar4 = uVar4 + 1;
              puVar6 = puVar6 + 4;
            } while (uVar4 < local_8);
          }
          if (uVar4 < uVar2) {
            iVar3 = uVar2 - uVar4;
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
        uVar4 = uVar2;
        do {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            iVar5 = *(int *)(iVar5 + 0xc);
          }
          iVar3 = iVar3 + -1;
          uVar4 = uVar2;
        } while (iVar3 != 0);
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 0x10;
    } while (param_4 != 0);
  }
  return local_10;
}

