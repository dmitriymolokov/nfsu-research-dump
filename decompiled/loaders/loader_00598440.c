/* Decompiled from Speed.exe @ 00598440 */
/* Module: Loader */
/* Ghidra DecompileAll */


float * __fastcall FUN_00598440(float *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  FUN_0059af20(param_1 + 4,0,1);
  FUN_0059ae60();
  if (*param_1 < DAT_006b5a40) {
    *param_1 = DAT_006b5a40;
  }
  param_1[1] = 0.0;
  *(undefined1 *)(param_1 + 2) = 1;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0042ae30();
    if (iVar1 <= local_8) break;
    uVar2 = FUN_0042ae20();
    FUN_005ab080(param_1,uVar2);
    local_8 = local_8 + 1;
  }
  return param_1;
}

