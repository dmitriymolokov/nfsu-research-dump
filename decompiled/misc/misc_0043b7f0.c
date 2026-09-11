/* Decompiled from Speed.exe @ 0043b7f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int __fastcall FUN_0043b7f0(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    if (*(int *)(param_1 + 8 + local_c * 4) != 0) {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

