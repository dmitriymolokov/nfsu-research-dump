/* Decompiled from Speed.exe @ 005b17b7 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005b17b7(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *(int *)*param_1;
    _free((int *)*param_1);
    *param_1 = iVar1;
  }
  _free((void *)param_1[6]);
  _free((void *)param_1[7]);
  return;
}

