/* Decompiled from Speed.exe @ 0059c0a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0059c0a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684c88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006b8968;
  local_4 = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
  }
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x11])(1);
  }
  *param_1 = &PTR_LAB_006c8f08;
  ExceptionList = pvStack_c;
  return;
}

