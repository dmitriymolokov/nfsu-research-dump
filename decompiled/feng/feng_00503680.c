/* Decompiled from Speed.exe @ 00503680 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00503680(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684ed8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  param_1[5] = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  *param_1 = &PTR_FUN_006c1828;
  if ((void *)param_1[3] != (void *)0x0) {
    _free((void *)param_1[3]);
  }
  *param_1 = &PTR_LAB_006c2c50;
  ExceptionList = local_c;
  return;
}

