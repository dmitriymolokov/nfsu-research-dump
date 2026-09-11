/* Decompiled from Speed.exe @ 0059b840 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0059b840(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = -1;
  if (*param_2 != 0) {
    local_8 = FUN_00421960();
  }
  FUN_0041f670();
  iVar1 = FUN_0041f640();
  if ((iVar1 != 0) && (*param_2 = 0, -1 < local_8)) {
    local_c = 0;
    while( true ) {
      iVar1 = FUN_0042ae30();
      if (iVar1 <= local_c) break;
      iVar1 = FUN_0042ae20();
      iVar2 = FUN_00421960();
      if (iVar2 == local_8) {
        *param_2 = iVar1;
      }
      local_c = local_c + 1;
    }
  }
  return;
}

