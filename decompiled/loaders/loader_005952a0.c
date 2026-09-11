/* Decompiled from Speed.exe @ 005952a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005952a0(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if (*param_1 != 0x34026) {
    if (*param_1 != 0x34027) {
      return 0;
    }
    DAT_00734470 = (int)param_1 + 0x17U & 0xfffffff0;
    uVar4 = ((param_1[1] - ((int)param_1 + 0x17U & 0xfffffff0)) + 8 + (int)param_1) / 0x70;
    DAT_00734474 = uVar4;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_00401cd0();
      FUN_0040bd40();
      FUN_00401cd0();
    }
    return 1;
  }
  uVar4 = (param_1[1] - ((int)param_1 + 0x17U & 0xfffffff0)) + 8 + (int)param_1 >> 8;
  puVar6 = (undefined4 *)((int)param_1 + 0x17U & 0xfffffff0);
  puVar3 = DAT_00737778;
  do {
    DAT_00737778 = puVar3;
    if (uVar4 == 0) {
      puVar6 = (undefined4 *)FUN_0040a880();
      do {
        if (puVar3 == puVar6) {
          return 1;
        }
        piVar5 = puVar3 + 0x28;
        iVar7 = 4;
        do {
          puVar9 = DAT_00737778;
          if (*piVar5 != 0) {
            for (; puVar9 != puVar6; puVar9 = (undefined4 *)*puVar9) {
              if (puVar9[0x20] == *piVar5) goto LAB_005953d0;
            }
            puVar9 = (undefined4 *)0x0;
LAB_005953d0:
            piVar5[-4] = (int)puVar9;
          }
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        puVar3 = (undefined4 *)*puVar3;
      } while( true );
    }
    *DAT_0073777c = puVar6;
    puVar3 = puVar6;
    puVar6[1] = DAT_0073777c;
    DAT_0073777c = puVar3;
    *puVar6 = &DAT_00737778;
    iVar7 = 0;
    piVar5 = &DAT_006ef2d4;
    do {
      if (*piVar5 == puVar6[0x35]) goto LAB_00595318;
      piVar5 = piVar5 + 0x25;
      iVar7 = iVar7 + 1;
    } while ((int)piVar5 < 0x6f0398);
    iVar7 = 0;
LAB_00595318:
    puVar6[0x34] = iVar7;
    iVar7 = 0;
    do {
      pbVar8 = (&PTR_DAT_006ef240)[iVar7];
      iVar10 = -1;
      bVar2 = *pbVar8;
      while (bVar2 != 0) {
        iVar10 = iVar10 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar8 + 1;
        pbVar8 = pbVar8 + 1;
        bVar2 = *pbVar1;
      }
      if (iVar10 == puVar6[0x37]) goto LAB_0059535c;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x11);
    iVar7 = 0;
LAB_0059535c:
    puVar6[0x36] = iVar7;
    puVar3 = puVar6 + 0x3e;
    *puVar3 = puVar3;
    puVar6[0x3f] = puVar3;
    puVar3 = puVar6 + 0x3c;
    *puVar3 = puVar3;
    puVar6[0x3d] = puVar3;
    puVar6 = puVar6 + 0x40;
    uVar4 = uVar4 - 1;
    puVar3 = DAT_00737778;
  } while( true );
}

