/* Decompiled from Speed.exe @ 00498d90 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00498d90(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_64;
  byte local_60;
  byte local_5f [95];
  
  iVar11 = 0;
  iVar4 = DAT_0073578c;
  if (0 < param_3) {
    iVar12 = 1;
    iVar11 = 0;
    do {
      FUN_004f68c0(0x20,"Pos%d",iVar12);
      FUN_004f67f0(&PTR_LAB_006c7968,iVar12);
      local_64 = 0;
      cVar2 = FUN_0043a2e0();
      if (cVar2 == '\0') {
        puVar5 = DAT_0077b198;
        if ((undefined4 **)DAT_0077b198 != &DAT_0077b198) {
          iVar4 = 0;
          do {
            if (iVar4 == iVar11) break;
            puVar5 = (undefined4 *)*puVar5;
            iVar4 = iVar4 + 1;
          } while ((undefined4 **)puVar5 != &DAT_0077b198);
        }
        local_64 = puVar5[6];
        puVar5 = DAT_0077b198;
        for (iVar4 = 0; ((undefined4 **)puVar5 != &DAT_0077b198 && (iVar4 != iVar11));
            iVar4 = iVar4 + 1) {
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        iVar4 = 0;
        if (0 < DAT_007787b0) {
          piVar9 = &DAT_00777cd0;
          do {
            if (*piVar9 == iVar12) {
              puVar5 = &DAT_00777cd0 + iVar4 * 0x57;
              goto LAB_00498e18;
            }
            iVar4 = iVar4 + 1;
            piVar9 = piVar9 + 0x57;
          } while (iVar4 < DAT_007787b0);
        }
        puVar5 = (undefined4 *)0x0;
LAB_00498e18:
        iVar4 = FUN_0043b850(puVar5[1]);
        if (iVar4 != 0) {
          local_64 = iVar4 + 0x19;
          FUN_00439130();
        }
      }
      FUN_004f68c0(0x20,"Name%d",iVar12);
      FUN_004f67f0(&DAT_006cc568,local_64);
      FUN_004f68c0(0x20,"CarModel_%d",iVar12);
      uVar6 = FUN_004c2a50();
      FUN_00416bb0(uVar6);
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + 1;
      iVar4 = DAT_0073578c;
    } while (iVar11 < param_3);
  }
  while (iVar11 < param_2) {
    iVar11 = iVar11 + 1;
    FUN_004f68c0(0x20,"Name%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00498fc8:
      if (iVar12 == 0) {
LAB_00498fd9:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00498fc8;
          goto LAB_00498fb1;
        }
        goto LAB_00498fd9;
      }
LAB_00498fb1:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_00498fc8;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"RacerColor_%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499098:
      if (iVar12 == 0) {
LAB_004990a9:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00499098;
          goto LAB_00499081;
        }
        goto LAB_004990a9;
      }
LAB_00499081:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_00499098;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"CarColor_%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499168:
      if (iVar12 == 0) {
LAB_00499179:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00499168;
          goto LAB_00499151;
        }
        goto LAB_00499179;
      }
LAB_00499151:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_00499168;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Pos%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499238:
      if (iVar12 == 0) {
LAB_00499249:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00499238;
          goto LAB_00499221;
        }
        goto LAB_00499249;
      }
LAB_00499221:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_00499238;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Position_%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499308:
      if (iVar12 == 0) {
LAB_00499319:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00499308;
          goto LAB_004992f1;
        }
        goto LAB_00499319;
      }
LAB_004992f1:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_00499308;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"CarModel_%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004993d8:
      if (iVar12 == 0) {
LAB_004993e9:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_004993d8;
          goto LAB_004993c1;
        }
        goto LAB_004993e9;
      }
LAB_004993c1:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_004993d8;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Rep_%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004994a8:
      if (iVar12 == 0) {
LAB_004994b9:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_004994a8;
          goto LAB_00499491;
        }
        goto LAB_004994b9;
      }
LAB_00499491:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_004994a8;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Lead%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499578:
      if (iVar12 == 0) {
LAB_00499589:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00499578;
          goto LAB_00499561;
        }
        goto LAB_00499589;
      }
LAB_00499561:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_00499578;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Back_%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499648:
      if (iVar12 == 0) {
LAB_00499659:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00499648;
          goto LAB_00499631;
        }
        goto LAB_00499659;
      }
LAB_00499631:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_00499648;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Corner_%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499718:
      if (iVar12 == 0) {
LAB_00499729:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00499718;
          goto LAB_00499701;
        }
        goto LAB_00499729;
      }
LAB_00499701:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_00499718;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Rep_%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004997e8:
      if (iVar12 == 0) {
LAB_004997f9:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_004997e8;
          goto LAB_004997d1;
        }
        goto LAB_004997f9;
      }
LAB_004997d1:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_004997e8;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"PointEarned_%d",iVar11);
    iVar4 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar12 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004998b8:
      if (iVar12 == 0) {
LAB_004998c9:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar12 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_004998b8;
          goto LAB_004998a1;
        }
        goto LAB_004998c9;
      }
LAB_004998a1:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar12 = DAT_0073578c, iVar7 == 0))
      goto LAB_004998b8;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"TotalPoints_%d",iVar11);
    iVar12 = -1;
    pbVar10 = &local_60;
    bVar3 = local_60;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar12 = iVar12 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    iVar7 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499990:
      iVar4 = 0;
      if (iVar7 == 0) {
LAB_004999a7:
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_004ef050(iVar12);
        iVar4 = DAT_0073578c;
      }
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      iVar7 = DAT_0073578c;
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
        iVar4 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar4 = FUN_004fd1e0(iVar8 + 0xdc), iVar4 == 0 &&
              (iVar4 = FUN_004fd1e0(iVar8 + 0xec), iVar4 == 0)))) goto LAB_00499990;
          goto LAB_00499971;
        }
        goto LAB_004999a7;
      }
LAB_00499971:
      if ((iVar4 == 0) ||
         (iVar8 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar7 = DAT_0073578c, iVar8 == 0))
      goto LAB_00499990;
    }
    FUN_004f6910(iVar8);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar11 = FUN_004f3f90(&DAT_00746104);
    iVar4 = DAT_0073578c;
    if ((iVar11 == 0) || (iVar11 = *(int *)(iVar11 + 0x18), iVar11 == 0)) {
      if (DAT_0073578c == 0) {
        return;
      }
      iVar12 = *(int *)(DAT_0073578c + 8);
      if ((iVar12 == 0) ||
         ((iVar11 = FUN_004fd1e0(iVar12 + 0xdc), iVar11 == 0 &&
          (iVar11 = FUN_004fd1e0(iVar12 + 0xec), iVar11 == 0)))) goto LAB_00499a47;
    }
    if ((iVar11 != 0) && (iVar11 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar11 != 0))
    goto LAB_00499a5a;
  }
LAB_00499a47:
  if (iVar4 == 0) {
    return;
  }
  iVar11 = FUN_004ef050(0x6e6c46c);
LAB_00499a5a:
  if ((iVar11 != 0) && (*(int *)(iVar11 + 0x18) == 2)) {
    *(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) | 0x400000;
    puVar5 = DAT_00735710;
    bVar13 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar11 + 0x5c) = 0x70445b0c;
    if (bVar13) {
      (**(code **)*puVar5)(iVar11);
    }
    *(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}

