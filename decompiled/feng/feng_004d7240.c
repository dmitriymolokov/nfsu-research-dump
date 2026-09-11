/* Decompiled from Speed.exe @ 004d7240 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004d7240(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c3d50;
  FUN_004d6e40(param_1 + 0x10,param_1[3]);
  _DAT_00777cc0 = 9;
  ExceptionList = local_c;
  return param_1;
}

