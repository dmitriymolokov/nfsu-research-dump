/* Decompiled from Speed.exe @ 0055d390 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0055d390(undefined4 *param_1)

{
  undefined4 *_Memory;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00688753;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006bc8e0;
  local_4 = 1;
  puVar2 = param_1 + 0x11;
  iVar3 = 4;
  do {
    _Memory = (undefined4 *)*puVar2;
    if (_Memory != (undefined4 *)0x0) {
      if ((void *)*_Memory != (void *)0x0) {
        _free((void *)*_Memory);
      }
      _free(_Memory);
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar1 = (int *)param_1[0x1a];
  while (piVar1 != param_1 + 0x1a) {
    puVar2 = (undefined4 *)FUN_00556910();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    piVar1 = (int *)param_1[0x1a];
  }
  DAT_007301cc = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_005567f0();
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

