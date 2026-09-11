/* Decompiled from Speed.exe @ 005830d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005830d0(undefined4 *param_1)

{
  char *pcVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006850e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006b96b0;
  local_4 = 0;
  if (param_1[0x138] != 0) {
    pcVar1 = (char *)(param_1[0x138] + 0x100);
    *pcVar1 = *pcVar1 + -1;
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
  }
  local_4 = 0xffffffff;
  FUN_0044a660();
  ExceptionList = pvStack_c;
  return;
}

