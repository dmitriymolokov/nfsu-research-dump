/* Decompiled from Speed.exe @ 004c5160 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004c5160(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006879f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c52e0;
  local_4 = 0;
  if (DAT_0073578c != 0) {
    *(undefined4 *)(*(int *)(DAT_0073578c + 8) + 0xd0) = 2;
  }
  if ((*(int *)(DAT_007356a8 + 0x104) != 0) &&
     (piVar1 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x24), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0xa0))();
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

