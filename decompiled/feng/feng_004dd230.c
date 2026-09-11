/* Decompiled from Speed.exe @ 004dd230 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004dd230(undefined4 param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688c42;
  local_c = ExceptionList;
  local_4 = 0;
  if (DAT_00735dfc != 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_004dd290(DAT_00735dfc,param_1);
    ExceptionList = local_c;
    return uVar1;
  }
  return 0;
}

