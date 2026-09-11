/* Decompiled from Speed.exe @ 00634120 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_00634120(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  param_1[2] = iVar1 + -1;
  if ((*param_1 != 0) && (iVar1 + -1 < 1)) {
    (*(code *)PTR_FUN_006dfaa0)(*param_1,param_1[1]);
    *param_1 = 0;
  }
  return;
}

