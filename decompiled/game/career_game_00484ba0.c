/* Decompiled from Speed.exe @ 00484ba0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void __fastcall FUN_00484ba0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = DAT_00735f5c == 0;
  *param_1 = &PTR_FUN_006c7f38;
  if (bVar4) {
    *(undefined4 *)(param_1[7] + 0xb4) = 0;
    *(undefined4 *)(param_1[7] + 0xb8) = 0;
  }
  iVar3 = param_1[0x10f];
  if (0 < iVar3) {
    piVar2 = param_1 + 0x6f;
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
      *(char *)(iVar1 + 8) = *(char *)(iVar1 + 8) + -1;
    } while (iVar3 != 0);
  }
  if ((void *)param_1[0x5e] != (void *)0x0) {
    _free((void *)param_1[0x5e]);
  }
  if ((void *)param_1[0x65] != (void *)0x0) {
    _free((void *)param_1[0x65]);
  }
  if ((void *)param_1[0x51] != (void *)0x0) {
    _free((void *)param_1[0x51]);
  }
  if ((void *)param_1[0x58] != (void *)0x0) {
    _free((void *)param_1[0x58]);
  }
  if ((void *)param_1[0x44] != (void *)0x0) {
    _free((void *)param_1[0x44]);
  }
  if ((void *)param_1[0x4b] != (void *)0x0) {
    _free((void *)param_1[0x4b]);
  }
  if ((void *)param_1[0x38] != (void *)0x0) {
    _free((void *)param_1[0x38]);
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    _free((void *)param_1[0x3f]);
  }
  *param_1 = &PTR_LAB_006c7c50;
  if (param_1[5] == 0) {
    return;
  }
  param_1[5] = 0;
  param_1[9] = *(undefined4 *)(param_1[7] + 0x280);
  param_1[10] = *(undefined4 *)(param_1[7] + 0x284);
  iVar3 = param_1[1];
  piVar2 = (int *)param_1[2];
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
  FUN_00408370();
  return;
}

