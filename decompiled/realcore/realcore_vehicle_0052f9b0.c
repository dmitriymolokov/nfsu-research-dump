/* Decompiled from Speed.exe @ 0052f9b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_0052f9b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_00686b7b;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006be5a4;
  piVar1 = (int *)param_1[9];
  local_4 = 0;
  while (piVar1 != param_1 + 9) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar1 + -0x84 != (int *)0x0) {
      (**(code **)piVar1[-0x84])(1);
    }
    piVar1 = (int *)param_1[9];
  }
  local_4 = 0xffffffff;
  FUN_00421900();
  ExceptionList = pvStack_c;
  return;
}

