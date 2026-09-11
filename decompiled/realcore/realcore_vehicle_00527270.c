/* Decompiled from Speed.exe @ 00527270 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00527270(undefined4 *param_1)

{
  int *piVar1;
  int *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006befbc;
  piVar1 = (int *)param_1[5];
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    local_10 = param_1;
    if (*piVar1 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_14);
    FUN_0064b580();
    (**(code **)(*local_14 + 4))(piVar1);
    FUN_0064b5a0();
  }
  param_1[5] = 0;
  *param_1 = &PTR_LAB_006bee78;
  ExceptionList = local_c;
  return;
}

