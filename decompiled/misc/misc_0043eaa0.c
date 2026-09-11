/* Decompiled from Speed.exe @ 0043eaa0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int FUN_0043eaa0(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_8 = 1;
  local_c = FUN_00421960();
  while( true ) {
    iVar1 = FUN_0040a880();
    if (local_c == iVar1) {
      return 0;
    }
    if (*(int *)(local_c + 8) == param_1) break;
    local_8 = local_8 + 1;
    local_c = FUN_00421960();
  }
  return local_8;
}

