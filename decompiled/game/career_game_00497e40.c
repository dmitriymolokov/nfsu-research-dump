/* Decompiled from Speed.exe @ 00497e40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00497e40(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688528;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c75b8;
  local_4 = 0;
  if ((*(int *)(DAT_007356a8 + 0x104) != 0) &&
     (piVar1 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x24), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0xa0))();
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

