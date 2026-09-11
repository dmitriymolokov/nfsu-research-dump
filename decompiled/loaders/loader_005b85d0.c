/* Decompiled from Speed.exe @ 005b85d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b85d0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar2 = -0x7789f794;
  }
  else {
    iVar3 = FUN_005b7369(param_2,1);
    iVar2 = 0;
    if ((iVar3 == 0) ||
       (((iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0x40) + *(int *)((int)param_1 + 0x118) +
                  *(int *)(iVar3 + 0x18), *(int *)(iVar4 + 0x10) != 0 &&
         (*(int *)(iVar3 + 0x10) == -1)) || (*(int *)(iVar4 + 4) != 1)))) {
      iVar2 = -0x7789f794;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x1c);
      local_8 = 1;
      uVar1 = *(uint *)(iVar4 + 0x14);
      param_1 = param_3;
      param_2 = 4;
      if (uVar1 < 5) {
        param_2 = uVar1;
      }
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      do {
        uVar5 = 0;
        if (param_2 != 0) {
          param_3 = param_1;
          do {
            iVar2 = FUN_005b5e0c(iVar3,param_3);
            if (iVar2 < 0) {
              return iVar2;
            }
            param_3 = param_3 + 1;
            iVar3 = *(int *)(iVar3 + 0xc);
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_2);
        }
        if (uVar5 < uVar1) {
          iVar4 = uVar1 - uVar5;
          do {
            iVar4 = iVar4 + -1;
            iVar3 = *(int *)(iVar3 + 0xc);
          } while (iVar4 != 0);
        }
        local_8 = local_8 + -1;
        param_1 = param_1 + 4;
      } while (local_8 != 0);
    }
  }
  return iVar2;
}

