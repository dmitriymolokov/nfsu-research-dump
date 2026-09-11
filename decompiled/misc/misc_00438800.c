/* Decompiled from Speed.exe @ 00438800 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00438800(float param_1)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_00674898();
  local_8 = (float)iVar1;
  if (local_8 < param_1) {
    local_8 = local_8 + _DAT_006cc7bc;
  }
  return (float10)local_8;
}

