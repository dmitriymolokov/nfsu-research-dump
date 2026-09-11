/* Decompiled from Speed.exe @ 0057fb80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0057fb80(int *param_1,int *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int local_14;
  
  iVar5 = *param_2 * 0xc90 + DAT_00734588;
  cVar3 = *(char *)(*param_2 * 0xc90 + DAT_00734588);
  while (cVar3 != '\0') {
    pcVar1 = (char *)(iVar5 + 1);
    iVar5 = iVar5 + 1;
    cVar3 = *pcVar1;
  }
  puVar6 = &DAT_006ba184;
  do {
    pcVar1 = puVar6 + 1;
    puVar6 = puVar6 + 1;
  } while (*pcVar1 != '\0');
  pbVar7 = (byte *)(*param_1 * 0xc90 + DAT_00734588);
  iVar5 = -1;
  bVar4 = *pbVar7;
  pbVar13 = pbVar7;
  while (bVar4 != 0) {
    iVar5 = iVar5 * 0x21 + (uint)bVar4;
    pbVar2 = pbVar13 + 1;
    pbVar13 = pbVar13 + 1;
    bVar4 = *pbVar2;
  }
  local_14 = 0;
  do {
    uVar10 = param_2[local_14 + 0x113];
    uVar18 = 0;
    bVar19 = false;
    if (uVar10 == 0) goto LAB_005800c9;
    switch(local_14) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 0xc:
    case 0x12:
    case 0x23:
    case 0x24:
    case 0x3a:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x59:
    case 0x5a:
    case 0x61:
    case 0x62:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
      goto switchD_0057fc4b_caseD_0;
    case 1:
    case 2:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0xe:
      uVar15 = FUN_0057ce10(iVar5,local_14,0,0,0xffffffff);
      while ((uVar15 != 0 && (!bVar19))) {
        if ((*(char *)(uVar15 + 0x12) == *(char *)(uVar10 + 0x12)) &&
           (*(char *)(uVar15 + 0x11) == *(char *)(uVar10 + 0x11))) {
          bVar19 = true;
          uVar18 = uVar15;
        }
        else {
          uVar15 = FUN_0057ce10(iVar5,local_14,0,uVar15,0xffffffff);
          bVar19 = false;
        }
      }
      break;
    case 0xb:
      iVar8 = *param_1;
      bVar20 = false;
      if (((-1 < iVar8) && (((iVar8 < 2 || (iVar8 == 5)) && (iVar8 = *param_2, iVar8 != 0)))) &&
         ((iVar8 != 1 && (iVar8 != 5)))) {
        bVar20 = true;
      }
      uVar15 = FUN_0057ce10(iVar5,0xb,0,0,0xffffffff);
      while ((uVar15 != 0 && (!bVar19))) {
        if (bVar20) {
          bVar19 = *(char *)(uVar15 + 0x12) == '\x01';
        }
        else {
          bVar19 = *(char *)(uVar15 + 0x12) == *(char *)(uVar10 + 0x12);
        }
        if ((bVar19) && (*(char *)(uVar15 + 0x11) == *(char *)(uVar10 + 0x11))) {
          bVar19 = true;
          uVar18 = uVar15;
        }
        else {
          uVar15 = FUN_0057ce10(iVar5,0xb,0,uVar15,0xffffffff);
          bVar19 = false;
        }
      }
      break;
    case 0xf:
    case 0x11:
      if (*(char *)(uVar10 + 0x11) != '\0') goto switchD_0057fc4b_caseD_1e;
      uVar10 = FUN_0057ce10(iVar5,local_14,0,0,0xffffffff);
      if (uVar10 != 0) {
        uVar18 = uVar10;
      }
      break;
    case 0x10:
      uVar10 = param_1[10];
      iVar8 = FUN_00567c70();
      piVar16 = DAT_0073ad40;
      piVar12 = (int *)FUN_0040a880();
      if (piVar16 != piVar12) {
        while( true ) {
          uVar18 = piVar16[3];
          uVar15 = piVar16[4] * 0x30 + uVar18;
          if ((iVar8 != 0) && (uVar18 = FUN_0053e400(iVar8,uVar18,4), uVar18 == 0)) break;
          for (; uVar18 < uVar15; uVar18 = uVar18 + 0x30) {
            if ((iVar8 != 0) && (*(int *)(uVar18 + 4) != iVar8)) goto LAB_0057fcd0;
            if (*(char *)(uVar18 + 0x10) == '\x10') goto LAB_0057fcd2;
          }
          piVar16 = (int *)*piVar16;
          if (piVar16 == piVar12) break;
        }
      }
LAB_0057fcd0:
      uVar18 = 0;
LAB_0057fcd2:
      for (bVar19 = false; (uVar18 != 0 && (!bVar19)); bVar19 = !bVar19) {
        bVar19 = *(byte *)(uVar18 + 0x11) != uVar10;
        if (bVar19) {
          uVar24 = 0xffffffff;
          uVar23 = 0;
          uVar22 = 0x10;
          uVar9 = FUN_00567c70(0x10,0,uVar18,0xffffffff);
          uVar18 = FUN_0057ce10(uVar9,uVar22,uVar23,uVar18,uVar24);
        }
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
      bVar19 = *(char *)(uVar10 + 0x12) == '\x01';
      bVar20 = *(char *)(uVar10 + 0x12) != '\x02';
      if (param_2[0x119] == 0) {
        bVar21 = false;
      }
      else {
        bVar21 = *(char *)(param_2[0x119] + 0x12) == '\x02';
      }
      switch(local_14) {
      case 0x13:
        puVar6 = PTR_s__s_DECAL_HOOD_RECT_MEDIUM_006f88ec;
        if (bVar19) {
          puVar6 = PTR_s__s_DECAL_HOOD_RECT_SMALL_006f88f0;
        }
        break;
      case 0x14:
        puVar6 = PTR_s__s_DECAL_FRONT_WINDOW_WIDE_MEDIU_006f88ac;
        break;
      case 0x15:
        puVar6 = PTR_s__s_DECAL_REAR_WINDOW_WIDE_MEDIUM_006f88b0;
        break;
      case 0x16:
        puVar6 = PTR_s__s_DECAL_LEFT_DOOR_RECT_MEDIUM_006f88b4;
        break;
      case 0x17:
        puVar6 = PTR_s__s_DECAL_RIGHT_DOOR_RECT_MEDIUM_006f88b8;
        break;
      case 0x18:
        puVar6 = PTR_s__s_DECAL_LEFT_QUARTER_RECT_MEDIU_006f88bc;
        if ((bVar20) && (bVar19)) {
          puVar6 = PTR_s__s_DECAL_LEFT_QUARTER_RECT_SMALL_006f88c0;
        }
        break;
      case 0x19:
        puVar6 = PTR_s__s_DECAL_RIGHT_QUARTER_RECT_MEDI_006f88c4;
        if ((bVar20) && (bVar19)) {
          puVar6 = PTR_s__s_DECAL_RIGHT_QUARTER_RECT_SMAL_006f88c8;
        }
        break;
      case 0x1a:
        if (!bVar20) {
          puVar6 = PTR_s__s_WIDE1_DECAL_LEFT_DOOR_RECT_ME_006f88cc;
          if (bVar21) {
            puVar6 = PTR_s__s_WIDE2_DECAL_LEFT_DOOR_RECT_ME_006f88dc;
          }
          break;
        }
        goto switchD_0057fc4b_default;
      case 0x1b:
        if (!bVar20) {
          puVar6 = PTR_s__s_WIDE1_DECAL_RIGHT_DOOR_RECT_M_006f88d0;
          if (bVar21) {
            puVar6 = PTR_s__s_WIDE2_DECAL_RIGHT_DOOR_RECT_M_006f88e0;
          }
          break;
        }
        goto switchD_0057fc4b_default;
      case 0x1c:
        if (!bVar20) {
          puVar6 = PTR_s__s_WIDE1_DECAL_LEFT_QUARTER_RECT_006f88d4;
          if (bVar21) {
            puVar6 = PTR_s__s_WIDE2_DECAL_LEFT_QUARTER_RECT_006f88e4;
          }
          break;
        }
        goto switchD_0057fc4b_default;
      case 0x1d:
        if (!bVar20) {
          puVar6 = PTR_s__s_WIDE2_DECAL_RIGHT_QUARTER_REC_006f88e8;
          if (!bVar21) {
            puVar6 = PTR_s__s_WIDE1_DECAL_RIGHT_QUARTER_REC_006f88d8;
          }
          break;
        }
      default:
        goto switchD_0057fc4b_default;
      }
      if (puVar6 != (undefined *)0x0) {
        uVar9 = FUN_004f42f0(puVar6,pbVar7);
        uVar10 = FUN_0057ce10(iVar5,local_14,uVar9,0,0xffffffff);
        if (uVar10 != 0) {
          uVar18 = uVar10;
        }
      }
      break;
    case 0x1e:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x4b:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 99:
    case 100:
    case 0x6b:
    case 0x6c:
    case 0x73:
    case 0x74:
switchD_0057fc4b_caseD_1e:
      uVar18 = uVar10;
      break;
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
      if (*(char *)(uVar10 + 0x12) != '\x11') goto switchD_0057fc4b_caseD_1e;
      iVar8 = *(int *)(uVar10 + 8);
      iVar17 = 0;
      iVar11 = FUN_00567ca0();
      if ((((iVar8 == iVar11) || (iVar11 = FUN_00567ca0(), iVar8 == iVar11)) ||
          (iVar11 = FUN_00567ca0(), iVar8 == iVar11)) ||
         ((iVar11 = FUN_00567ca0(), iVar8 == iVar11 || (iVar11 = FUN_00567ca0(), iVar8 == iVar11))))
      {
        iVar17 = FUN_00567ca0();
      }
      piVar16 = DAT_0073ad40;
      piVar12 = (int *)FUN_0040a880();
      for (; uVar10 = uVar18, piVar16 != piVar12; piVar16 = (int *)*piVar16) {
        uVar15 = piVar16[3];
        uVar14 = piVar16[4] * 0x30 + uVar15;
        for (; uVar15 < uVar14; uVar15 = uVar15 + 0x30) {
          if (*(char *)(uVar15 + 0x10) == '\x1f') goto joined_r0x0058006e;
        }
      }
      uVar15 = 0;
joined_r0x0058006e:
      while ((uVar18 = uVar15, uVar18 != 0 && (uVar10 == 0))) {
        if ((*(char *)(uVar18 + 0x12) != '\x11') ||
           (uVar10 = uVar18, uVar15 = uVar18, *(int *)(uVar18 + 8) != iVar17)) {
          uVar15 = FUN_0057ce10(0,0x1f,0,uVar18,0xffffffff);
          uVar10 = 0;
        }
      }
    }
switchD_0057fc4b_default:
    param_1[local_14 + 0x113] = uVar18;
    *(char *)(local_14 + 0x62c + (int)param_1) = *(char *)(local_14 + 0x62c + (int)param_1) + '\x01'
    ;
    FUN_0057ea80(param_1);
switchD_0057fc4b_caseD_0:
LAB_005800c9:
    local_14 = local_14 + 1;
    if (0x77 < local_14) {
      return;
    }
  } while( true );
}

