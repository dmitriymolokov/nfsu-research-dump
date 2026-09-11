/* Decompiled from Speed.exe @ 004b2280 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004b2280(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006879f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c61f0;
  local_4 = 0;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x11])(1);
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

