/* Decompiled from Speed.exe @ 00462250 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00462250(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006850e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c89f0;
  local_4 = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
  }
  if ((undefined4 *)param_1[0x137] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x137])(1);
  }
  local_4 = 0xffffffff;
  FUN_0044a660();
  ExceptionList = pvStack_c;
  return;
}

