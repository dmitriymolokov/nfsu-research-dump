/* Decompiled from Speed.exe @ 0064b840 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_0064b840(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *param_2 = iVar1;
  param_2[1] = 0;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_2;
  }
  *(int **)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 0;
}

