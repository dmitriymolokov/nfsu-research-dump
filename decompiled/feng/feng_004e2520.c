/* Decompiled from Speed.exe @ 004e2520 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


byte FUN_004e2520(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = FUN_004acce0();
  if (iVar3 * 0xc90 + DAT_00734588 == 0) {
    return 0;
  }
  puVar9 = &DAT_006c3454;
  iVar3 = FUN_00567c70();
  uVar4 = 0x5f;
  do {
    iVar3 = iVar3 * 0x21 + uVar4;
    pbVar1 = puVar9 + 1;
    uVar4 = (uint)*pbVar1;
    puVar9 = puVar9 + 1;
  } while (*pbVar1 != 0);
  puVar9 = &DAT_006c344c;
  iVar5 = FUN_00567c70();
  uVar4 = 0x5f;
  do {
    pbVar1 = puVar9 + 1;
    iVar5 = iVar5 * 0x21 + uVar4;
    puVar9 = puVar9 + 1;
    uVar4 = (uint)*pbVar1;
  } while (*pbVar1 != 0);
  puVar9 = &DAT_006c3444;
  iVar6 = FUN_00567c70();
  uVar4 = 0x5f;
  do {
    iVar6 = iVar6 * 0x21 + uVar4;
    pbVar1 = puVar9 + 1;
    uVar4 = (uint)*pbVar1;
    puVar9 = puVar9 + 1;
  } while (*pbVar1 != 0);
  puVar9 = &DAT_006c343c;
  iVar7 = FUN_00567c70();
  uVar4 = 0x5f;
  do {
    pbVar1 = puVar9 + 1;
    iVar7 = iVar7 * 0x21 + uVar4;
    puVar9 = puVar9 + 1;
    uVar4 = (uint)*pbVar1;
  } while (*pbVar1 != 0);
  puVar9 = &DAT_006c3434;
  iVar8 = FUN_00567c70();
  uVar4 = 0x5f;
  do {
    pbVar1 = puVar9 + 1;
    iVar8 = iVar8 * 0x21 + uVar4;
    puVar9 = puVar9 + 1;
    uVar4 = (uint)*pbVar1;
  } while (*pbVar1 != 0);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == iVar3) {
    return 1;
  }
  if (iVar2 == iVar5) {
    return 2;
  }
  if (iVar2 != iVar6) {
    if (iVar2 != iVar7) {
      return (iVar2 != iVar8) - 1U & 5;
    }
    return 4;
  }
  return 3;
}

