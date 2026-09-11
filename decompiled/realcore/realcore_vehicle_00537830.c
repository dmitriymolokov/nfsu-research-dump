/* Decompiled from Speed.exe @ 00537830 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * FUN_00537830(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684d28;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006bde10;
  _eh_vector_constructor_iterator_
            (param_1 + 0x10,0x2e0,2,FUN_00537910,(_func_void_void_ptr *)&LAB_00537580);
  ExceptionList = local_c;
  return param_1;
}

