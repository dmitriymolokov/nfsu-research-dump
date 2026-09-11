/* Decompiled from Speed.exe @ 0045add0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0045add0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((iVar1 < 2) || (3 < iVar1)) {
    if ((iVar1 == *param_1) &&
       (ABS((float)param_2[2] - (float)param_1[2]) < _DAT_006cc8bc !=
        (ABS((float)param_2[2] - (float)param_1[2]) == _DAT_006cc8bc))) {
      return 1;
    }
  }
  else if ((param_2[1] == param_1[1]) && (iVar1 == *param_1)) {
    return 1;
  }
  return 0;
}

