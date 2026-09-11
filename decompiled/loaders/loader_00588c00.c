/* Decompiled from Speed.exe @ 00588c00 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00588c00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  
  puVar11 = DAT_0073ad10;
  iVar13 = 0;
  DAT_00734534 = 1;
  _DAT_0073ac60 = 0;
  _DAT_0073ac64 = 0;
  DAT_0073ac68 = 0;
  _DAT_0073ac6c = 0;
  puVar12 = (undefined4 *)FUN_0040a880();
  for (; puVar11 != puVar12; puVar11 = (undefined4 *)*puVar11) {
    if (puVar11[0x12] == 1) {
      uVar1 = puVar11[0x16];
      uVar2 = puVar11[0x17];
      uVar6 = puVar11[0x24];
      uVar7 = puVar11[0x14];
      uVar3 = puVar11[0x18];
      uVar8 = puVar11[0x22];
      uVar4 = puVar11[0x1b];
      uVar9 = puVar11[0x23];
      uVar5 = puVar11[0x19];
      uVar10 = puVar11[0x13];
      if (iVar13 != 0x95) {
        DAT_0073ac68 = iVar13 + 1;
        (&DAT_00737c14)[iVar13 * 0x14] = puVar11[0x1a];
        (&DAT_00737c10)[iVar13 * 0x14] = uVar10;
        (&DAT_00737c1c)[iVar13 * 0x14] = uVar5;
        (&DAT_00737c20)[iVar13 * 0x14] = uVar4;
        (&DAT_00737c34)[iVar13 * 0x14] = uVar2;
        (&DAT_00737c38)[iVar13 * 0x14] = uVar3;
        (&DAT_00737c30)[iVar13 * 0x14] = uVar1;
        (&DAT_00737c40)[iVar13 * 0x14] = uVar8;
        (&DAT_00737c44)[iVar13 * 0x14] = uVar9;
        (&DAT_00737c48)[iVar13 * 0x14] = uVar6;
        (&DAT_00737c18)[iVar13 * 0x14] = uVar7;
        iVar13 = DAT_0073ac68;
      }
    }
  }
  return;
}

