/* Decompiled from Speed.exe @ 00535530 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00535530(undefined4 *param_1)

{
  int *piVar1;
  int *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068527b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006be3c0;
  piVar1 = (int *)param_1[0x3d];
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
    param_1[0x3d] = 0;
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(param_1 + 0x40,0x220,2,FUN_0052e460);
  ExceptionList = pvStack_c;
  return;
}

