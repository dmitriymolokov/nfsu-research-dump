/* Decompiled from Speed.exe @ 0060dde6 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_0060dde6(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  param_2 = param_2 - (int)param_1;
  while ((*param_1 == -1 || (*param_1 == *(int *)(param_2 + (int)param_1)))) {
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 1;
    if (3 < uVar1) {
      return 1;
    }
  }
  return 0;
}

