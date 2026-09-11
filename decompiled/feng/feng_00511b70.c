/* Decompiled from Speed.exe @ 00511b70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


bool FUN_00511b70(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int unaff_EDI;
  
  pcVar6 = "EXTREMEDIMENSION";
  iVar4 = -1;
  uVar2 = 0x45;
  do {
    iVar4 = iVar4 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar6 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar6 = pcVar6 + 1;
  } while (*pbVar1 != 0);
  iVar5 = *(int *)(unaff_EDI + 0xc);
  if (iVar5 == iVar4) {
    pcVar6 = "EXTRDIMENSION_WHITE_DECAL";
    iVar4 = -1;
    uVar2 = 0x45;
    do {
      iVar4 = iVar4 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar6 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar6 = pcVar6 + 1;
    } while (*pbVar1 != 0);
    return *(int *)(unaff_EDI + 8) == iVar4;
  }
  puVar3 = &DAT_006c88a0;
  do {
    pcVar6 = puVar3 + 1;
    puVar3 = puVar3 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = "_WHITE_DECAL";
  uVar2 = 0x5f;
  do {
    iVar5 = iVar5 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar6 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar6 = pcVar6 + 1;
  } while (*pbVar1 != 0);
  return *(int *)(unaff_EDI + 8) == iVar5;
}

