/* Decompiled from Speed.exe @ 004b70c0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_004b70c0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  int *piVar9;
  int extraout_EDX;
  uint uVar10;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined *puVar11;
  int extraout_EDX_02;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_28;
  byte local_20;
  byte local_1f [31];
  
  iVar3 = 0;
  local_28 = 0;
  do {
    iVar3 = iVar3 + 1;
    FUN_004f68c0(0x20,"Mode_%d",iVar3);
    iVar13 = -1;
    pbVar7 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar13 = iVar13 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    iVar6 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004b7198:
      iVar4 = 0;
      if (iVar6 == 0) {
LAB_004b71af:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_004ef050(iVar13);
        iVar4 = DAT_0073578c;
      }
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      iVar6 = DAT_0073578c;
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
        iVar4 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar5 = *(int *)(DAT_0073578c + 8);
          if ((iVar5 == 0) ||
             ((iVar4 = FUN_004fd1e0(iVar5 + 0xdc), iVar4 == 0 &&
              (iVar4 = FUN_004fd1e0(iVar5 + 0xec), iVar4 == 0)))) goto LAB_004b7198;
          goto LAB_004b7173;
        }
        goto LAB_004b71af;
      }
LAB_004b7173:
      if ((iVar4 == 0) ||
         (iVar5 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar6 = DAT_0073578c, iVar5 == 0))
      goto LAB_004b7198;
    }
    FUN_004f6910(iVar5);
    iVar13 = -1;
    pbVar7 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar7 + 1;
      iVar13 = iVar13 * 0x21 + (uint)bVar2;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    if (((iVar4 != 0) && (iVar6 = FUN_004f3f90(&DAT_00746104), iVar6 != 0)) &&
       (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
      iVar4 = *(int *)(iVar6 + 0x88);
      iVar5 = 0;
      if (iVar4 != 0) {
        piVar9 = *(int **)(iVar6 + 0x84);
        do {
          if (*(int *)(*piVar9 + 0x10) == iVar13) {
            iVar5 = *piVar9;
          }
          piVar9 = piVar9 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (iVar5 != 0) {
          *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x4000000;
        }
      }
    }
    if (7 < iVar3) {
      if (DAT_0075899e != '\0') {
        local_28 = 1;
        FUN_004f68c0(0x20,"Mode_%d",1);
        iVar3 = -1;
        pbVar7 = &local_20;
        bVar2 = local_20;
        while (bVar2 != 0) {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          iVar3 = iVar3 * 0x21 + (uint)bVar2;
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar1;
        }
        if (((((*(int *)(param_1 + 0xc) == 0) || (iVar13 = FUN_004f65d0(), iVar13 == 0)) ||
             (iVar13 = FUN_004ffb70(), iVar13 == 0)) &&
            ((DAT_0073578c == 0 || (iVar13 = FUN_004ef050(iVar3), iVar13 == 0)))) ||
           (*(int *)(iVar13 + 0x18) != 2)) {
          iVar13 = 0;
        }
        if ((iVar13 != 0) &&
           (*(uint *)(iVar13 + 0x1c) = *(uint *)(iVar13 + 0x1c) & 0xfffffffe | 0x400000,
           *(int *)(iVar13 + 0x18) == 5)) {
          iVar3 = *(int *)(iVar13 + 0x5c);
          uVar12 = *(undefined4 *)(iVar13 + 0x60);
          if (0 < iVar3) {
            do {
              FUN_004f6970(uVar12);
              uVar12 = *(undefined4 *)(extraout_EDX + 4);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        iVar3 = -1;
        pbVar7 = &local_20;
        if (local_20 != 0) {
          iVar3 = -1;
          bVar2 = local_20;
          do {
            if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
              bVar2 = bVar2 - 0x20;
            }
            uVar10 = (uint)bVar2;
            bVar2 = pbVar7[1];
            iVar3 = iVar3 * 0x21 + uVar10;
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
        }
        if (((DAT_0073578c != 0) && (iVar13 = FUN_004f3f90(&DAT_00746104), iVar13 != 0)) &&
           (iVar13 = *(int *)(iVar13 + 0x18), iVar13 != 0)) {
          iVar6 = *(int *)(iVar13 + 0x88);
          iVar4 = 0;
          if (iVar6 != 0) {
            piVar9 = *(int **)(iVar13 + 0x84);
            do {
              if (*(int *)(*piVar9 + 0x10) == iVar3) {
                iVar4 = *piVar9;
              }
              piVar9 = piVar9 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            if (iVar4 != 0) {
              *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfbffffff;
            }
          }
        }
        uVar12 = 0xf167c5b0;
        if (DAT_00777b4c == 4) {
          uVar12 = 0x644a0367;
        }
        pcVar8 = "MODE_CIRCUIT";
        iVar3 = -1;
        uVar10 = 0x4d;
        do {
          iVar3 = iVar3 * 0x21 + uVar10;
          pbVar7 = (byte *)(pcVar8 + 1);
          uVar10 = (uint)*pbVar7;
          pcVar8 = pcVar8 + 1;
        } while (*pbVar7 != 0);
        pcVar8 = "QR_circuit";
        bVar2 = 0x51;
        iVar13 = -1;
        do {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          iVar13 = iVar13 * 0x21 + (uint)bVar2;
          bVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 1;
        } while (bVar2 != 0);
        FUN_004b6fe0(param_1,0,iVar13,uVar12,0xd14b7fcd,iVar3);
      }
      if (DAT_007589be != '\0') {
        local_28 = local_28 + 1;
        FUN_004f68c0(0x20,"Mode_%d",local_28);
        iVar3 = -1;
        pbVar7 = &local_20;
        bVar2 = local_20;
        while (bVar2 != 0) {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          pbVar1 = pbVar7 + 1;
          iVar3 = iVar3 * 0x21 + (uint)bVar2;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar1;
        }
        if (((((*(int *)(param_1 + 0xc) == 0) || (iVar13 = FUN_004f65d0(), iVar13 == 0)) ||
             (iVar13 = FUN_004ffb70(), iVar13 == 0)) &&
            ((DAT_0073578c == 0 || (iVar13 = FUN_004ef050(iVar3), iVar13 == 0)))) ||
           (*(int *)(iVar13 + 0x18) != 2)) {
          iVar13 = 0;
        }
        FUN_004f6970(iVar13);
        pbVar7 = &local_20;
        bVar2 = local_20;
        while (bVar2 != 0) {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar1;
        }
        if (extraout_EDX_00 != 0) {
          FUN_004f5f80(extraout_EDX_00,1);
        }
        pcVar8 = "MODE_SPRINT";
        iVar3 = -1;
        uVar10 = 0x4d;
        do {
          pbVar7 = (byte *)(pcVar8 + 1);
          iVar3 = iVar3 * 0x21 + uVar10;
          pcVar8 = pcVar8 + 1;
          uVar10 = (uint)*pbVar7;
        } while (*pbVar7 != 0);
        pcVar8 = "QR_sprint";
        bVar2 = 0x51;
        iVar13 = -1;
        do {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          iVar13 = iVar13 * 0x21 + (uint)bVar2;
          bVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 1;
        } while (bVar2 != 0);
        FUN_004b6fe0(param_1,0,iVar13,0x4467d81d,0x817e429a,iVar3);
      }
      if (DAT_00758aa6 != '\0') {
        local_28 = local_28 + 1;
        FUN_004f68c0(0x20,"Mode_%d",local_28);
        iVar3 = -1;
        pbVar7 = &local_20;
        bVar2 = local_20;
        while (bVar2 != 0) {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          pbVar1 = pbVar7 + 1;
          iVar3 = iVar3 * 0x21 + (uint)bVar2;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar1;
        }
        if (((((*(int *)(param_1 + 0xc) == 0) || (iVar13 = FUN_004f65d0(), iVar13 == 0)) ||
             (iVar13 = FUN_004ffb70(), iVar13 == 0)) &&
            ((DAT_0073578c == 0 || (iVar13 = FUN_004ef050(iVar3), iVar13 == 0)))) ||
           (*(int *)(iVar13 + 0x18) != 2)) {
          iVar13 = 0;
        }
        if ((iVar13 != 0) &&
           (*(uint *)(iVar13 + 0x1c) = *(uint *)(iVar13 + 0x1c) & 0xfffffffe | 0x400000,
           *(int *)(iVar13 + 0x18) == 5)) {
          iVar3 = *(int *)(iVar13 + 0x5c);
          uVar12 = *(undefined4 *)(iVar13 + 0x60);
          if (0 < iVar3) {
            do {
              FUN_004f6970(uVar12);
              uVar12 = *(undefined4 *)(extraout_EDX_01 + 4);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        iVar3 = -1;
        pbVar7 = &local_20;
        bVar2 = local_20;
        while (bVar2 != 0) {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          pbVar1 = pbVar7 + 1;
          iVar3 = iVar3 * 0x21 + (uint)bVar2;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar1;
        }
        if (((DAT_0073578c != 0) && (iVar13 = FUN_004f3f90(&DAT_00746104), iVar13 != 0)) &&
           (iVar13 = *(int *)(iVar13 + 0x18), iVar13 != 0)) {
          iVar6 = *(int *)(iVar13 + 0x88);
          iVar4 = 0;
          if (iVar6 != 0) {
            piVar9 = *(int **)(iVar13 + 0x84);
            do {
              if (*(int *)(*piVar9 + 0x10) == iVar3) {
                iVar4 = *piVar9;
              }
              piVar9 = piVar9 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            if (iVar4 != 0) {
              *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfbffffff;
            }
          }
        }
        pcVar8 = "MODE_RACE_DRAG";
        iVar3 = -1;
        uVar10 = 0x4d;
        do {
          iVar3 = iVar3 * 0x21 + uVar10;
          pbVar7 = (byte *)(pcVar8 + 1);
          uVar10 = (uint)*pbVar7;
          pcVar8 = pcVar8 + 1;
        } while (*pbVar7 != 0);
        puVar11 = &DAT_006c5f18;
        iVar13 = -1;
        bVar2 = 0x51;
        do {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          iVar13 = iVar13 * 0x21 + (uint)bVar2;
          bVar2 = puVar11[1];
          puVar11 = puVar11 + 1;
        } while (bVar2 != 0);
        FUN_004b6fe0(param_1,0,iVar13,0x330aef9b,0x8d9a96d8,iVar3);
      }
      if (DAT_00758ad2 != '\0') {
        local_28 = local_28 + 1;
        FUN_004f68c0(0x20,"Mode_%d",local_28);
        iVar3 = -1;
        pbVar7 = &local_20;
        bVar2 = local_20;
        while (bVar2 != 0) {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          pbVar1 = pbVar7 + 1;
          iVar3 = iVar3 * 0x21 + (uint)bVar2;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar1;
        }
        if (((((*(int *)(param_1 + 0xc) == 0) || (iVar13 = FUN_004f65d0(), iVar13 == 0)) ||
             (iVar13 = FUN_004ffb70(), iVar13 == 0)) &&
            ((DAT_0073578c == 0 || (iVar13 = FUN_004ef050(iVar3), iVar13 == 0)))) ||
           (*(int *)(iVar13 + 0x18) != 2)) {
          iVar13 = 0;
        }
        FUN_004f6970(iVar13);
        pbVar7 = &local_20;
        while (local_20 != 0) {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          local_20 = *pbVar1;
        }
        if (extraout_EDX_02 != 0) {
          FUN_004f5f80(extraout_EDX_02,1);
        }
        pcVar8 = "GENERICPLACEHOLDER";
        iVar3 = -1;
        uVar10 = 0x47;
        do {
          pbVar7 = (byte *)(pcVar8 + 1);
          iVar3 = iVar3 * 0x21 + uVar10;
          pcVar8 = pcVar8 + 1;
          uVar10 = (uint)*pbVar7;
        } while (*pbVar7 != 0);
        pcVar8 = "QR_drift";
        iVar13 = -1;
        bVar2 = 0x51;
        do {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          iVar13 = iVar13 * 0x21 + (uint)bVar2;
          bVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 1;
        } while (bVar2 != 0);
        FUN_004b6fe0(param_1,0,iVar13,0x94690536,0x40ed9413,iVar3);
      }
      if ((DAT_007589de != '\0') && (DAT_00777b4c != 4)) {
        local_28 = local_28 + 1;
        FUN_004f68c0(0x20,"Mode_%d",local_28);
        iVar3 = *(int *)(param_1 + 0xc);
        uVar12 = FUN_004fd230();
        if ((((iVar3 == 0) ||
             ((iVar3 = FUN_004f65d0(), iVar3 == 0 || (iVar3 = FUN_004ffb70(), iVar3 == 0)))) &&
            ((DAT_0073578c == 0 || (iVar3 = FUN_004ef050(uVar12), iVar3 == 0)))) ||
           (*(int *)(iVar3 + 0x18) != 2)) {
          iVar3 = 0;
        }
        iVar13 = DAT_0073578c;
        FUN_004f6970(iVar3);
        if (iVar13 != 0) {
          uVar12 = 1;
          FUN_004fd230(1);
          FUN_004f5f80(iVar13,uVar12);
        }
        pcVar8 = "GENERICPLACEHOLDER";
        iVar3 = -1;
        uVar10 = 0x47;
        do {
          iVar3 = iVar3 * 0x21 + uVar10;
          pbVar7 = (byte *)(pcVar8 + 1);
          uVar10 = (uint)*pbVar7;
          pcVar8 = pcVar8 + 1;
        } while (*pbVar7 != 0);
        uVar15 = 0x7019fb10;
        uVar14 = 0x33039093;
        uVar12 = FUN_004fd230(0x33039093,0x7019fb10,iVar3);
        FUN_004b6fe0(param_1,0,uVar12,uVar14,uVar15,iVar3);
      }
      if ((DAT_007589fe != '\0') && (DAT_00777b4c != 4)) {
        FUN_004f68c0(0x20,"Mode_%d",local_28 + 1);
        iVar3 = *(int *)(param_1 + 0xc);
        uVar12 = FUN_004fd230();
        if ((((iVar3 == 0) ||
             ((iVar3 = FUN_004f65d0(), iVar3 == 0 || (iVar3 = FUN_004ffb70(), iVar3 == 0)))) &&
            ((DAT_0073578c == 0 || (iVar3 = FUN_004ef050(uVar12), iVar3 == 0)))) ||
           (*(int *)(iVar3 + 0x18) != 2)) {
          iVar3 = 0;
        }
        iVar13 = DAT_0073578c;
        FUN_004f6970(iVar3);
        if (iVar13 != 0) {
          uVar12 = 1;
          FUN_004fd230(1);
          FUN_004f5f80(iVar13,uVar12);
        }
        pcVar8 = "GENERICPLACEHOLDER";
        iVar3 = -1;
        uVar10 = 0x47;
        do {
          iVar3 = iVar3 * 0x21 + uVar10;
          pbVar7 = (byte *)(pcVar8 + 1);
          uVar10 = (uint)*pbVar7;
          pcVar8 = pcVar8 + 1;
        } while (*pbVar7 != 0);
        uVar15 = 0xcc4e72b1;
        uVar14 = 0x79c8e073;
        uVar12 = FUN_004fd230(0x79c8e073,0xcc4e72b1,iVar3);
        FUN_004b6fe0(param_1,0,uVar12,uVar14,uVar15,iVar3);
      }
      return;
    }
  } while( true );
}

