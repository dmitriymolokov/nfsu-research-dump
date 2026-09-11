/* Decompiled from Speed.exe @ 00528300 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00528300(undefined4 *param_1)

{
  int *piVar1;
  int *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684a4f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006bee5c;
  param_1[8] = &PTR_LAB_006bee30;
  piVar1 = (int *)param_1[0x8e];
  local_4 = 1;
  local_10 = param_1;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_14);
    FUN_0064b580();
    (**(code **)(*local_14 + 4))(piVar1);
    FUN_0064b5a0();
    DAT_00735648 = DAT_00735648 + -1;
    param_1[0x8e] = 0;
  }
  piVar1 = (int *)param_1[0x8d];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_14);
    FUN_0064b580();
    (**(code **)(*local_14 + 4))(piVar1);
    FUN_0064b5a0();
    DAT_0073564c = DAT_0073564c + -1;
    param_1[0x8d] = 0;
  }
  param_1[8] = &PTR_LAB_006be7c4;
  *param_1 = &PTR_LAB_006bee78;
  ExceptionList = pvStack_c;
  return;
}

