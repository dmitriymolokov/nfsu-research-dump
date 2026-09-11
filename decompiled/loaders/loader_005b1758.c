/* Decompiled from Speed.exe @ 005b1758 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005b1758(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = *(int *)*param_1;
    _free((int *)*param_1);
    *param_1 = iVar1;
  }
  return;
}

