/* Decompiled from Speed.exe @ 0064ba10 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_0064ba10(int *param_1,undefined4 param_2)

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
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    do {
      (*(code *)piVar2[2])(param_2,piVar2[3]);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
    return 0;
  }
  return -4;
}

