/* Decompiled from Speed.exe @ 005b6985 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b6985(uint param_1,uint param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_c;
  uint local_8;
  
  local_c = 0;
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar2 = *(uint *)(param_1 + 0x18);
    local_8 = 4;
    if (uVar1 < 5) {
      local_8 = uVar1;
    }
    param_1 = 4;
    iVar5 = param_2;
    if (uVar2 < 5) {
      param_1 = uVar2;
    }
    do {
      uVar4 = uVar1;
      if (*param_3 == 0) {
        for (; uVar3 = uVar2, uVar4 != 0; uVar4 = uVar4 - 1) {
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            iVar5 = *(int *)(iVar5 + 0xc);
          }
        }
      }
      else {
        uVar4 = 0;
        param_2 = 0;
        if (local_8 != 0) {
          do {
            uVar4 = 0;
            if (param_1 != 0) {
              iVar6 = param_2 << 2;
              do {
                local_c = FUN_005b5dbd(iVar5,*(undefined4 *)(iVar6 + *param_3));
                if (local_c < 0) {
                  return local_c;
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                uVar4 = uVar4 + 1;
                iVar6 = iVar6 + 0x10;
              } while (uVar4 < param_1);
            }
            if (uVar4 < uVar2) {
              iVar6 = uVar2 - uVar4;
              do {
                iVar6 = iVar6 + -1;
                iVar5 = *(int *)(iVar5 + 0xc);
              } while (iVar6 != 0);
            }
            uVar4 = param_2 + 1;
            param_2 = uVar4;
          } while (uVar4 < local_8);
        }
        if (uVar4 < uVar1) {
          iVar6 = uVar1 - uVar4;
          uVar4 = uVar2;
          do {
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
              iVar5 = *(int *)(iVar5 + 0xc);
            }
            iVar6 = iVar6 + -1;
            uVar4 = uVar2;
          } while (iVar6 != 0);
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return local_c;
}

