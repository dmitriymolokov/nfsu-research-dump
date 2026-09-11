/* Decompiled from Speed.exe @ 0045d710 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0045d710(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068553a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_006c8d20;
  local_4 = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
  }
  param_1[2] = 0;
  local_4 = 0xffffffff;
  FUN_00462250(param_1);
  ExceptionList = pvStack_c;
  return;
}

