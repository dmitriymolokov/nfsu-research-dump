/* Decompiled from Speed.exe @ 00561990 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00561990(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_006bc7c8;
  DAT_0073d8a0 = 0;
  DAT_0073d8a4 = 0;
  puVar6 = param_1 + 0x29;
  iVar7 = 200;
  do {
    if ((void *)*puVar6 != (void *)0x0) {
      _free((void *)*puVar6);
      *puVar6 = 0;
    }
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar5 = param_1 + 0x14;
  piVar2 = (int *)param_1[0x16];
  while (piVar2 != param_1 + 0x16) {
    iVar7 = *piVar2;
    piVar3 = (int *)piVar2[1];
    *piVar3 = iVar7;
    piVar1 = piVar2 + 2;
    *(int **)(iVar7 + 4) = piVar3;
    piVar3 = (int *)*piVar1;
    while (piVar3 != piVar1) {
      piVar4 = (int *)FUN_00421960();
      iVar7 = *piVar4;
      piVar3 = (int *)piVar4[1];
      *piVar3 = iVar7;
      *(int **)(iVar7 + 4) = piVar3;
      _free(piVar4);
      piVar3 = (int *)*piVar1;
    }
    _free(piVar2);
    piVar2 = (int *)param_1[0x16];
  }
  piVar2 = (int *)*piVar5;
  while (piVar2 != piVar5) {
    iVar7 = *piVar2;
    piVar3 = (int *)piVar2[1];
    *piVar3 = iVar7;
    piVar1 = piVar2 + 2;
    *(int **)(iVar7 + 4) = piVar3;
    piVar3 = (int *)*piVar1;
    while (piVar3 != piVar1) {
      piVar4 = (int *)FUN_00421960();
      iVar7 = *piVar4;
      piVar3 = (int *)piVar4[1];
      *piVar3 = iVar7;
      *(int **)(iVar7 + 4) = piVar3;
      _free(piVar4);
      piVar3 = (int *)*piVar1;
    }
    _free(piVar2);
    piVar2 = (int *)*piVar5;
  }
  FUN_004f7b50();
  return;
}

