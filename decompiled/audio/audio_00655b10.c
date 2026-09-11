/* Decompiled from Speed.exe @ 00655b10 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00655b10(int *param_1)

{
  int iVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    iVar1 = *(int *)*param_1;
    *param_1 = iVar1;
    if (iVar1 == 0) {
      param_1[1] = 0;
      param_1[2] = param_1[2] + -1;
      return;
    }
    *(undefined4 *)(iVar1 + 4) = 0;
    param_1[2] = param_1[2] + -1;
  }
  return;
}

