/* Decompiled from Speed.exe @ 0059bae0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0059bae0(int *param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    sVar2 = -1;
  }
  else {
    sVar2 = *(short *)(iVar4 + 10);
  }
  iVar3 = *param_2;
  if (iVar3 == 0) {
    sVar1 = -1;
  }
  else {
    sVar1 = *(short *)(iVar3 + 10);
  }
  if (sVar2 == sVar1) {
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = ((param_1[1] - iVar4) + -0x27c) / 0x88;
    }
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = ((param_2[1] - iVar3) + -0x27c) / 0x88;
    }
    if ((iVar4 == iVar3) && (param_1[2] == param_2[2])) {
      return 1;
    }
  }
  return 0;
}

