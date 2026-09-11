/* Decompiled from Speed.exe @ 004ac220 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ac220(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x62cc) = 0;
  pcVar7 = "ONLINE_RX7";
  iVar9 = -1;
  uVar3 = 0x4f;
  do {
    iVar9 = iVar9 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar7 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar1 != 0);
  pcVar7 = "ONLINE_1";
  iVar4 = -1;
  uVar3 = 0x4f;
  do {
    iVar4 = iVar4 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar7 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar1 != 0);
  *(int *)(unaff_ESI + 0x61dc) = iVar4;
  *(int *)((*(int *)(unaff_ESI + 0x62cc) + 0x61e) * 0x10 + unaff_ESI) = iVar9;
  *(undefined4 *)(*(int *)(unaff_ESI + 0x62cc) * 0x10 + 0x61e4 + unaff_ESI) = 8;
  *(undefined4 *)(*(int *)(unaff_ESI + 0x62cc) * 0x10 + 0x61e8 + unaff_ESI) = 0xffffffff;
  iVar9 = *(int *)(unaff_ESI + 0x62cc) + 1;
  *(int *)(unaff_ESI + 0x62cc) = iVar9;
  pcVar7 = "ONLINE_NEON";
  iVar4 = -1;
  uVar3 = 0x4f;
  do {
    iVar4 = iVar4 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar7 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar1 != 0);
  pcVar7 = "ONLINE_2";
  iVar8 = -1;
  uVar3 = 0x4f;
  do {
    iVar8 = iVar8 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar7 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar1 != 0);
  *(int *)(iVar9 * 0x10 + 0x61dc + unaff_ESI) = iVar8;
  *(int *)((*(int *)(unaff_ESI + 0x62cc) + 0x61e) * 0x10 + unaff_ESI) = iVar4;
  *(undefined4 *)(*(int *)(unaff_ESI + 0x62cc) * 0x10 + 0x61e4 + unaff_ESI) = 8;
  iVar4 = -1;
  *(undefined4 *)(*(int *)(unaff_ESI + 0x62cc) * 0x10 + 0x61e8 + unaff_ESI) = 0xffffffff;
  iVar9 = *(int *)(unaff_ESI + 0x62cc) + 1;
  *(int *)(unaff_ESI + 0x62cc) = iVar9;
  pcVar7 = "ONLINE_CELICA";
  uVar3 = 0x4f;
  do {
    iVar4 = iVar4 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar7 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar1 != 0);
  pcVar7 = "ONLINE_3";
  uVar3 = 0x4f;
  iVar8 = -1;
  do {
    iVar8 = iVar8 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar7 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar1 != 0);
  *(int *)(iVar9 * 0x10 + 0x61dc + unaff_ESI) = iVar8;
  *(int *)((*(int *)(unaff_ESI + 0x62cc) + 0x61e) * 0x10 + unaff_ESI) = iVar4;
  *(undefined4 *)(*(int *)(unaff_ESI + 0x62cc) * 0x10 + 0x61e4 + unaff_ESI) = 8;
  *(undefined4 *)(*(int *)(unaff_ESI + 0x62cc) * 0x10 + 0x61e8 + unaff_ESI) = 0xffffffff;
  *(int *)(unaff_ESI + 0x62cc) = *(int *)(unaff_ESI + 0x62cc) + 1;
  iVar9 = 0;
  if (0 < DAT_007343fc) {
    iVar8 = 0;
    iVar4 = DAT_007343fc;
    do {
      if ((iVar8 < 0) || (iVar4 <= iVar9)) {
        iVar5 = 0;
      }
      else {
        iVar5 = DAT_007343f8 + iVar8;
      }
      if (*(short *)(iVar5 + 4) == 3) {
        uVar2 = *(undefined4 *)(iVar5 + 8);
        uVar6 = FUN_004f42f0("STYLE_SPONSOR_CAR_%d",iVar9);
        *(undefined4 *)(*(int *)(unaff_ESI + 0x62cc) * 0x10 + 0x61dc + unaff_ESI) = uVar6;
        *(undefined4 *)((*(int *)(unaff_ESI + 0x62cc) + 0x61e) * 0x10 + unaff_ESI) = uVar2;
        *(undefined4 *)(*(int *)(unaff_ESI + 0x62cc) * 0x10 + 0x61e4 + unaff_ESI) = 0xff;
        *(int *)(*(int *)(unaff_ESI + 0x62cc) * 0x10 + 0x61e8 + unaff_ESI) = iVar9;
        iVar4 = DAT_007343fc;
        *(int *)(unaff_ESI + 0x62cc) = *(int *)(unaff_ESI + 0x62cc) + 1;
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x20;
    } while (iVar9 < iVar4);
  }
  return;
}

