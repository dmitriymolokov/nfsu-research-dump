/* Decompiled from Speed.exe @ 005b6a71 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b6a71(uint param_1,uint param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
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
    iVar6 = param_2;
    if (uVar1 < 5) {
      param_1 = uVar1;
    }
    do {
      uVar5 = uVar2;
      if ((undefined4 *)*param_3 == (undefined4 *)0x0) {
        for (; uVar3 = uVar1, uVar5 != 0; uVar5 = uVar5 - 1) {
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            iVar6 = *(int *)(iVar6 + 0xc);
          }
        }
      }
      else {
        puVar7 = (undefined4 *)*param_3;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        uVar5 = 0;
        param_2 = 0;
        if (local_8 != 0) {
          do {
            uVar5 = 0;
            if (param_1 != 0) {
              iVar4 = param_2 << 2;
              do {
                local_c = FUN_005b5e0c(iVar6,*param_3 + iVar4);
                if (local_c < 0) {
                  return local_c;
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                uVar5 = uVar5 + 1;
                iVar4 = iVar4 + 0x10;
              } while (uVar5 < param_1);
            }
            if (uVar5 < uVar1) {
              iVar4 = uVar1 - uVar5;
              do {
                iVar4 = iVar4 + -1;
                iVar6 = *(int *)(iVar6 + 0xc);
              } while (iVar4 != 0);
            }
            uVar5 = param_2 + 1;
            param_2 = uVar5;
          } while (uVar5 < local_8);
        }
        if (uVar5 < uVar2) {
          iVar4 = uVar2 - uVar5;
          uVar5 = uVar1;
          do {
            for (; uVar5 != 0; uVar5 = uVar5 - 1) {
              iVar6 = *(int *)(iVar6 + 0xc);
            }
            iVar4 = iVar4 + -1;
            uVar5 = uVar1;
          } while (iVar4 != 0);
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return local_c;
}

