/* Decompiled from Speed.exe @ 0048e380 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0048e380(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685b83;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c7c08;
  local_4 = 1;
  if ((void *)param_1[0xd] != (void *)0x0) {
    _free((void *)param_1[0xd]);
    param_1[0xd] = 0;
  }
  piVar3 = param_1 + 0xe;
  iVar4 = 4;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
      *piVar3 = 0;
    }
    uVar2 = DAT_006f0888;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = param_1[7];
  *(undefined1 *)(iVar4 + 0x270) = 1;
  *(undefined4 *)(iVar4 + 0x27c) = uVar2;
  iVar4 = param_1[0xba];
  if (0 < iVar4) {
    piVar3 = param_1 + 0x1a;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
      *(char *)(iVar1 + 8) = *(char *)(iVar1 + 8) + -1;
    } while (iVar4 != 0);
  }
  *param_1 = &PTR_LAB_006c7c50;
  if (param_1[5] != 0) {
    param_1[5] = 0;
    param_1[9] = *(undefined4 *)(param_1[7] + 0x280);
    param_1[10] = *(undefined4 *)(param_1[7] + 0x284);
    iVar4 = param_1[1];
    piVar3 = (int *)param_1[2];
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    FUN_00408370();
  }
  ExceptionList = pvStack_c;
  return;
}

