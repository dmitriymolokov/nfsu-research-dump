/* Decompiled from Speed.exe @ 00577810 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00577810(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void **ppvVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068514b;
  piVar1 = *(int **)(param_1 + 0x2c);
  local_4 = 0;
  ppvVar4 = &pvStack_c;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar4, piVar1 != (int *)(param_1 + 0x2c)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar1 + -1 != (int *)0x0) {
      (**(code **)piVar1[-1])(1);
    }
    ppvVar4 = ExceptionList;
    piVar1 = *(int **)(param_1 + 0x2c);
  }
  local_4 = 0xffffffff;
  FUN_00577f00();
  ExceptionList = pvStack_c;
  return;
}

