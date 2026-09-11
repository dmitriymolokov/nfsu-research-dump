/* Decompiled from Speed.exe @ 00507340 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_00507340(void)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar7 = FUN_004acce0();
  if (((iVar7 == 0) || (iVar7 == 1)) || (iVar7 == 5)) {
    return 0;
  }
  iVar10 = 0;
  if (iVar7 != 0x23) {
    if (iVar7 * 0xc90 + DAT_00734588 == 0) {
      uVar11 = 0;
      goto LAB_00507405;
    }
    iVar10 = FUN_00567c70();
  }
  puVar5 = DAT_0073ad40;
  puVar8 = (undefined4 *)FUN_0040a880();
  for (; puVar5 != puVar8; puVar5 = (undefined4 *)*puVar5) {
    uVar11 = puVar5[3];
    uVar12 = puVar5[4] * 0x30 + uVar11;
    if ((iVar10 != 0) && (uVar11 = FUN_0053e400(iVar10,uVar11,4), uVar11 == 0)) break;
    for (; uVar11 < uVar12; uVar11 = uVar11 + 0x30) {
      if ((iVar10 != 0) && (*(int *)(uVar11 + 4) != iVar10)) goto LAB_00507401;
      if (*(char *)(uVar11 + 0x10) == '\v') goto LAB_00507405;
    }
  }
LAB_00507401:
  uVar11 = 0;
LAB_00507405:
  pcVar3 = (char *)(iVar7 * 0xc90 + DAT_00734588);
  cVar6 = *pcVar3;
  pcVar9 = pcVar3;
  while (cVar6 != '\0') {
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar6 = *pcVar1;
  }
  pcVar9 = "_STYLE03_SPOILER";
  do {
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
  } while (*pcVar1 != '\0');
  do {
    if (uVar11 == 0) {
      return 0;
    }
    if (*(char *)(uVar11 + 0x11) == '\x04') {
      pcVar9 = "NOHATCHBACK";
      iVar10 = -1;
      uVar12 = 0x4e;
      do {
        iVar10 = iVar10 * 0x21 + uVar12;
        pbVar2 = (byte *)(pcVar9 + 1);
        uVar12 = (uint)*pbVar2;
        pcVar9 = pcVar9 + 1;
      } while (*pbVar2 != 0);
      if ((*(int *)(uVar11 + 0xc) == iVar10) && (cVar6 = FUN_005a3570(&DAT_0075f344), cVar6 != '\0')
         ) {
        return 1;
      }
    }
    iVar10 = 0;
    if (iVar7 != 0x23) {
      if (pcVar3 == (char *)0x0) {
        iVar10 = 0;
      }
      else {
        pcVar9 = pcVar3 + 0x20;
        iVar10 = -1;
        bVar4 = pcVar3[0x20];
        while (bVar4 != 0) {
          iVar10 = iVar10 * 0x21 + (uint)bVar4;
          pbVar2 = (byte *)(pcVar9 + 1);
          pcVar9 = pcVar9 + 1;
          bVar4 = *pbVar2;
        }
      }
    }
    uVar11 = FUN_0057ce10(iVar10,0xb,0,uVar11,0xffffffff);
  } while( true );
}

