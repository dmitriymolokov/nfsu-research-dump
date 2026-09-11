/* Decompiled from Speed.exe @ 00579600 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00579600(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685a08;
  pvStack_c = ExceptionList;
  iVar1 = param_1[1];
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    piVar3 = *(int **)(iVar1 + 8);
    ExceptionList = &pvStack_c;
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
    }
  }
  piVar3 = (int *)*param_1;
  iVar1 = piVar3[0x36];
  local_4 = 0xffffffff;
  piVar3[0x36] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    if (piVar3[0x38] != 0) {
      iVar1 = *piVar3;
      piVar4 = (int *)piVar3[1];
      *piVar4 = iVar1;
      *(int **)(iVar1 + 4) = piVar4;
      piVar3[0x38] = 0;
      FUN_00579140();
    }
    *DAT_0073b0e0 = (int)piVar3;
    piVar4 = piVar3;
    piVar3[1] = (int)DAT_0073b0e0;
    DAT_0073b0e0 = piVar4;
    *piVar3 = (int)&DAT_0073b0dc;
  }
  ExceptionList = pvStack_c;
  return;
}

