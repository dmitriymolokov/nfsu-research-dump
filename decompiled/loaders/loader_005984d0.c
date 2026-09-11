/* Decompiled from Speed.exe @ 005984d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005984d0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0042ae30(param_1);
    if (iVar1 <= local_8) break;
    FUN_0042ae20();
    local_8 = local_8 + 1;
  }
  return;
}

