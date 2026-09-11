/* Decompiled from Speed.exe @ 00673252 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4
FUN_00673252(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_14 = &LAB_006730ae;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}

