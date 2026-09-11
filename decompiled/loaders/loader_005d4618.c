/* Decompiled from Speed.exe @ 005d4618 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d4618(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((param_3 != (int *)0x0) && (iVar3 = FUN_005d1d40(param_2,1,0), iVar3 != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
    iVar2 = *(int *)(iVar1 + 0x38);
    if (iVar2 == 0) {
      iVar5 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar4 = (int *)(*(int *)(iVar1 + 0x24) + *(int *)(iVar3 + 8) + iVar5);
    if ((((piVar4[4] == 0) || (*(int *)(iVar3 + 0x18) != -1)) && (piVar4[1] == 4)) &&
       (*piVar4 == 0x10)) {
      iVar3 = *(int *)(iVar1 + 0x28) + *(int *)(iVar3 + 0xc);
      if (iVar2 == 0) {
        iVar3 = *(int *)(iVar3 + *(int *)(param_1 + 0x2c));
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar2 + 8) +
                        *(int *)(iVar3 + *(int *)(*(int *)(param_1 + 0xc) + 8)) * 4);
      }
      piVar4 = *(int **)(iVar3 * 0x1c + 4 + *(int *)(param_1 + 0x24));
      *param_3 = (int)piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
        return 0;
      }
      return 0;
    }
  }
  return 0x8876086c;
}

