/* Decompiled from Speed.exe @ 00511b00 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


bool FUN_00511b00(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int unaff_ESI;
  
  pcVar5 = "EXTREMEDIMENSION";
  iVar3 = -1;
  uVar2 = 0x45;
  do {
    iVar3 = iVar3 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar5 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar5 = pcVar5 + 1;
  } while (*pbVar1 != 0);
  iVar4 = *(int *)(unaff_ESI + 0xc);
  if (iVar4 == iVar3) {
    pcVar5 = "EXTRDIMENSION_BLACK_DECAL";
    iVar3 = -1;
    uVar2 = 0x45;
    do {
      iVar3 = iVar3 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar5 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar5 = pcVar5 + 1;
    } while (*pbVar1 != 0);
    return *(int *)(unaff_ESI + 8) == iVar3;
  }
  pcVar5 = "_BLACK_DECAL";
  uVar2 = 0x5f;
  do {
    iVar4 = iVar4 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar5 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar5 = pcVar5 + 1;
  } while (*pbVar1 != 0);
  return *(int *)(unaff_ESI + 8) == iVar4;
}

