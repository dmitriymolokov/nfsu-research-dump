/* Decompiled from Speed.exe @ 004d32e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d32e0(int param_1)

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
  int extraout_EDX_04;
  int extraout_EDX_05;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  byte local_20;
  byte local_1f [31];
  
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  FUN_004f6850(iVar3);
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    FUN_004f68c0(0x20,"OptionName_%d",iVar3);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_004d33d2;
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar4 != 0) && (iVar4 = FUN_00424db0(), iVar4 != 0)) goto LAB_004d33c1;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
LAB_004d33d2:
        if ((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(iVar8), iVar5 == 0)) goto LAB_004d341f;
      }
      else {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar5 + 0xdc);
        if (iVar4 == 0) {
          FUN_004ee660();
          iVar4 = FUN_004fd1e0(iVar5 + 0xec);
          if (iVar4 == 0) goto LAB_004d33d2;
        }
LAB_004d33c1:
        if ((iVar4 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_004d33d2;
      }
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
      if (*(int *)(iVar5 + 0x18) == 5) {
        uVar10 = *(undefined4 *)(iVar5 + 0x60);
        iVar8 = *(int *)(iVar5 + 0x5c);
        if (0 < iVar8) {
          do {
            FUN_004f6970(uVar10);
            uVar10 = *(undefined4 *)(extraout_EDX + 4);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
    }
LAB_004d341f:
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
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
          if (*(int *)(*piVar7 + 0x10) == iVar8) {
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
    FUN_004f68c0(0x20,"OptionNametext_%d",iVar3);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_004d355d;
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar4 != 0) && (iVar4 = FUN_00424db0(), iVar4 != 0)) goto LAB_004d354c;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
LAB_004d355d:
        if ((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(iVar8), iVar5 == 0)) goto LAB_004d35a5;
      }
      else {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar5 + 0xdc);
        if (iVar4 == 0) {
          FUN_004ee660();
          iVar4 = FUN_004fd1e0(iVar5 + 0xec);
          if (iVar4 == 0) goto LAB_004d355d;
        }
LAB_004d354c:
        if ((iVar4 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_004d355d;
      }
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
      if (*(int *)(iVar5 + 0x18) == 5) {
        uVar10 = *(undefined4 *)(iVar5 + 0x60);
        iVar8 = *(int *)(iVar5 + 0x5c);
        if (0 < iVar8) {
          do {
            FUN_004f6970(uVar10);
            uVar10 = *(undefined4 *)(extraout_EDX_00 + 4);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
    }
LAB_004d35a5:
    FUN_004f68c0(0x20,"OptionData_%d",iVar3);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (((((*(int *)(param_1 + 0xc) != 0) && (iVar5 = FUN_004f65d0(), iVar5 != 0)) &&
         (iVar5 = FUN_004ffb70(), iVar5 != 0)) ||
        ((DAT_0073578c != 0 && (iVar5 = FUN_004ef050(iVar8), iVar5 != 0)))) &&
       (*(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar5 + 0x18) == 5)) {
      uVar10 = *(undefined4 *)(iVar5 + 0x60);
      iVar8 = *(int *)(iVar5 + 0x5c);
      if (0 < iVar8) {
        do {
          FUN_004f6970(uVar10);
          uVar10 = *(undefined4 *)(extraout_EDX_01 + 4);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  } while (iVar3 < 2);
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    FUN_004f68c0(0x20,"option_buttonR_%02d",iVar3);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_004d371d;
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar4 != 0) && (iVar4 = FUN_00424db0(), iVar4 != 0)) goto LAB_004d370c;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
LAB_004d371d:
        if ((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(iVar8), iVar5 == 0)) goto LAB_004d3765;
      }
      else {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar5 + 0xdc);
        if (iVar4 == 0) {
          FUN_004ee660();
          iVar4 = FUN_004fd1e0(iVar5 + 0xec);
          if (iVar4 == 0) goto LAB_004d371d;
        }
LAB_004d370c:
        if ((iVar4 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_004d371d;
      }
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
      if (*(int *)(iVar5 + 0x18) == 5) {
        uVar10 = *(undefined4 *)(iVar5 + 0x60);
        iVar8 = *(int *)(iVar5 + 0x5c);
        if (0 < iVar8) {
          do {
            FUN_004f6970(uVar10);
            uVar10 = *(undefined4 *)(extraout_EDX_02 + 4);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
    }
LAB_004d3765:
    FUN_004f68c0(0x20,"option_buttonL_%02d",iVar3);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_004d3824;
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = FUN_00424db0(), iVar5 != 0)) goto LAB_004d380e;
    if (DAT_0073578c != 0) {
      iVar4 = *(int *)(DAT_0073578c + 8);
      if (iVar4 == 0) {
LAB_004d3824:
        if ((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(iVar8), iVar5 == 0)) goto LAB_004d3867;
      }
      else {
        FUN_004ee660();
        iVar5 = FUN_004fd1e0(iVar4 + 0xdc);
        if (iVar5 == 0) {
          FUN_004ee660();
          iVar5 = FUN_004fd1e0(iVar4 + 0xec);
          if (iVar5 == 0) goto LAB_004d3824;
        }
LAB_004d380e:
        if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_004d3824;
      }
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
      if (*(int *)(iVar5 + 0x18) == 5) {
        uVar10 = *(undefined4 *)(iVar5 + 0x60);
        iVar8 = *(int *)(iVar5 + 0x5c);
        if (0 < iVar8) {
          do {
            FUN_004f6970(uVar10);
            uVar10 = *(undefined4 *)(extraout_EDX_03 + 4);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
    }
LAB_004d3867:
    FUN_004f68c0(0x20,"LeftArrow_%d",iVar3);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (((((*(int *)(param_1 + 0xc) != 0) && (iVar5 = FUN_004f65d0(), iVar5 != 0)) &&
         (iVar5 = FUN_004ffb70(), iVar5 != 0)) ||
        ((DAT_0073578c != 0 && (iVar5 = FUN_004ef050(iVar8), iVar5 != 0)))) &&
       (*(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar5 + 0x18) == 5)) {
      uVar10 = *(undefined4 *)(iVar5 + 0x60);
      iVar8 = *(int *)(iVar5 + 0x5c);
      if (0 < iVar8) {
        do {
          FUN_004f6970(uVar10);
          uVar10 = *(undefined4 *)(extraout_EDX_04 + 4);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    FUN_004f68c0(0x20,"RightArrow_%d",iVar3);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (((((*(int *)(param_1 + 0xc) != 0) && (iVar5 = FUN_004f65d0(), iVar5 != 0)) &&
         (iVar5 = FUN_004ffb70(), iVar5 != 0)) ||
        ((DAT_0073578c != 0 && (iVar5 = FUN_004ef050(iVar8), iVar5 != 0)))) &&
       (*(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar5 + 0x18) == 5)) {
      uVar10 = *(undefined4 *)(iVar5 + 0x60);
      iVar8 = *(int *)(iVar5 + 0x5c);
      if (0 < iVar8) {
        do {
          FUN_004f6970(uVar10);
          uVar10 = *(undefined4 *)(extraout_EDX_05 + 4);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    if (1 < iVar3) {
      FUN_004f68c0(0x20,"OptionName_%d",3);
      FUN_00414a60();
      iVar3 = DAT_0073578c;
      if (DAT_0073578c != 0) {
        uVar10 = 1;
        FUN_004fd230(1);
        FUN_004f5f80(iVar3,uVar10);
      }
      FUN_004f68c0(0x20,"OptionNametext_%d",3);
      FUN_00414a60();
      FUN_004f68c0(0x20,"OptionName_%d",4);
      FUN_00414a60();
      iVar3 = DAT_0073578c;
      if (DAT_0073578c != 0) {
        uVar10 = 1;
        FUN_004fd230(1);
        FUN_004f5f80(iVar3,uVar10);
      }
      FUN_004f68c0(0x20,"OptionNametext_%d",4);
      FUN_00414a60();
      FUN_004d1600(5,1,0);
      FUN_004d16d0(param_1,0);
      *(undefined4 *)(param_1 + 0x3ec) = 1;
      *(code **)(param_1 + 0x40) = FUN_004d0760;
      FUN_004d04b0();
      *(undefined4 *)(param_1 + 0x3e4) = 2;
      *(code **)(param_1 + 0x44) = FUN_004d06e0;
      FUN_004d0400();
      *(undefined4 *)(param_1 + 0x3f0) = 3;
      *(undefined1 **)(param_1 + 0x48) = &LAB_004d0850;
      FUN_004d0620();
      *(undefined4 *)(param_1 + 0x3f4) = 4;
      *(undefined1 **)(param_1 + 0x4c) = &LAB_004d08b0;
      FUN_004d0680();
      *(undefined4 *)(param_1 + 0x404) = 5;
      *(undefined1 **)(param_1 + 0x50) = &LAB_004d0820;
      FUN_004d0570();
      return;
    }
  } while( true );
}

