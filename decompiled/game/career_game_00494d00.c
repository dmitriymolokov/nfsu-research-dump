/* Decompiled from Speed.exe @ 00494d00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined1 * FUN_00494d00(undefined1 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688bfb;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)(param_1 + 4);
  ExceptionList = &local_c;
  *puVar1 = puVar1;
  *(undefined4 **)(param_1 + 8) = puVar1;
  local_4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_004a9900(PTR_s_PreRaceStats_fng_006fbaa4);
  *(undefined4 *)(param_1 + 0xc) = *puVar1;
  FUN_004f61f0();
  ExceptionList = local_c;
  return param_1;
}

