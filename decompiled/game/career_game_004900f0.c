/* Decompiled from Speed.exe @ 004900f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004900f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_006c7b98;
  _DAT_0073654c = 0;
  _free((void *)param_1[0xd]);
  _free((void *)param_1[0xe]);
  _free((void *)param_1[0xf]);
  _free((void *)param_1[0x10]);
  _free((void *)param_1[0x11]);
  iVar3 = param_1[0xd2];
  if (0 < iVar3) {
    piVar2 = param_1 + 0x32;
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
      *(char *)(iVar1 + 8) = *(char *)(iVar1 + 8) + -1;
    } while (iVar3 != 0);
  }
  if ((void *)param_1[0x22] != (void *)0x0) {
    _free((void *)param_1[0x22]);
  }
  if ((void *)param_1[0x29] != (void *)0x0) {
    _free((void *)param_1[0x29]);
  }
  if ((void *)param_1[0x16] != (void *)0x0) {
    _free((void *)param_1[0x16]);
  }
  if ((void *)param_1[0x1d] != (void *)0x0) {
    _free((void *)param_1[0x1d]);
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

