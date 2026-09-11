/* Decompiled from Speed.exe @ 0043b890 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0043b890(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if ((*(int *)(param_1 + 8 + local_8 * 4) != 0) &&
       (iVar1 = FUN_0043b850(local_8), *(char *)(iVar1 + 0x18) != '\0')) break;
    local_8 = local_8 + 1;
  }
  uVar2 = FUN_0043b850(local_8);
  return uVar2;
}

