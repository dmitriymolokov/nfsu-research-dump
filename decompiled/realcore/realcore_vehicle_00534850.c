/* Decompiled from Speed.exe @ 00534850 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00534850(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006852c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006be3d0;
  local_4 = 0;
  DAT_00735600 = 0;
  if ((undefined4 *)param_1[0xa2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xa2])(1);
    param_1[0xa2] = 0;
  }
  *param_1 = &PTR_LAB_006be7c4;
  ExceptionList = local_c;
  return;
}

