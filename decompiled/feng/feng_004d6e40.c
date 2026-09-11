/* Decompiled from Speed.exe @ 004d6e40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004d6e40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068612b;
  local_c = ExceptionList;
  puVar1 = param_1 + 3;
  ExceptionList = &local_c;
  *puVar1 = puVar1;
  param_1[4] = puVar1;
  local_4 = 0;
  param_1[5] = param_2;
  param_1[1] = 0;
  pvVar2 = _malloc(40000);
  *param_1 = pvVar2;
  param_1[7] = 0;
  FUN_004d6f40();
  param_1[6] = 0;
  DAT_0073570c = 1;
  ExceptionList = local_c;
  return param_1;
}

