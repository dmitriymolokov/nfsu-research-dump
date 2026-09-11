/* Decompiled from Speed.exe @ 00463630 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00463630(undefined4 *param_1)

{
  void *_Memory;
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685d78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c89dc;
  local_4 = 0;
  FUN_00463e80();
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  _Memory = (void *)param_1[5];
  if (_Memory != (void *)0x0) {
    if (*(char *)((int)_Memory + 0x19) != '\0') {
      _free(*(void **)((int)_Memory + 0x20));
    }
    _free(_Memory);
  }
  _free((void *)param_1[6]);
  _free((void *)param_1[10]);
  _free((void *)param_1[0xb]);
  piVar2 = param_1 + 0xe;
  iVar1 = 4;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *param_1 = &PTR_LAB_006caadc;
  ExceptionList = pvStack_c;
  return;
}

