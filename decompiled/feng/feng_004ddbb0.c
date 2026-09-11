/* Decompiled from Speed.exe @ 004ddbb0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ddbb0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
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
  FUN_004f6910(iVar3);
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x8cb1da82);
    }
  }
  FUN_004f6910(iVar3);
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x530464ea);
    }
  }
  FUN_004f6910(iVar3);
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    FUN_004f68c0(0x20,"CButton_%d",iVar3);
    iVar8 = -1;
    pbVar7 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    iVar6 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ddd58:
      iVar4 = 0;
      if (iVar6 == 0) {
LAB_004ddd6f:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_004ef050(iVar8);
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
              (iVar4 = FUN_004fd1e0(iVar5 + 0xec), iVar4 == 0)))) goto LAB_004ddd58;
          goto LAB_004ddd33;
        }
        goto LAB_004ddd6f;
      }
LAB_004ddd33:
      if ((iVar4 == 0) ||
         (iVar5 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar6 = DAT_0073578c, iVar5 == 0))
      goto LAB_004ddd58;
    }
    FUN_004f6910(iVar5);
  } while (iVar3 < 0xb);
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_004dddf6:
    iVar3 = 0;
    if (iVar4 == 0) {
LAB_004dde11:
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_004ef050(0xf274b80);
      iVar3 = DAT_0073578c;
    }
  }
  else {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    iVar4 = DAT_0073578c;
    if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
      iVar3 = DAT_0073578c;
      if (DAT_0073578c != 0) {
        iVar8 = *(int *)(DAT_0073578c + 8);
        if ((iVar8 == 0) ||
           ((iVar3 = FUN_004fd1e0(iVar8 + 0xdc), iVar3 == 0 &&
            (iVar3 = FUN_004fd1e0(iVar8 + 0xec), iVar3 == 0)))) goto LAB_004dddf6;
        goto LAB_004ddddc;
      }
      goto LAB_004dde11;
    }
LAB_004ddddc:
    if ((iVar3 == 0) ||
       (iVar8 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar3 = DAT_0073578c, iVar8 == 0))
    goto LAB_004dddf6;
  }
  FUN_004f6910(iVar8);
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_004dde8b:
    iVar8 = 0;
    if (iVar3 == 0) {
LAB_004ddea6:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004ef050(0xf274b81);
      iVar8 = DAT_0073578c;
    }
  }
  else {
    iVar8 = FUN_004f3f90(&DAT_00746104);
    iVar3 = DAT_0073578c;
    if ((iVar8 == 0) || (iVar8 = *(int *)(iVar8 + 0x18), iVar8 == 0)) {
      iVar8 = DAT_0073578c;
      if (DAT_0073578c != 0) {
        iVar6 = *(int *)(DAT_0073578c + 8);
        if ((iVar6 == 0) ||
           ((iVar8 = FUN_004fd1e0(iVar6 + 0xdc), iVar8 == 0 &&
            (iVar8 = FUN_004fd1e0(iVar6 + 0xec), iVar8 == 0)))) goto LAB_004dde8b;
        goto LAB_004dde71;
      }
      goto LAB_004ddea6;
    }
LAB_004dde71:
    if ((iVar8 == 0) ||
       (iVar6 = FUN_004ffb70(), iVar3 = DAT_0073578c, iVar8 = DAT_0073578c, iVar6 == 0))
    goto LAB_004dde8b;
  }
  FUN_004f6910(iVar6);
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ddf20:
    if (iVar8 != 0) {
      iVar3 = FUN_004ef050(0xbe813131);
      goto LAB_004ddf37;
    }
  }
  else {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    iVar8 = DAT_0073578c;
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
LAB_004ddf06:
      if ((iVar3 != 0) && (iVar3 = FUN_004ffb70(), iVar8 = DAT_0073578c, iVar3 != 0))
      goto LAB_004ddf37;
      goto LAB_004ddf20;
    }
    if (DAT_0073578c != 0) {
      iVar6 = *(int *)(DAT_0073578c + 8);
      if ((iVar6 == 0) ||
         ((iVar3 = FUN_004fd1e0(iVar6 + 0xdc), iVar3 == 0 &&
          (iVar3 = FUN_004fd1e0(iVar6 + 0xec), iVar3 == 0)))) goto LAB_004ddf20;
      goto LAB_004ddf06;
    }
  }
  iVar3 = 0;
LAB_004ddf37:
  FUN_004f6910(iVar3);
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

