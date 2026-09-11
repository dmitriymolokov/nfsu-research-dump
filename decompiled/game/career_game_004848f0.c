/* Decompiled from Speed.exe @ 004848f0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


undefined4 * FUN_004848f0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  FUN_004834e0();
  *param_1 = &PTR_FUN_006c7f38;
  puVar4 = param_1 + 0xb;
  for (iVar3 = 0x29; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x3a] = 0x4000;
  param_1[0x39] = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x34] = 100;
  param_1[0x46] = 0x4000;
  param_1[0x45] = 1;
  param_1[0x42] = 0;
  param_1[0x40] = 100;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x53] = 0x4000;
  param_1[0x52] = 1;
  param_1[0x4f] = 0;
  param_1[0x4d] = 100;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x60] = 0x4000;
  param_1[0x5f] = 1;
  param_1[0x5c] = 0;
  param_1[0x5a] = 100;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x66] = param_2;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  FUN_00440740();
  uVar1 = param_1[0x1a];
  if ((void *)param_1[0x5e] != (void *)0x0) {
    _free((void *)param_1[0x5e]);
    param_1[0x5e] = 0;
  }
  param_1[0x5d] = uVar1;
  param_1[0x5b] = 0x20;
  uVar1 = param_1[0x1f];
  uVar2 = param_1[0x20];
  if ((void *)param_1[0x38] != (void *)0x0) {
    _free((void *)param_1[0x38]);
    param_1[0x38] = 0;
  }
  param_1[0x37] = uVar2;
  param_1[0x35] = uVar1;
  uVar1 = param_1[0x1f];
  uVar2 = param_1[0x21];
  if ((void *)param_1[0x44] != (void *)0x0) {
    _free((void *)param_1[0x44]);
    param_1[0x44] = 0;
  }
  param_1[0x43] = uVar2;
  param_1[0x41] = uVar1;
  uVar1 = param_1[0x22];
  uVar2 = param_1[0x23];
  if ((void *)param_1[0x51] != (void *)0x0) {
    _free((void *)param_1[0x51]);
    param_1[0x51] = 0;
  }
  bVar5 = DAT_00735f5c == 0;
  param_1[0x50] = uVar2;
  param_1[0x4e] = uVar1;
  if (bVar5) {
    *(undefined4 *)(param_1[7] + 0x280) = 0;
    *(undefined4 *)(param_1[7] + 0x284) = 0;
    *(undefined2 *)(param_1[7] + 0xc4) = 0x32dc;
  }
  *(undefined4 *)(param_1[7] + 0xbc) = param_1[0x17];
  *(undefined4 *)(param_1[7] + 0xc0) = param_1[0x18];
  return param_1;
}

