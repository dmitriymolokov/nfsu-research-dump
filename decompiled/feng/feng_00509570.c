/* Decompiled from Speed.exe @ 00509570 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00509570(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int local_84;
  int local_80;
  int local_44 [9];
  byte local_20;
  byte local_1f [31];
  
  iVar2 = *(int *)(param_1 + 0x40);
  local_44[0] = 2;
  local_44[1] = 6;
  local_44[2] = 7;
  local_44[3] = 5;
  local_44[4] = 3;
  local_44[5] = 8;
  local_44[6] = 0;
  local_44[7] = 1;
  local_44[8] = 4;
  local_80 = 0;
  do {
    local_84 = 0;
    do {
      iVar6 = local_84 + 1;
      FUN_004f68c0(0x20,"Upgrade_%d_%d",local_80,iVar6);
      iVar12 = -1;
      pbVar9 = &local_20;
      bVar4 = local_20;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        iVar12 = iVar12 * 0x21 + (uint)bVar4;
        pbVar1 = pbVar9 + 1;
        pbVar9 = pbVar9 + 1;
        bVar4 = *pbVar1;
      }
      iVar13 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_005096b8:
        if (iVar13 == 0) {
LAB_005096cb:
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_004ef050(iVar12);
        }
      }
      else {
        iVar7 = FUN_004f3f90(&DAT_00746104);
        iVar13 = DAT_0073578c;
        if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
          if (DAT_0073578c != 0) {
            iVar8 = *(int *)(DAT_0073578c + 8);
            if ((iVar8 == 0) ||
               ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
                (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_005096b8;
            goto LAB_0050969d;
          }
          goto LAB_005096cb;
        }
LAB_0050969d:
        if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar13 = DAT_0073578c, iVar7 == 0))
        goto LAB_005096b8;
      }
      iVar12 = *(int *)(iVar2 + 8 + local_44[local_84] * 4);
      iVar13 = *(int *)(iVar2 + 0x34 + local_44[local_84] * 4);
      iVar8 = FUN_005a0350();
      if (((iVar8 == 8) || (iVar8 == 5)) || (iVar8 == -1)) {
LAB_00509733:
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0x18) < 0x100)) {
          cVar5 = FUN_004feb50();
          if (cVar5 == '\0') {
            *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
          }
LAB_00509774:
          FUN_004ff2f0(iVar7,0,0);
        }
      }
      else {
        if ((local_80 != 0) && (DAT_00735ec1 == '\0')) {
          if ((-1 < iVar8) && (iVar8 < 0x19)) {
            iVar10 = 0;
            do {
              if (*(int *)(&DAT_0075f348 + iVar10 * 4 + iVar8 * 0x90) == local_80)
              goto LAB_00509951;
              iVar10 = iVar10 + 1;
            } while (iVar10 < 0x24);
          }
          goto LAB_00509733;
        }
LAB_00509951:
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0x18) < 0x100)) {
          cVar5 = FUN_004feb50();
          if (cVar5 == '\0') {
            *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
          }
          goto LAB_00509774;
        }
      }
      if ((((local_80 == iVar12) || ((local_80 == 4 && (iVar13 != 0)))) && (iVar7 != 0)) &&
         (*(int *)(iVar7 + 0x18) < 0x100)) {
        piVar3 = *(int **)(iVar7 + 0x2c);
        if (((((0x8b < piVar3[2]) || (piVar3[2] < 0x89)) || (0x70 < piVar3[1])) ||
            ((piVar3[1] < 0x6e || (3 < *piVar3)))) ||
           ((*piVar3 < 1 || ((0x100 < piVar3[3] || (piVar3[3] < 0xfe)))))) {
          *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
        }
        FUN_004ff2f0(iVar7,0,0);
      }
      if (DAT_006ee6f0 == 2) {
        if (local_80 != 0) goto LAB_00509ab6;
        pcVar11 = "Upgrade_Level_Stock_F";
        iVar12 = -1;
        bVar4 = 0x55;
        do {
          if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
            bVar4 = bVar4 - 0x20;
          }
          iVar12 = iVar12 * 0x21 + (uint)bVar4;
          bVar4 = pcVar11[1];
          pcVar11 = pcVar11 + 1;
        } while (bVar4 != 0);
        iVar13 = -1;
        pbVar9 = &local_20;
        bVar4 = local_20;
        while (bVar4 != 0) {
          if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
            bVar4 = bVar4 - 0x20;
          }
          pbVar1 = pbVar9 + 1;
          iVar13 = iVar13 * 0x21 + (uint)bVar4;
          pbVar9 = pbVar9 + 1;
          bVar4 = *pbVar1;
        }
        if (*(int *)(param_1 + 0xc) == 0) goto LAB_00509a81;
        iVar7 = FUN_004f3f90(&DAT_00746104);
        if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x18), iVar7 != 0)) goto LAB_00509a70;
        if (DAT_0073578c == 0) goto LAB_00509ab6;
        iVar8 = *(int *)(DAT_0073578c + 8);
        if (iVar8 == 0) {
LAB_00509a81:
          if ((DAT_0073578c == 0) || (iVar7 = FUN_004ef050(iVar13), iVar7 == 0)) goto LAB_00509ab6;
        }
        else {
          FUN_004ee660();
          iVar7 = FUN_004fd1e0(iVar8 + 0xdc);
          if (iVar7 == 0) {
            FUN_004ee660();
            iVar7 = FUN_004fd1e0(iVar8 + 0xec);
            if (iVar7 == 0) goto LAB_00509a81;
          }
LAB_00509a70:
          if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar7 == 0)) goto LAB_00509a81;
        }
        if ((*(int *)(iVar7 + 0x18) != 1) || (*(int *)(iVar7 + 0x24) == iVar12)) goto LAB_00509ab6;
        *(int *)(iVar7 + 0x24) = iVar12;
LAB_00509aaf:
        *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
      }
      else if ((DAT_006ee6f0 == 4) && (local_80 == 4)) {
        pcVar11 = "Upgrade_Level_Unique_E";
        iVar12 = -1;
        bVar4 = 0x55;
        do {
          if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
            bVar4 = bVar4 - 0x20;
          }
          iVar12 = iVar12 * 0x21 + (uint)bVar4;
          bVar4 = pcVar11[1];
          pcVar11 = pcVar11 + 1;
        } while (bVar4 != 0);
        iVar13 = -1;
        pbVar9 = &local_20;
        bVar4 = local_20;
        while (bVar4 != 0) {
          if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
            bVar4 = bVar4 - 0x20;
          }
          pbVar1 = pbVar9 + 1;
          iVar13 = iVar13 * 0x21 + (uint)bVar4;
          pbVar9 = pbVar9 + 1;
          bVar4 = *pbVar1;
        }
        if (*(int *)(param_1 + 0xc) == 0) goto LAB_00509912;
        iVar7 = FUN_004f3f90(&DAT_00746104);
        if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x18), iVar7 != 0)) goto LAB_00509901;
        if (DAT_0073578c == 0) goto LAB_00509ab6;
        iVar8 = *(int *)(DAT_0073578c + 8);
        if (iVar8 == 0) {
LAB_00509912:
          if ((DAT_0073578c == 0) || (iVar7 = FUN_004ef050(iVar13), iVar7 == 0)) goto LAB_00509ab6;
        }
        else {
          FUN_004ee660();
          iVar7 = FUN_004fd1e0(iVar8 + 0xdc);
          if (iVar7 == 0) {
            FUN_004ee660();
            iVar7 = FUN_004fd1e0(iVar8 + 0xec);
            if (iVar7 == 0) goto LAB_00509912;
          }
LAB_00509901:
          if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar7 == 0)) goto LAB_00509912;
        }
        if ((*(int *)(iVar7 + 0x18) == 1) && (*(int *)(iVar7 + 0x24) != iVar12)) {
          *(int *)(iVar7 + 0x24) = iVar12;
          goto LAB_00509aaf;
        }
      }
LAB_00509ab6:
      local_84 = iVar6;
    } while (iVar6 < 9);
    local_80 = local_80 + 1;
    if (4 < local_80) {
      return;
    }
  } while( true );
}

