/* Decompiled from Speed.exe @ 00578370 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00578370(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00685f71;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006ba65c;
  puVar1 = (undefined4 *)param_1[0xc];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00591c90(puVar1);
    iVar4 = DAT_007344c8;
    iVar5 = *(int *)(DAT_007344c8 + 0x18);
    *puVar1 = *(undefined4 *)(DAT_007344c8 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar5 + -1;
    *(undefined4 **)(iVar4 + 0x10) = puVar1;
    param_1[0xc] = 0;
  }
  if (param_1[0xd] != 0) {
    if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xe])(1);
      param_1[0xe] = 0;
    }
    if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xd])(1);
    }
    param_1[0xd] = 0;
  }
  puVar1 = (undefined4 *)param_1[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    iVar5 = puVar1[0x84];
    piVar2 = (int *)puVar1[0x85];
    *piVar2 = iVar5;
    *(int **)(iVar5 + 4) = piVar2;
    (**(code **)*puVar1)(1);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)param_1[0x12];
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)piVar2[1];
    iVar5 = *piVar2;
    *piVar3 = iVar5;
    *(int **)(iVar5 + 4) = piVar3;
    iVar5 = FUN_00647b70();
    if ((iVar5 == 4) && ((void *)piVar2[0x74] != (void *)0x0)) {
      _free((void *)piVar2[0x74]);
    }
    _free(piVar2);
    param_1[0x12] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00579600(param_1 + 7);
  *param_1 = &PTR_FUN_006ba6b8;
  if (*(char *)(param_1[6] + 0x18) != '\0') {
    iVar5 = param_1[1];
    piVar2 = (int *)param_1[2];
    *piVar2 = iVar5;
    *(int **)(iVar5 + 4) = piVar2;
  }
  ExceptionList = pvStack_c;
  return;
}

