/* Decompiled from Speed.exe @ 0042b040 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042b040(int param_1)

{
  void *pvVar1;
  int extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068504b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00490730();
  pvVar1 = *(void **)(extraout_EDX + 0xc);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0xc0,*(int *)((int)pvVar1 + -0x10),FUN_00401db0);
    _free((void *)((int)pvVar1 + -0x10));
  }
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x1c));
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x38));
  }
  ExceptionList = local_c;
  return;
}

