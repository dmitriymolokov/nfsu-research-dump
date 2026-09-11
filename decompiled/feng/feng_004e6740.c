/* Decompiled from Speed.exe @ 004e6740 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004e6740(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c3124;
  local_4 = 0;
  _DAT_00777cc0 = 4;
  FUN_004e6ac0();
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  FUN_004e7860(0x9fe0ca88,0x7014dc91,0xad7303c0,0xad7303c0);
  DAT_007363b1 = 0;
  ExceptionList = local_c;
  return param_1;
}

