/* Decompiled from Speed.exe @ 004d3f30 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d3f30(int param_1)

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
  undefined4 uVar8;
  int extraout_EDX_01;
  int iVar9;
  int iVar10;
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
    iVar9 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_004d4022;
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar4 != 0) && (iVar4 = FUN_00424db0(), iVar4 != 0)) goto LAB_004d4011;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
LAB_004d4022:
        if ((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(iVar9), iVar5 == 0)) goto LAB_004d406f;
      }
      else {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar5 + 0xdc);
        if (iVar4 == 0) {
          FUN_004ee660();
          iVar4 = FUN_004fd1e0(iVar5 + 0xec);
          if (iVar4 == 0) goto LAB_004d4022;
        }
LAB_004d4011:
        if ((iVar4 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_004d4022;
      }
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
      if (*(int *)(iVar5 + 0x18) == 5) {
        uVar8 = *(undefined4 *)(iVar5 + 0x60);
        iVar9 = *(int *)(iVar5 + 0x5c);
        if (0 < iVar9) {
          do {
            FUN_004f6970(uVar8);
            uVar8 = *(undefined4 *)(extraout_EDX + 4);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
    }
LAB_004d406f:
    iVar9 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (((DAT_0073578c != 0) && (iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0)) &&
       (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
      iVar4 = *(int *)(iVar5 + 0x88);
      iVar10 = 0;
      if (iVar4 != 0) {
        piVar7 = *(int **)(iVar5 + 0x84);
        do {
          if (*(int *)(*piVar7 + 0x10) == iVar9) {
            iVar10 = *piVar7;
          }
          piVar7 = piVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (iVar10 != 0) {
          *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xfbffffff;
        }
      }
    }
    FUN_004f68c0(0x20,"OptionNametext_%d",iVar3);
    iVar9 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar9 = iVar9 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_004d41ad;
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar4 != 0) && (iVar4 = FUN_00424db0(), iVar4 != 0)) goto LAB_004d419c;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
LAB_004d41ad:
        if ((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(iVar9), iVar5 == 0)) goto LAB_004d41f5;
      }
      else {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar5 + 0xdc);
        if (iVar4 == 0) {
          FUN_004ee660();
          iVar4 = FUN_004fd1e0(iVar5 + 0xec);
          if (iVar4 == 0) goto LAB_004d41ad;
        }
LAB_004d419c:
        if ((iVar4 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_004d41ad;
      }
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
      if (*(int *)(iVar5 + 0x18) == 5) {
        uVar8 = *(undefined4 *)(iVar5 + 0x60);
        iVar9 = *(int *)(iVar5 + 0x5c);
        if (0 < iVar9) {
          do {
            FUN_004f6970(uVar8);
            uVar8 = *(undefined4 *)(extraout_EDX_00 + 4);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
    }
LAB_004d41f5:
    FUN_004f68c0(0x20,"SelectButton_%d",iVar3);
    iVar9 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar9 = iVar9 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (((((*(int *)(param_1 + 0xc) != 0) && (iVar5 = FUN_004f65d0(), iVar5 != 0)) &&
         (iVar5 = FUN_004ffb70(), iVar5 != 0)) ||
        ((DAT_0073578c != 0 && (iVar5 = FUN_004ef050(iVar9), iVar5 != 0)))) &&
       (*(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar5 + 0x18) == 5)) {
      uVar8 = *(undefined4 *)(iVar5 + 0x60);
      iVar9 = *(int *)(iVar5 + 0x5c);
      if (0 < iVar9) {
        do {
          FUN_004f6970(uVar8);
          uVar8 = *(undefined4 *)(extraout_EDX_01 + 4);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    if (0 < iVar3) {
      *(undefined4 *)(param_1 + 0x420) = 1;
      *(undefined1 **)(param_1 + 0x40) = &LAB_004d0b20;
      FUN_004d0ab0();
      FUN_004b2480();
      return;
    }
  } while( true );
}

