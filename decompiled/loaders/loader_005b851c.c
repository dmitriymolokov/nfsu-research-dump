/* Decompiled from Speed.exe @ 005b851c */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b851c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 == 0) {
    iVar2 = -0x7789f794;
  }
  else {
    iVar2 = FUN_005b7369(param_2,1);
    if ((iVar2 == 0) ||
       (((iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
                  *(int *)(iVar2 + 0x18), *(int *)(iVar3 + 0x10) != 0 &&
         (*(int *)(iVar2 + 0x10) == -1)) || (*(int *)(iVar3 + 4) != 1)))) {
      iVar2 = -0x7789f794;
    }
    else {
      iVar5 = *(int *)(iVar2 + 0x1c);
      param_2 = param_3;
      uVar1 = *(uint *)(iVar3 + 0x14);
      iVar2 = 0;
      param_1 = 1;
      param_3 = 4;
      if (uVar1 < 5) {
        param_3 = uVar1;
      }
      do {
        uVar4 = 0;
        if (param_3 != 0) {
          do {
            iVar2 = FUN_005b5dbd(iVar5,*(undefined4 *)(param_2 + uVar4 * 4));
            if (iVar2 < 0) {
              return iVar2;
            }
            iVar5 = *(int *)(iVar5 + 0xc);
            uVar4 = uVar4 + 1;
          } while (uVar4 < param_3);
        }
        if (uVar4 < uVar1) {
          iVar3 = uVar1 - uVar4;
          do {
            iVar3 = iVar3 + -1;
            iVar5 = *(int *)(iVar5 + 0xc);
          } while (iVar3 != 0);
        }
        param_1 = param_1 + -1;
        param_2 = param_2 + 0x10;
      } while (param_1 != 0);
    }
  }
  return iVar2;
}

