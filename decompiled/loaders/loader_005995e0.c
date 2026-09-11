/* Decompiled from Speed.exe @ 005995e0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00599628) */

int FUN_005995e0(undefined4 param_1,byte param_2)

{
  int local_8;
  
  local_8 = FUN_00599660(param_1,param_2);
  if (local_8 == -1) {
    local_8 = FUN_00599660(param_1,CONCAT31((int3)(-(uint)param_2 >> 8),'\x01' - (param_2 != 0)));
  }
  return local_8;
}

