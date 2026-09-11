/* Decompiled from Speed.exe @ 004ec470 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004ec470(undefined4 *param_1)

{
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,unaff_EDI);
  *param_1 = &PTR_FUN_006c2c8c;
  local_4 = 0;
  param_1[0x80] = *(undefined4 *)(unaff_EDI + 4);
  FUN_004ec990(param_1);
  FUN_004ed930(param_1);
  ExceptionList = local_c;
  return param_1;
}

