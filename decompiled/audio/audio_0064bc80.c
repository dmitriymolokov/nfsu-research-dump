/* Decompiled from Speed.exe @ 0064bc80 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0064bc80(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[1];
  if (iVar1 < 0) {
    return iVar1;
  }
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    return -6;
  }
  if (iVar1 != piVar2[2]) {
    param_1[1] = -3;
    *param_1 = 0;
    return -3;
  }
  iVar1 = *piVar2;
  *param_2 = iVar1;
  param_2[1] = 0;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_2;
  }
  *piVar2 = (int)param_2;
  return 0;
}

