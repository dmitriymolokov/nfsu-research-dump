/* Decompiled from Speed.exe @ 0058a2e0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058a2e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_00686e3e;
  piVar1 = *(int **)(param_1 + 8);
  piVar5 = (int *)(param_1 + 8);
  local_14 = 0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  while (piVar1 != piVar5) {
    piVar1 = *(int **)(*piVar5 + 8);
    iVar4 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar4;
    *(int **)(iVar4 + 4) = piVar2;
    if ((((int *)piVar1[0xd] != (int *)0x0) && (iVar4 = *(int *)piVar1[0xd], iVar4 != 0)) &&
       (*(undefined4 **)(iVar4 + 0x34) != (undefined4 *)0x0)) {
      **(undefined4 **)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
    }
    iVar4 = *(int *)piVar1[0xc];
    piVar2 = (int *)((int *)piVar1[0xc])[1];
    *piVar2 = iVar4;
    *(int **)(iVar4 + 4) = piVar2;
    FUN_005671c0();
    if ((DAT_007349b8 != 0) && (DAT_007349b4 != 0)) {
      iVar4 = FUN_00564930();
      if (iVar4 == 0) {
        DAT_007349b8 = 1;
      }
      else {
        FUN_00566db0();
        DAT_007349b4 = 0;
      }
    }
    iVar3 = DAT_00734514;
    iVar4 = *(int *)(DAT_00734514 + 0x18);
    *piVar1 = *(int *)(DAT_00734514 + 0x10);
    *(int *)(iVar3 + 0x18) = iVar4 + -1;
    *(int **)(iVar3 + 0x10) = piVar1;
    piVar1 = (int *)*piVar5;
  }
  local_14 = 0xffffffff;
  FUN_00421900();
  ExceptionList = local_1c;
  return;
}

