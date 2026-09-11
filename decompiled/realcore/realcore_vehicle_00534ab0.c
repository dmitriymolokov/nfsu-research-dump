/* Decompiled from Speed.exe @ 00534ab0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00534ab0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *local_14;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006852a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_006be3c4;
  local_4 = 0;
  iVar2 = 2;
  piVar3 = param_1;
  local_10 = param_1;
  do {
    piVar3 = piVar3 + 0x8c;
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_0064bbd0();
      }
      FUN_0064b510(&local_14);
      FUN_0064b580();
      (**(code **)(*local_14 + 4))(piVar1);
      FUN_0064b5a0();
      *piVar3 = 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(param_1 + 8,0x230,2,FUN_0052e460);
  ExceptionList = pvStack_c;
  return;
}

