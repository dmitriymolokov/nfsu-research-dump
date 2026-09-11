/* Decompiled from Speed.exe @ 0064ca50 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0064ca50(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[3] == 0) {
    return param_1[2];
  }
  uVar1 = FUN_006511b0();
  iVar2 = *param_1 + uVar1 % (uint)param_1[1];
  param_1[2] = iVar2;
  return iVar2;
}

