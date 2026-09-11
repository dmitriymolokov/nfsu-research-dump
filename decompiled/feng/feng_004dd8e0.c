/* Decompiled from Speed.exe @ 004dd8e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004dd8e0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar8;
  int iVar9;
  byte local_20;
  byte local_1f [31];
  
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x922a39c4);
    }
  }
  FUN_004f6970(iVar3);
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x8cb1da82);
    }
  }
  FUN_004f6970(iVar3);
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
      goto LAB_004dd9c2;
    }
    uVar4 = FUN_004ef050(0x530464ea);
    FUN_004f6970(uVar4);
    iVar3 = 0;
  }
  else {
LAB_004dd9c2:
    FUN_004f6970(iVar3);
    iVar3 = 0;
  }
  do {
    iVar3 = iVar3 + 1;
    FUN_004f68c0(0x20,"CButton_%d",iVar3);
    iVar9 = -1;
    pbVar7 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar9 = iVar9 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    iVar8 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004dda8a:
      iVar5 = 0;
      if ((iVar8 != 0) && (iVar6 = FUN_004ef050(iVar9), iVar5 = DAT_0073578c, iVar6 != 0)) {
LAB_004dda9d:
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffe | 0x400000;
        iVar5 = DAT_0073578c;
        if (*(int *)(iVar6 + 0x18) == 5) {
          uVar4 = *(undefined4 *)(iVar6 + 0x60);
          iVar9 = *(int *)(iVar6 + 0x5c);
          if (0 < iVar9) {
            do {
              FUN_004f6970(uVar4);
              uVar4 = *(undefined4 *)(extraout_EDX + 4);
              iVar9 = iVar9 + -1;
              iVar5 = DAT_0073578c;
            } while (iVar9 != 0);
          }
        }
      }
    }
    else {
      iVar5 = FUN_004f3f90(&DAT_00746104);
      iVar8 = DAT_0073578c;
      if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_004dda73:
        if ((iVar5 == 0) || (iVar6 = FUN_004ffb70(), iVar8 = DAT_0073578c, iVar6 == 0))
        goto LAB_004dda8a;
        goto LAB_004dda9d;
      }
      iVar5 = DAT_0073578c;
      if (DAT_0073578c != 0) {
        iVar6 = *(int *)(DAT_0073578c + 8);
        if ((iVar6 == 0) ||
           ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
            (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004dda8a;
        goto LAB_004dda73;
      }
    }
  } while (iVar3 < 0xb);
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
      if (DAT_0073578c == 0) {
        return;
      }
      iVar9 = *(int *)(DAT_0073578c + 8);
      if ((iVar9 == 0) ||
         ((iVar3 = FUN_004fd1e0(iVar9 + 0xdc), iVar3 == 0 &&
          (iVar3 = FUN_004fd1e0(iVar9 + 0xec), iVar3 == 0)))) goto LAB_004ddb59;
    }
    if ((iVar3 != 0) && (iVar3 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar3 != 0))
    goto LAB_004ddb70;
  }
LAB_004ddb59:
  if (iVar5 == 0) {
    return;
  }
  iVar3 = FUN_004ef050(0xbe813131);
  if (iVar3 == 0) {
    return;
  }
LAB_004ddb70:
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000;
  if (*(int *)(iVar3 + 0x18) == 5) {
    uVar4 = *(undefined4 *)(iVar3 + 0x60);
    iVar3 = *(int *)(iVar3 + 0x5c);
    if (0 < iVar3) {
      do {
        FUN_004f6970(uVar4);
        uVar4 = *(undefined4 *)(extraout_EDX_00 + 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

