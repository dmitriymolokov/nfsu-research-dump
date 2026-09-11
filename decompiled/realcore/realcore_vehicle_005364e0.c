/* Decompiled from Speed.exe @ 005364e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * FUN_005364e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685249;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (param_1 + 1,0x130,0x2c,(_func_void_void_ptr *)&LAB_005361d0,FUN_0040a880);
  local_4 = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0xd26,0x130,8,(_func_void_void_ptr *)&LAB_005361d0,FUN_0040a880);
  param_1[0xd25] = 0;
  *param_1 = 0;
  param_1[0xf88] = 0;
  FUN_00536df0(param_1);
  ExceptionList = local_c;
  return param_1;
}

