/* Decompiled from Speed.exe @ 0044ce00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0044ce00(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684fc8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x3a8) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x3a8))(1);
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(param_1 + 8),0x38,0x10,FUN_0040a880);
  ExceptionList = pvStack_c;
  return;
}

