/* Decompiled from Speed.exe @ 005b6897 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b6897(uint param_1,uint param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_c;
  uint local_8;
  
  local_c = 0;
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x14);
    local_8 = 4;
    if (uVar2 < 5) {
      local_8 = uVar2;
    }
    param_1 = 4;
    iVar5 = param_2;
    if (uVar1 < 5) {
      param_1 = uVar1;
    }
    do {
      uVar7 = uVar2;
      if ((undefined4 *)*param_3 == (undefined4 *)0x0) {
        for (; uVar3 = uVar1, uVar7 != 0; uVar7 = uVar7 - 1) {
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            iVar5 = *(int *)(iVar5 + 0xc);
          }
        }
      }
      else {
        puVar6 = (undefined4 *)*param_3;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        uVar7 = 0;
        param_2 = 0;
        if (local_8 != 0) {
          do {
            uVar7 = 0;
            if (param_1 != 0) {
              iVar4 = param_2 << 4;
              do {
                local_c = FUN_005b5e0c(iVar5,*param_3 + iVar4);
                if (local_c < 0) {
                  return local_c;
                }
                iVar5 = *(int *)(iVar5 + 0xc);
                uVar7 = uVar7 + 1;
                iVar4 = iVar4 + 4;
              } while (uVar7 < param_1);
            }
            if (uVar7 < uVar1) {
              iVar4 = uVar1 - uVar7;
              do {
                iVar4 = iVar4 + -1;
                iVar5 = *(int *)(iVar5 + 0xc);
              } while (iVar4 != 0);
            }
            uVar7 = param_2 + 1;
            param_2 = uVar7;
          } while (uVar7 < local_8);
        }
        if (uVar7 < uVar2) {
          iVar4 = uVar2 - uVar7;
          uVar7 = uVar1;
          do {
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              iVar5 = *(int *)(iVar5 + 0xc);
            }
            iVar4 = iVar4 + -1;
            uVar7 = uVar1;
          } while (iVar4 != 0);
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return local_c;
}

