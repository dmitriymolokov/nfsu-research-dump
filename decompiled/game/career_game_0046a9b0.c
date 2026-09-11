/* Decompiled from Speed.exe @ 0046a9b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0046a9b0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_006854db;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c85a8;
  piVar2 = (int *)param_1[3];
  piVar1 = param_1 + 3;
  local_4 = 0;
  while (piVar2 != piVar1) {
    piVar2 = (int *)*piVar1;
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    if (piVar2 + -1 != (int *)0x0) {
      (**(code **)piVar2[-1])(1);
    }
    piVar2 = (int *)*piVar1;
  }
  piVar2 = (int *)*piVar1;
  local_4 = 0xffffffff;
  while (piVar2 != piVar1) {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    if (piVar2 + -1 != (int *)0x0) {
      (**(code **)piVar2[-1])(1);
    }
    piVar2 = (int *)*piVar1;
  }
  ExceptionList = pvStack_c;
  return;
}

