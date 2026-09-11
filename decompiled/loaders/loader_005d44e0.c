/* Decompiled from Speed.exe @ 005d44e0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005d44e0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(param_1 + 0x90);
  *(undefined4 *)(*piVar4 + 4) = 4;
  *(undefined4 *)*piVar4 = 0x10;
  *(undefined4 *)(*piVar4 + 0x10) = 0;
  iVar2 = FUN_005d1d40(param_2,1,1);
  if ((iVar2 == 0) ||
     (iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar2 + 4) * 4),
     (*(uint *)(iVar3 + 0x20) & 2) != 0)) {
    iVar3 = -0x7789f794;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x38);
    if (iVar1 == 0) {
      iVar5 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar4 = (int *)(*(int *)(iVar3 + 0x24) + *(int *)(iVar2 + 8) + iVar5);
    if ((((piVar4[4] == 0) || (*(int *)(iVar2 + 0x18) != -1)) && (piVar4[1] == 4)) &&
       (*piVar4 == 0x10)) {
      if (iVar1 == 0) {
        iVar5 = *(int *)(iVar3 + 0x28) + *(int *)(iVar2 + 0xc);
        iVar3 = *(int *)(iVar5 + *(int *)(param_1 + 0x2c));
      }
      else {
        iVar5 = *(int *)(iVar3 + 0x28) + *(int *)(iVar2 + 0xc);
        iVar3 = *(int *)(*(int *)(iVar1 + 8) +
                        *(int *)(iVar5 + *(int *)(*(int *)(param_1 + 0xc) + 8)) * 4);
      }
      if (param_3 == *(int *)(iVar3 * 0x1c + 4 + *(int *)(param_1 + 0x24))) {
        if (iVar1 == 0) {
          iVar3 = *(int *)(iVar5 + *(int *)(param_1 + 0x2c));
        }
        else {
          iVar3 = *(int *)(*(int *)(iVar1 + 8) +
                          *(int *)(iVar5 + *(int *)(*(int *)(param_1 + 0xc) + 8)) * 4);
        }
        if (*(int *)(iVar3 * 0x1c + 0xc + *(int *)(param_1 + 0x24)) != 0) {
          return 0;
        }
      }
      if (iVar1 == 0) {
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      iVar3 = FUN_005ce8ec(param_3,*(undefined4 *)(iVar5 + iVar3),iVar1);
      if (-1 < iVar3) {
        iVar3 = FUN_005d02d7(iVar2);
      }
    }
    else {
      iVar3 = -0x7789f794;
    }
  }
  return iVar3;
}

