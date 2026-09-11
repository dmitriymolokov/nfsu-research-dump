/* Decompiled from Speed.exe @ 00506160 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint FUN_00506160(void)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = 0;
  piVar2 = &DAT_00706530;
  do {
    if (*piVar2 == 0xc) {
      puVar5 = &DAT_00706530 + iVar4 * 7;
      goto LAB_00506179;
    }
    piVar2 = piVar2 + 7;
    iVar4 = iVar4 + 1;
  } while ((int)piVar2 < 0x70669c);
  puVar5 = (undefined4 *)0x0;
LAB_00506179:
  pcVar7 = "VAPOR";
  iVar4 = -1;
  uVar3 = 0x56;
  do {
    iVar4 = iVar4 * 0x21 + uVar3;
    pbVar6 = (byte *)(pcVar7 + 1);
    uVar3 = (uint)*pbVar6;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar6 != 0);
  pcVar7 = "MANTIS";
  iVar9 = -1;
  uVar3 = 0x4d;
  do {
    iVar9 = iVar9 * 0x21 + uVar3;
    pbVar6 = (byte *)(pcVar7 + 1);
    uVar3 = (uint)*pbVar6;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar6 != 0);
  puVar5 = (undefined4 *)(&DAT_00745b6c)[puVar5[4]];
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  pbVar6 = (byte *)*puVar5;
  bVar1 = *pbVar6;
  uVar3 = CONCAT31((int3)((uint)puVar5 >> 8),bVar1);
  iVar8 = -1;
  while (bVar1 != 0) {
    iVar8 = iVar8 * 0x21 + (uVar3 & 0xff);
    bVar1 = pbVar6[1];
    uVar3 = (uint)bVar1;
    pbVar6 = pbVar6 + 1;
  }
  if (iVar8 == iVar4) {
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  return (byte)((iVar8 != iVar9) - 1) & 2;
}

