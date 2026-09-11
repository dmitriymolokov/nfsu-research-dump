/* Decompiled from Speed.exe @ 0064bf60 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_0064bf60(int *param_1,int *param_2)

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
  if (iVar1 != piVar2[3]) {
    param_1[1] = -3;
    *param_1 = 0;
    return -3;
  }
  if (param_2 == (int *)*piVar2) {
    *piVar2 = *(int *)*piVar2;
  }
  piVar2 = (int *)param_2[1];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *param_2;
  }
  if (*param_2 != 0) {
    *(int **)(*param_2 + 4) = piVar2;
  }
  return 0;
}

