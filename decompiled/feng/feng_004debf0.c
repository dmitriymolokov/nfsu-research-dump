/* Decompiled from Speed.exe @ 004debf0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004debf0(undefined4 *param_1,undefined4 param_2)

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
  *param_1 = &PTR_FUN_006c37a8;
  FUN_004c39d0(&PTR_LAB_0041534f_1_006c3afc);
  ExceptionList = local_c;
  return param_1;
}

