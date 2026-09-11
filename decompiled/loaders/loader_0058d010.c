/* Decompiled from Speed.exe @ 0058d010 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_0058d010(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006855e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  _eh_vector_constructor_iterator_((void *)(param_1 + 0xe0),0x18,2,FUN_0042ac70,FUN_0042ac80);
  local_4 = 0;
  _eh_vector_constructor_iterator_((void *)(param_1 + 0x110),0x18,2,FUN_0042ac70,FUN_0042ac80);
  ExceptionList = local_c;
  return param_1;
}

