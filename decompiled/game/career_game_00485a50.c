/* Decompiled from Speed.exe @ 00485a50 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void __fastcall FUN_00485a50(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  
  bVar4 = DAT_00735f5c == 0;
  *param_1 = &PTR_FUN_006c7d28;
  if (bVar4) {
    *(undefined4 *)(param_1[7] + 0xb4) = 0;
    *(undefined4 *)(param_1[7] + 0xb8) = 0;
  }
  uVar3 = DAT_006f0888;
  iVar1 = param_1[7];
  *(undefined1 *)(iVar1 + 0x270) = 1;
  *(undefined4 *)(iVar1 + 0x27c) = uVar3;
  if ((void *)param_1[0xf8] != (void *)0x0) {
    _free((void *)param_1[0xf8]);
  }
  if ((void *)param_1[0xff] != (void *)0x0) {
    _free((void *)param_1[0xff]);
  }
  if ((void *)param_1[0xec] != (void *)0x0) {
    _free((void *)param_1[0xec]);
  }
  if ((void *)param_1[0xf3] != (void *)0x0) {
    _free((void *)param_1[0xf3]);
  }
  if ((void *)param_1[0xe0] != (void *)0x0) {
    _free((void *)param_1[0xe0]);
  }
  if ((void *)param_1[0xe7] != (void *)0x0) {
    _free((void *)param_1[0xe7]);
  }
  if ((void *)param_1[0xd4] != (void *)0x0) {
    _free((void *)param_1[0xd4]);
  }
  if ((void *)param_1[0xdb] != (void *)0x0) {
    _free((void *)param_1[0xdb]);
  }
  *param_1 = &PTR_LAB_006c7c50;
  if (param_1[5] != 0) {
    param_1[5] = 0;
    param_1[9] = *(undefined4 *)(param_1[7] + 0x280);
    param_1[10] = *(undefined4 *)(param_1[7] + 0x284);
    iVar1 = param_1[1];
    piVar2 = (int *)param_1[2];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    FUN_00408370();
    return;
  }
  return;
}

