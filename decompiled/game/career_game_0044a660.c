/* Decompiled from Speed.exe @ 0044a660 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0044a660(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00684ff5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c9820;
  local_4 = 1;
  if ((undefined4 *)param_1[0xff] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xff])(1);
  }
  if ((undefined4 *)param_1[0xfe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xfe])(1);
  }
  if ((undefined4 *)param_1[0x10c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10c])(1);
  }
  if ((undefined4 *)param_1[0x120] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x120])(1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0044ce00(param_1 + 0xb);
  *param_1 = &PTR_LAB_006c8f08;
  ExceptionList = pvStack_c;
  return;
}

