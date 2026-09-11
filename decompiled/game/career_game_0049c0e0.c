/* Decompiled from Speed.exe @ 0049c0e0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_0049c0e0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int *local_2c;
  int *local_28;
  int *local_24;
  byte local_20;
  byte local_1f [31];
  
  iVar5 = *(int *)(param_1 + 0xc);
  uVar4 = FUN_004fd230();
  if (((((iVar5 == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
       (iVar5 = FUN_004ffb70(), iVar5 == 0)) &&
      ((DAT_0073578c == 0 || (iVar5 = FUN_004ef050(uVar4), iVar5 == 0)))) ||
     (*(int *)(iVar5 + 0x18) != 2)) {
    iVar5 = 0;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x4c) = iVar5;
  uVar4 = FUN_004fd230();
  if (((((iVar9 == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
       (iVar5 = FUN_004ffb70(), iVar5 == 0)) &&
      ((DAT_0073578c == 0 || (iVar5 = FUN_004ef050(uVar4), iVar5 == 0)))) ||
     (*(int *)(iVar5 + 0x18) != 2)) {
    iVar5 = 0;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x50) = iVar5;
  uVar4 = FUN_004fd230();
  if (((((iVar9 == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
       (iVar5 = FUN_004ffb70(), iVar5 == 0)) &&
      ((DAT_0073578c == 0 || (iVar5 = FUN_004ef050(uVar4), iVar5 == 0)))) ||
     (*(int *)(iVar5 + 0x18) != 2)) {
    iVar5 = 0;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x54) = iVar5;
  uVar4 = FUN_004fd230();
  if (((((iVar9 == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
       (iVar5 = FUN_004ffb70(), iVar5 == 0)) &&
      ((DAT_0073578c == 0 || (iVar5 = FUN_004ef050(uVar4), iVar5 == 0)))) ||
     (*(int *)(iVar5 + 0x18) != 2)) {
    iVar5 = 0;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x120) = iVar5;
  uVar4 = FUN_004fd230();
  if (((((iVar9 == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
       (iVar5 = FUN_004ffb70(), iVar5 == 0)) &&
      ((DAT_0073578c == 0 || (iVar5 = FUN_004ef050(uVar4), iVar5 == 0)))) ||
     (*(int *)(iVar5 + 0x18) != 2)) {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x124) = iVar5;
  local_28 = (int *)(param_1 + 0x80);
  local_2c = (int *)0x1;
  local_24 = (int *)0xa;
  do {
    FUN_004f68c0(0x20,"LapNumber_%d",local_2c);
    iVar5 = -1;
    pbVar8 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar8 + 1;
      iVar5 = iVar5 * 0x21 + (uint)bVar3;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    iVar9 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049c343:
      if ((iVar9 == 0) || (iVar6 = FUN_004ef050(iVar5), iVar6 == 0)) goto LAB_0049c35c;
LAB_0049c356:
      if (*(int *)(iVar6 + 0x18) != 2) goto LAB_0049c35c;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar9 = DAT_0073578c;
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_0049c32c:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar6 == 0))
        goto LAB_0049c343;
        goto LAB_0049c356;
      }
      if (DAT_0073578c != 0) {
        iVar7 = *(int *)(DAT_0073578c + 8);
        if ((iVar7 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_0049c343;
        goto LAB_0049c32c;
      }
LAB_0049c35c:
      iVar6 = 0;
    }
    local_28[-10] = iVar6;
    FUN_004f68c0(0x20,"AllLapTimes_%d",local_2c);
    iVar5 = -1;
    pbVar8 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar8 + 1;
      iVar5 = iVar5 * 0x21 + (uint)bVar3;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    iVar9 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049c416:
      if ((iVar9 == 0) || (iVar6 = FUN_004ef050(iVar5), iVar6 == 0)) goto LAB_0049c42f;
LAB_0049c429:
      if (*(int *)(iVar6 + 0x18) != 2) goto LAB_0049c42f;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar9 = DAT_0073578c;
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_0049c3ff:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar6 == 0))
        goto LAB_0049c416;
        goto LAB_0049c429;
      }
      if (DAT_0073578c != 0) {
        iVar7 = *(int *)(DAT_0073578c + 8);
        if ((iVar7 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_0049c416;
        goto LAB_0049c3ff;
      }
LAB_0049c42f:
      iVar6 = 0;
    }
    *local_28 = iVar6;
    FUN_004f68c0(0x20,"PositionAfterEachLap_%d",local_2c);
    iVar5 = -1;
    pbVar8 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar8 + 1;
      iVar5 = iVar5 * 0x21 + (uint)bVar3;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    iVar9 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049c4e8:
      if ((iVar9 == 0) || (iVar6 = FUN_004ef050(iVar5), iVar6 == 0)) goto LAB_0049c501;
LAB_0049c4fb:
      if (*(int *)(iVar6 + 0x18) != 2) goto LAB_0049c501;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar9 = DAT_0073578c;
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_0049c4d1:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar6 == 0))
        goto LAB_0049c4e8;
        goto LAB_0049c4fb;
      }
      if (DAT_0073578c != 0) {
        iVar7 = *(int *)(DAT_0073578c + 8);
        if ((iVar7 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_0049c4e8;
        goto LAB_0049c4d1;
      }
LAB_0049c501:
      iVar6 = 0;
    }
    local_28[10] = iVar6;
    local_28 = local_28 + 1;
    local_2c = (int *)((int)local_2c + 1);
    local_24 = (int *)((int)local_24 + -1);
  } while (local_24 != (int *)0x0);
  local_2c = (int *)(param_1 + 0xf8);
  local_28 = (int *)0x1;
  local_24 = (int *)0x9;
  do {
    FUN_004f68c0(0x20,"DataName_%d",local_28);
    iVar5 = -1;
    pbVar8 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar5 = iVar5 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    iVar9 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049c5f7:
      if ((iVar9 == 0) || (iVar6 = FUN_004ef050(iVar5), iVar6 == 0)) goto LAB_0049c610;
LAB_0049c60a:
      if (*(int *)(iVar6 + 0x18) != 2) goto LAB_0049c610;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar9 = DAT_0073578c;
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_0049c5e0:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar6 == 0))
        goto LAB_0049c5f7;
        goto LAB_0049c60a;
      }
      if (DAT_0073578c != 0) {
        iVar7 = *(int *)(DAT_0073578c + 8);
        if ((iVar7 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_0049c5f7;
        goto LAB_0049c5e0;
      }
LAB_0049c610:
      iVar6 = 0;
    }
    local_2c[-10] = iVar6;
    FUN_004f68c0(0x20,"Data_%d",local_28);
    iVar5 = -1;
    pbVar8 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar8 + 1;
      iVar5 = iVar5 * 0x21 + (uint)bVar3;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    iVar9 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049c6ca:
      if ((iVar9 == 0) || (iVar6 = FUN_004ef050(iVar5), iVar6 == 0)) goto LAB_0049c6e3;
LAB_0049c6dd:
      if (*(int *)(iVar6 + 0x18) != 2) goto LAB_0049c6e3;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar9 = DAT_0073578c;
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_0049c6b3:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar6 == 0))
        goto LAB_0049c6ca;
        goto LAB_0049c6dd;
      }
      if (DAT_0073578c != 0) {
        iVar7 = *(int *)(DAT_0073578c + 8);
        if ((iVar7 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_0049c6ca;
        goto LAB_0049c6b3;
      }
LAB_0049c6e3:
      iVar6 = 0;
    }
    *local_2c = iVar6;
    local_2c = local_2c + 1;
    local_28 = (int *)((int)local_28 + 1);
    local_24 = (int *)((int)local_24 + -1);
  } while (local_24 != (int *)0x0);
  iVar5 = 0;
  local_24 = (int *)(param_1 + 0x128);
  do {
    iVar5 = iVar5 + 1;
    FUN_004f68c0(0x20,"TextBack_%d",iVar5);
    iVar9 = -1;
    pbVar8 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar9 = iVar9 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    iVar6 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049c7d6:
      if ((iVar6 == 0) || (iVar7 = FUN_004ef050(iVar9), iVar7 == 0)) goto LAB_0049c7ef;
LAB_0049c7e9:
      if (*(int *)(iVar7 + 0x18) != 1) goto LAB_0049c7ef;
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar6 = DAT_0073578c;
      if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x18), iVar7 != 0)) {
LAB_0049c7bf:
        if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar6 = DAT_0073578c, iVar7 == 0))
        goto LAB_0049c7d6;
        goto LAB_0049c7e9;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar7 = FUN_004fd1e0(iVar2 + 0xdc), iVar7 == 0 &&
            (iVar7 = FUN_004fd1e0(iVar2 + 0xec), iVar7 == 0)))) goto LAB_0049c7d6;
        goto LAB_0049c7bf;
      }
LAB_0049c7ef:
      iVar7 = 0;
    }
    *local_24 = iVar7;
    local_24 = local_24 + 1;
    if (4 < iVar5) {
      return;
    }
  } while( true );
}

