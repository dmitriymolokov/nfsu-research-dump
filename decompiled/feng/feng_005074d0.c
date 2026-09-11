/* Decompiled from Speed.exe @ 005074d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint FUN_005074d0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  
  uVar3 = FUN_00507340();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  iVar4 = FUN_004acce0();
  pbVar5 = (byte *)(iVar4 * 0xc90 + DAT_00734588);
  iVar4 = -1;
  bVar2 = *pbVar5;
  while (bVar2 != 0) {
    iVar4 = iVar4 * 0x21 + (uint)bVar2;
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  pcVar6 = "_STYLE03_SPOILER";
  uVar3 = 0x5f;
  do {
    iVar4 = iVar4 * 0x21 + uVar3;
    pbVar5 = (byte *)(pcVar6 + 1);
    uVar3 = (uint)*pbVar5;
    pcVar6 = pcVar6 + 1;
  } while (*pbVar5 != 0);
  return (uint)(*(int *)(param_1 + 8) == iVar4);
}

