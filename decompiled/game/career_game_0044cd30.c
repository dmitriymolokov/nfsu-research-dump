/* Decompiled from Speed.exe @ 0044cd30 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_0044cd30(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684fc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (param_1 + 2,0x38,0x10,(_func_void_void_ptr *)&LAB_0044a300,FUN_0040a880);
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0xff;
  param_1[0xe5] = 0xffffffff;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  local_4 = 0;
  param_1[0xea] = 0;
  FUN_00457060(param_1 + 0xea);
  FUN_0044ce60();
  ExceptionList = local_c;
  return param_1;
}

