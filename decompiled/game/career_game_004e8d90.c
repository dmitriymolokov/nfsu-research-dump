/* Decompiled from Speed.exe @ 004e8d90 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_004e8d90(void)

{
  byte bVar1;
  int iVar2;
  int unaff_EBX;
  undefined **ppuVar3;
  undefined4 uVar4;
  int local_10 [3];
  
  iVar2 = *(int *)(unaff_EBX + 0x44) + 1;
  if (iVar2 < 10) {
    ppuVar3 = &PTR_LAB_006c7804;
  }
  else {
    ppuVar3 = (undefined **)&DAT_006ca778;
  }
  FUN_00565da0(ppuVar3,iVar2);
  FUN_004f6850(local_10);
  iVar2 = *(int *)(unaff_EBX + 0x44) + 2;
  if (iVar2 < 10) {
    ppuVar3 = &PTR_LAB_006c7804;
  }
  else {
    ppuVar3 = (undefined **)&DAT_006ca778;
  }
  FUN_00565da0(ppuVar3,iVar2);
  FUN_004f6850(local_10);
  iVar2 = *(int *)(unaff_EBX + 0x44) + 3;
  if (iVar2 < 10) {
    ppuVar3 = &PTR_LAB_006c7804;
  }
  else {
    ppuVar3 = (undefined **)&DAT_006ca778;
  }
  FUN_00565da0(ppuVar3,iVar2);
  FUN_004f6850(local_10);
  iVar2 = *(int *)(unaff_EBX + 0x44) + 4;
  if (iVar2 < 10) {
    ppuVar3 = &PTR_LAB_006c7804;
  }
  else {
    ppuVar3 = (undefined **)&DAT_006ca778;
  }
  FUN_00565da0(ppuVar3,iVar2);
  FUN_004f6850(local_10);
  iVar2 = *(int *)(unaff_EBX + 0x44) + 5;
  if (iVar2 < 10) {
    ppuVar3 = &PTR_LAB_006c7804;
  }
  else {
    ppuVar3 = (undefined **)&DAT_006ca778;
  }
  FUN_00565da0(ppuVar3,iVar2);
  FUN_004f6850(local_10);
  iVar2 = *(int *)(unaff_EBX + 0x44) + 6;
  if (iVar2 < 10) {
    ppuVar3 = &PTR_LAB_006c7804;
  }
  else {
    ppuVar3 = (undefined **)&DAT_006ca778;
  }
  FUN_00565da0(ppuVar3,iVar2);
  FUN_004f6850(local_10);
  iVar2 = *(int *)(unaff_EBX + 0x44) + 7;
  if (iVar2 < 10) {
    ppuVar3 = &PTR_LAB_006c7804;
  }
  else {
    ppuVar3 = (undefined **)&DAT_006ca778;
  }
  FUN_00565da0(ppuVar3,iVar2);
  FUN_004f6850(local_10);
  iVar2 = *(int *)(unaff_EBX + 0x44) + 8;
  if (iVar2 < 10) {
    ppuVar3 = &PTR_LAB_006c7804;
  }
  else {
    ppuVar3 = (undefined **)&DAT_006ca778;
  }
  FUN_00565da0(ppuVar3,iVar2);
  FUN_004f6850(local_10);
  if ((&DAT_007602a0)[(*(int *)(unaff_EBX + 0x40) + *(int *)(unaff_EBX + 0x44)) * 0x454] == '\0') {
    uVar4 = 0xd1431c0b;
  }
  else {
    bVar1 = *(char *)(unaff_EBX + 0x40) + (char)*(int *)(unaff_EBX + 0x44);
    if (bVar1 < 0x1b) {
      uVar4 = *(undefined4 *)(&DAT_006fa120 + (uint)bVar1 * 4);
    }
    else {
      uVar4 = 0;
    }
  }
  FUN_00495f00(uVar4);
  FUN_004e8b10();
  local_10[0] = *(int *)(unaff_EBX + 0x4c) + -7;
  if (((&DAT_007602a0)[*(int *)(unaff_EBX + 0x44) * 0x454] == '\0') && (DAT_00735dcc == '\0')) {
    FUN_00495f70();
    FUN_00495fc0();
  }
  else {
    FUN_004ad7b0(*(undefined4 *)(&DAT_007442f0 + *(int *)(unaff_EBX + 0x44) * 4));
    FUN_00495fc0();
    FUN_00495f70();
  }
  if (((&DAT_007606f4)[*(int *)(unaff_EBX + 0x44) * 0x454] == '\0') && (DAT_00735dcc == '\0')) {
    FUN_00495f70();
    FUN_00495fc0();
  }
  else {
    FUN_004ad7b0(*(undefined4 *)(&DAT_007442f4 + *(int *)(unaff_EBX + 0x44) * 4));
    FUN_00495fc0();
    FUN_00495f70();
  }
  if (((&DAT_00760b48)[*(int *)(unaff_EBX + 0x44) * 0x454] == '\0') && (DAT_00735dcc == '\0')) {
    FUN_00495f70();
    FUN_00495fc0();
  }
  else {
    FUN_004ad7b0(*(undefined4 *)(&DAT_007442f8 + *(int *)(unaff_EBX + 0x44) * 4));
    FUN_00495fc0();
    FUN_00495f70();
  }
  if (((&DAT_00760f9c)[*(int *)(unaff_EBX + 0x44) * 0x454] == '\0') && (DAT_00735dcc == '\0')) {
    FUN_00495f70();
    FUN_00495fc0();
  }
  else {
    FUN_004ad7b0(*(undefined4 *)(&DAT_007442fc + *(int *)(unaff_EBX + 0x44) * 4));
    FUN_00495fc0();
    FUN_00495f70();
  }
  if (((&DAT_007613f0)[*(int *)(unaff_EBX + 0x44) * 0x454] == '\0') && (DAT_00735dcc == '\0')) {
    FUN_00495fc0();
  }
  else {
    FUN_004ad7b0(*(undefined4 *)(&DAT_00744300 + *(int *)(unaff_EBX + 0x44) * 4));
    FUN_00495fc0();
  }
  FUN_00495f70();
  if (((&DAT_00761844)[*(int *)(unaff_EBX + 0x44) * 0x454] == '\0') && (DAT_00735dcc == '\0')) {
    FUN_00495f70();
    FUN_00495fc0();
  }
  else {
    FUN_004ad7b0(*(undefined4 *)(&DAT_00744304 + *(int *)(unaff_EBX + 0x44) * 4));
    FUN_00495fc0();
    FUN_00495f70();
  }
  if (((&DAT_00761c98)[*(int *)(unaff_EBX + 0x44) * 0x454] == '\0') && (DAT_00735dcc == '\0')) {
    FUN_00495f70();
    FUN_00495fc0();
  }
  else {
    FUN_004ad7b0(*(undefined4 *)(&DAT_00744308 + *(int *)(unaff_EBX + 0x44) * 4));
    FUN_00495fc0();
    FUN_00495f70();
  }
  if (*(int *)(unaff_EBX + 0x44) == local_10[0]) {
    FUN_00495f70();
    FUN_00495f70();
    FUN_00495f70();
    FUN_00495f70();
  }
  else {
    FUN_00495fc0();
    FUN_00495fc0();
    FUN_00495fc0();
    if (((&DAT_007620ec)[*(int *)(unaff_EBX + 0x44) * 0x454] == '\0') && (DAT_00735dcc == '\0')) {
      FUN_00495f70();
      FUN_00495fc0();
      goto LAB_004e9363;
    }
    FUN_004ad7b0(*(undefined4 *)(&DAT_0074430c + *(int *)(unaff_EBX + 0x44) * 4));
    FUN_00495fc0();
  }
  FUN_00495f70();
LAB_004e9363:
  iVar2 = *(int *)(unaff_EBX + 0x40) + *(int *)(unaff_EBX + 0x44);
  if (((&DAT_007602a0)[iVar2 * 0x454] == '\0') && (DAT_00735dcc == '\0')) {
    uVar4 = 0x4207c198;
  }
  else {
    uVar4 = *(undefined4 *)(&DAT_006fa0b0 + iVar2 * 4);
  }
  FUN_00495f00(uVar4);
  return;
}

