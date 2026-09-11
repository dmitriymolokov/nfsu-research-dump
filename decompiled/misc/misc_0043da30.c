/* Decompiled from Speed.exe @ 0043da30 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int __fastcall FUN_0043da30(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    if (*(int *)(param_1 + 8 + local_c * 4) != 0) {
      iVar1 = FUN_0043b850(local_c);
      local_8 = local_8 + *(int *)(iVar1 + 8);
    }
  }
  return local_8;
}

