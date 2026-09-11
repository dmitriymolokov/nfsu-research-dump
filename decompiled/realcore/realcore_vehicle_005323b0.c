/* Decompiled from Speed.exe @ 005323b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_005323b0(undefined4 *param_1)

{
  int *piVar1;
  int *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006852e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006be6c8;
  piVar1 = (int *)param_1[0xdb];
  local_4 = 0;
  local_10 = param_1;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_14);
    FUN_0064b580();
    (**(code **)(*local_14 + 4))(piVar1);
    FUN_0064b5a0();
  }
  param_1[0xdb] = 0;
  local_4 = 0xffffffff;
  FUN_005306a0();
  ExceptionList = pvStack_c;
  return;
}

