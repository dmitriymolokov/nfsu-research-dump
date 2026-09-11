/* Decompiled from Speed.exe @ 004d1f30 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d1f30(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  undefined4 uVar8;
  int extraout_EDX_04;
  int iVar9;
  int local_28;
  int local_24;
  byte local_20;
  byte local_1f [31];
  
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  FUN_004f6850(iVar3);
  local_28 = 1;
  local_24 = 6;
  do {
    FUN_004f68c0(0x20,"OptionName_%d",local_28);
    iVar3 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar3 = iVar3 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_004d202f;
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar4 != 0) && (iVar4 = FUN_00424db0(), iVar4 != 0)) goto LAB_004d201e;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
LAB_004d202f:
        if ((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(iVar3), iVar5 == 0)) goto LAB_004d2077;
      }
      else {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar5 + 0xdc);
        if (iVar4 == 0) {
          FUN_004ee660();
          iVar4 = FUN_004fd1e0(iVar5 + 0xec);
          if (iVar4 == 0) goto LAB_004d202f;
        }
LAB_004d201e:
        if ((iVar4 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_004d202f;
      }
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
      if (*(int *)(iVar5 + 0x18) == 5) {
        uVar8 = *(undefined4 *)(iVar5 + 0x60);
        iVar3 = *(int *)(iVar5 + 0x5c);
        if (0 < iVar3) {
          do {
            FUN_004f6970(uVar8);
            uVar8 = *(undefined4 *)(extraout_EDX + 4);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
LAB_004d2077:
    iVar3 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar3 = iVar3 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (((DAT_0073578c != 0) && (iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0)) &&
       (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
      iVar4 = *(int *)(iVar5 + 0x88);
      iVar9 = 0;
      if (iVar4 != 0) {
        piVar7 = *(int **)(iVar5 + 0x84);
        do {
          if (*(int *)(*piVar7 + 0x10) == iVar3) {
            iVar9 = *piVar7;
          }
          piVar7 = piVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (iVar9 != 0) {
          *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) & 0xfbffffff;
        }
      }
    }
    FUN_004f68c0(0x20,"OptionNametext_%d",local_28);
    iVar3 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar3 = iVar3 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_004d21ad;
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar4 != 0) && (iVar4 = FUN_00424db0(), iVar4 != 0)) goto LAB_004d219c;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
LAB_004d21ad:
        if ((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(iVar3), iVar5 == 0)) goto LAB_004d21f5;
      }
      else {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar5 + 0xdc);
        if (iVar4 == 0) {
          FUN_004ee660();
          iVar4 = FUN_004fd1e0(iVar5 + 0xec);
          if (iVar4 == 0) goto LAB_004d21ad;
        }
LAB_004d219c:
        if ((iVar4 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_004d21ad;
      }
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
      if (*(int *)(iVar5 + 0x18) == 5) {
        uVar8 = *(undefined4 *)(iVar5 + 0x60);
        iVar3 = *(int *)(iVar5 + 0x5c);
        if (0 < iVar3) {
          do {
            FUN_004f6970(uVar8);
            uVar8 = *(undefined4 *)(extraout_EDX_00 + 4);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
LAB_004d21f5:
    local_28 = local_28 + 1;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    FUN_004f68c0(0x20,"option_buttonR_%02d",iVar3);
    iVar5 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar5 = iVar5 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_004d22da;
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if ((iVar4 != 0) && (iVar4 = FUN_00424db0(), iVar4 != 0)) goto LAB_004d22c3;
    if (DAT_0073578c != 0) {
      iVar9 = *(int *)(DAT_0073578c + 8);
      if (iVar9 == 0) {
LAB_004d22da:
        if (DAT_0073578c == 0) goto LAB_004d2324;
        iVar4 = FUN_004ef050(iVar5);
      }
      else {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar9 + 0xdc);
        if (iVar4 == 0) {
          FUN_004ee660();
          iVar4 = FUN_004fd1e0(iVar9 + 0xec);
          if (iVar4 == 0) goto LAB_004d22da;
        }
LAB_004d22c3:
        if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar4 == 0)) goto LAB_004d22da;
      }
      if ((iVar4 != 0) &&
         (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar4 + 0x18) == 5)) {
        uVar8 = *(undefined4 *)(iVar4 + 0x60);
        iVar5 = *(int *)(iVar4 + 0x5c);
        if (0 < iVar5) {
          do {
            FUN_004f6970(uVar8);
            uVar8 = *(undefined4 *)(extraout_EDX_01 + 4);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
    }
LAB_004d2324:
    FUN_004f68c0(0x20,"option_buttonL_%02d",iVar3);
    iVar5 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar5 = iVar5 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_004d23e9;
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if ((iVar4 != 0) && (iVar4 = FUN_00424db0(), iVar4 != 0)) goto LAB_004d23d3;
    if (DAT_0073578c != 0) {
      iVar9 = *(int *)(DAT_0073578c + 8);
      if (iVar9 == 0) {
LAB_004d23e9:
        if ((DAT_0073578c == 0) || (iVar4 = FUN_004ef050(iVar5), iVar4 == 0)) goto LAB_004d2436;
      }
      else {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar9 + 0xdc);
        if (iVar4 == 0) {
          FUN_004ee660();
          iVar4 = FUN_004fd1e0(iVar9 + 0xec);
          if (iVar4 == 0) goto LAB_004d23e9;
        }
LAB_004d23d3:
        if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar4 == 0)) goto LAB_004d23e9;
      }
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000;
      if (*(int *)(iVar4 + 0x18) == 5) {
        uVar8 = *(undefined4 *)(iVar4 + 0x60);
        iVar5 = *(int *)(iVar4 + 0x5c);
        if (0 < iVar5) {
          do {
            FUN_004f6970(uVar8);
            uVar8 = *(undefined4 *)(extraout_EDX_02 + 4);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
    }
LAB_004d2436:
    FUN_004f68c0(0x20,"minus_%02d",iVar3);
    iVar5 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar5 = iVar5 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (((((*(int *)(param_1 + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
         (iVar4 = FUN_004ffb70(), iVar4 != 0)) ||
        ((DAT_0073578c != 0 && (iVar4 = FUN_004ef050(iVar5), iVar4 != 0)))) &&
       (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar4 + 0x18) == 5)) {
      uVar8 = *(undefined4 *)(iVar4 + 0x60);
      iVar5 = *(int *)(iVar4 + 0x5c);
      if (0 < iVar5) {
        do {
          FUN_004f6970(uVar8);
          uVar8 = *(undefined4 *)(extraout_EDX_03 + 4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    FUN_004f68c0(0x20,"plus_%02d",iVar3);
    iVar5 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar5 = iVar5 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (((((*(int *)(param_1 + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
         (iVar4 = FUN_004ffb70(), iVar4 != 0)) ||
        ((DAT_0073578c != 0 && (iVar4 = FUN_004ef050(iVar5), iVar4 != 0)))) &&
       (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar4 + 0x18) == 5)) {
      uVar8 = *(undefined4 *)(iVar4 + 0x60);
      iVar5 = *(int *)(iVar4 + 0x5c);
      if (0 < iVar5) {
        do {
          FUN_004f6970(uVar8);
          uVar8 = *(undefined4 *)(extraout_EDX_04 + 4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    if (5 < iVar3) {
      (**(code **)(*(int *)(param_1 + 0x15c) + 0xc))(1);
      (**(code **)(*(int *)(param_1 + 0x198) + 0xc))(1);
      (**(code **)(*(int *)(param_1 + 0x1d4) + 0xc))(1);
      (**(code **)(*(int *)(param_1 + 0x210) + 0xc))(1);
      (**(code **)(*(int *)(param_1 + 0x24c) + 0xc))(1);
      (**(code **)(*(int *)(param_1 + 0x288) + 0xc))(1);
      *(undefined4 *)(param_1 + 0x378) = 1;
      *(undefined1 **)(param_1 + 0x40) = &LAB_004cf810;
      FUN_004cf570();
      *(undefined4 *)(param_1 + 0x37c) = 2;
      *(undefined1 **)(param_1 + 0x44) = &LAB_004cf8e0;
      FUN_004cf5e0();
      *(undefined4 *)(param_1 + 0x380) = 3;
      *(undefined1 **)(param_1 + 0x48) = &LAB_004cf9c0;
      FUN_004cf650();
      *(undefined4 *)(param_1 + 900) = 4;
      *(undefined1 **)(param_1 + 0x4c) = &LAB_004cfa90;
      FUN_004cf6c0();
      *(undefined4 *)(param_1 + 0x388) = 5;
      *(undefined1 **)(param_1 + 0x50) = &LAB_004cfb60;
      FUN_004cf730();
      *(undefined4 *)(param_1 + 0x38c) = 6;
      *(undefined1 **)(param_1 + 0x54) = &LAB_004cfc30;
      FUN_004cf7a0();
      FUN_00414a10();
      FUN_00414a10();
      FUN_00414a10();
      FUN_00414a10();
      return;
    }
  } while( true );
}

