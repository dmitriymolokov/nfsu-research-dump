/* Decompiled from Speed.exe @ 0057d340 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0057d340(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar4 = param_1;
  local_10 = 0;
  do {
    piVar14 = DAT_0073ad40;
    if ((((local_10 < 0x1f) || (0x22 < local_10)) && (local_10 != 6)) && (local_10 != 0xc)) {
      if (local_10 == 0x10) {
        pcVar8 = "BRAKES";
        iVar13 = -1;
        uVar6 = 0x42;
        do {
          iVar13 = iVar13 * 0x21 + uVar6;
          pbVar11 = (byte *)(pcVar8 + 1);
          uVar6 = (uint)*pbVar11;
          pcVar8 = pcVar8 + 1;
        } while (*pbVar11 != 0);
        piVar5 = (int *)FUN_0040a880();
        if (piVar14 != piVar5) {
          while( true ) {
            uVar6 = piVar14[3];
            uVar12 = piVar14[4] * 0x30 + uVar6;
            if ((iVar13 != 0) && (uVar6 = FUN_0053e400(iVar13,uVar6,4), uVar6 == 0)) break;
            for (; uVar6 < uVar12; uVar6 = uVar6 + 0x30) {
              if ((iVar13 != 0) && (*(int *)(uVar6 + 4) != iVar13)) goto LAB_0057d415;
              if (*(char *)(uVar6 + 0x10) == '\x10') goto LAB_0057d417;
            }
            piVar14 = (int *)*piVar14;
            if (piVar14 == piVar5) break;
          }
        }
LAB_0057d415:
        uVar6 = 0;
LAB_0057d417:
        bVar3 = false;
        while ((uVar6 != 0 && (!bVar3))) {
          if (*(char *)(uVar6 + 0x11) == '\0') {
            bVar3 = true;
          }
          else {
            pcVar8 = "BRAKES";
            iVar13 = -1;
            uVar12 = 0x42;
            do {
              iVar13 = iVar13 * 0x21 + uVar12;
              pbVar11 = (byte *)(pcVar8 + 1);
              uVar12 = (uint)*pbVar11;
              pcVar8 = pcVar8 + 1;
            } while (*pbVar11 != 0);
            uVar6 = FUN_0057ce10(iVar13,0x10,0,uVar6,0xffffffff);
          }
        }
        param_1[0x123] = uVar6;
        *(char *)(param_1 + 399) = (char)param_1[399] + '\x01';
        FUN_0057ea80(param_1);
      }
      else {
        FUN_0057d280(param_1,local_10);
      }
    }
    local_10 = local_10 + 1;
  } while (local_10 < 0x78);
  uVar7 = FUN_004f42f0(PTR_s__s_DECAL_FRONT_WINDOW_WIDE_MEDIU_006f88ac,
                       *param_1 * 0xc90 + DAT_00734588);
  iVar10 = DAT_00734588;
  iVar13 = *param_1;
  iVar15 = 0;
  if (iVar13 == 0x23) {
LAB_0057d4f0:
    param_1 = (int *)FUN_0057ce10(iVar15,0x14,uVar7,0,0xffffffff);
  }
  else {
    iVar15 = iVar13 * 0xc90 + DAT_00734588;
    if (iVar15 != 0) {
      pbVar11 = (byte *)(iVar15 + 0x20);
      iVar15 = -1;
      bVar2 = *pbVar11;
      while (bVar2 != 0) {
        iVar15 = iVar15 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar2 = *pbVar1;
      }
      goto LAB_0057d4f0;
    }
    param_1 = (int *)0x0;
  }
  uVar7 = FUN_004f42f0(PTR_s__s_DECAL_REAR_WINDOW_WIDE_MEDIUM_006f88b0,iVar13 * 0xc90 + iVar10);
  iVar10 = DAT_00734588;
  iVar13 = *piVar4;
  iVar15 = 0;
  if (iVar13 == 0x23) {
LAB_0057d560:
    local_10 = FUN_0057ce10(iVar15,0x15,uVar7,0,0xffffffff);
  }
  else {
    iVar15 = iVar13 * 0xc90 + DAT_00734588;
    if (iVar15 != 0) {
      pbVar11 = (byte *)(iVar15 + 0x20);
      iVar15 = -1;
      bVar2 = *pbVar11;
      while (bVar2 != 0) {
        iVar15 = iVar15 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar2 = *pbVar1;
      }
      goto LAB_0057d560;
    }
    local_10 = 0;
  }
  uVar7 = FUN_004f42f0(PTR_s__s_DECAL_LEFT_DOOR_RECT_MEDIUM_006f88b4,iVar13 * 0xc90 + iVar10);
  iVar10 = DAT_00734588;
  iVar13 = *piVar4;
  iVar15 = 0;
  if (iVar13 == 0x23) {
LAB_0057d5d0:
    local_c = FUN_0057ce10(iVar15,0x16,uVar7,0,0xffffffff);
  }
  else {
    iVar15 = iVar13 * 0xc90 + DAT_00734588;
    if (iVar15 != 0) {
      pbVar11 = (byte *)(iVar15 + 0x20);
      iVar15 = -1;
      bVar2 = *pbVar11;
      while (bVar2 != 0) {
        iVar15 = iVar15 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar2 = *pbVar1;
      }
      goto LAB_0057d5d0;
    }
    local_c = 0;
  }
  uVar7 = FUN_004f42f0(PTR_s__s_DECAL_RIGHT_DOOR_RECT_MEDIUM_006f88b8,iVar13 * 0xc90 + iVar10);
  iVar10 = DAT_00734588;
  iVar13 = *piVar4;
  iVar15 = 0;
  if (iVar13 == 0x23) {
LAB_0057d640:
    local_8 = FUN_0057ce10(iVar15,0x17,uVar7,0,0xffffffff);
  }
  else {
    iVar15 = iVar13 * 0xc90 + DAT_00734588;
    if (iVar15 != 0) {
      pbVar11 = (byte *)(iVar15 + 0x20);
      iVar15 = -1;
      bVar2 = *pbVar11;
      while (bVar2 != 0) {
        iVar15 = iVar15 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar2 = *pbVar1;
      }
      goto LAB_0057d640;
    }
    local_8 = 0;
  }
  uVar7 = FUN_004f42f0(PTR_s__s_DECAL_LEFT_QUARTER_RECT_MEDIU_006f88bc,iVar13 * 0xc90 + iVar10);
  iVar10 = DAT_00734588;
  iVar13 = *piVar4;
  iVar15 = 0;
  if (iVar13 == 0x23) {
LAB_0057d6b0:
    local_4 = FUN_0057ce10(iVar15,0x18,uVar7,0,0xffffffff);
  }
  else {
    iVar15 = iVar13 * 0xc90 + DAT_00734588;
    if (iVar15 != 0) {
      pbVar11 = (byte *)(iVar15 + 0x20);
      iVar15 = -1;
      bVar2 = *pbVar11;
      while (bVar2 != 0) {
        iVar15 = iVar15 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar2 = *pbVar1;
      }
      goto LAB_0057d6b0;
    }
    local_4 = 0;
  }
  uVar7 = FUN_004f42f0(PTR_s__s_DECAL_RIGHT_QUARTER_RECT_MEDI_006f88c4,iVar13 * 0xc90 + iVar10);
  iVar10 = DAT_00734588;
  iVar13 = *piVar4;
  iVar15 = 0;
  if (iVar13 == 0x23) {
LAB_0057d715:
    iVar15 = FUN_0057ce10(iVar15,0x19,uVar7,0,0xffffffff);
  }
  else {
    iVar9 = iVar13 * 0xc90 + DAT_00734588;
    if (iVar9 != 0) {
      pbVar11 = (byte *)(iVar9 + 0x20);
      iVar15 = -1;
      bVar2 = *pbVar11;
      while (bVar2 != 0) {
        iVar15 = iVar15 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar2 = *pbVar1;
      }
      goto LAB_0057d715;
    }
  }
  uVar7 = FUN_004f42f0(PTR_s__s_DECAL_HOOD_RECT_MEDIUM_006f88ec,iVar13 * 0xc90 + iVar10);
  iVar13 = 0;
  if (*piVar4 != 0x23) {
    iVar10 = *piVar4 * 0xc90 + DAT_00734588;
    if (iVar10 == 0) goto LAB_0057d78b;
    pbVar11 = (byte *)(iVar10 + 0x20);
    iVar13 = -1;
    bVar2 = *pbVar11;
    while (bVar2 != 0) {
      iVar13 = iVar13 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar11 + 1;
      pbVar11 = pbVar11 + 1;
      bVar2 = *pbVar1;
    }
  }
  iVar13 = FUN_0057ce10(iVar13,0x13,uVar7,0,0xffffffff);
LAB_0057d78b:
  piVar4[0x127] = (int)param_1;
  *(char *)(piVar4 + 400) = (char)piVar4[400] + '\x01';
  FUN_0057ea80(piVar4);
  piVar4[0x128] = local_10;
  *(char *)((int)piVar4 + 0x641) = *(char *)((int)piVar4 + 0x641) + '\x01';
  FUN_0057ea80(piVar4);
  piVar4[0x129] = local_c;
  *(char *)((int)piVar4 + 0x642) = *(char *)((int)piVar4 + 0x642) + '\x01';
  FUN_0057ea80(piVar4);
  piVar4[0x12a] = local_8;
  *(char *)((int)piVar4 + 0x643) = *(char *)((int)piVar4 + 0x643) + '\x01';
  FUN_0057ea80(piVar4);
  piVar4[299] = local_4;
  *(char *)(piVar4 + 0x191) = (char)piVar4[0x191] + '\x01';
  FUN_0057ea80(piVar4);
  piVar4[300] = iVar15;
  *(char *)((int)piVar4 + 0x645) = *(char *)((int)piVar4 + 0x645) + '\x01';
  FUN_0057ea80(piVar4);
  piVar4[0x126] = iVar13;
  *(char *)((int)piVar4 + 0x63f) = *(char *)((int)piVar4 + 0x63f) + '\x01';
  FUN_0057ea80(piVar4);
  return;
}

