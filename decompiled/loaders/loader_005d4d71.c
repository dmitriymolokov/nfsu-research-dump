/* Decompiled from Speed.exe @ 005d4d71 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d4d71(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_3 == (uint *)0x0) {
    return 0x8876086c;
  }
  iVar2 = FUN_005d1d40(param_2,1,0);
  if (iVar2 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar2 + 4) * 4);
    if (*(int *)(iVar1 + 0x38) == 0) {
      iVar4 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar3 = (int *)(*(int *)(iVar1 + 0x24) + *(int *)(iVar2 + 8) + iVar4);
    if (((((piVar3[4] == 0) || (*(int *)(iVar2 + 0x18) != -1)) && (-1 < piVar3[1])) &&
        ((piVar3[1] < 4 && (piVar3[5] == 1)))) && (piVar3[6] == 1)) {
      iVar4 = *piVar3;
      if ((iVar4 == 1) || (iVar4 == 2)) {
        if (*(int *)(iVar1 + 0x38) == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        iVar2 = *(int *)(*(int *)(iVar1 + 0x28) + *(int *)(iVar2 + 0xc) + iVar4);
      }
      else {
        if (iVar4 != 3) {
          return 0x8876086c;
        }
        iVar2 = __ftol();
      }
      *param_3 = (uint)(iVar2 != 0);
      return 0;
    }
  }
  return 0x8876086c;
}

