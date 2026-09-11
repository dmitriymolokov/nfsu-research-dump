/* Decompiled from Speed.exe @ 004ec990 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ec990(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  bool bVar10;
  int local_2c;
  int *local_28;
  int local_24;
  byte local_20;
  byte local_1f [31];
  
  *(undefined1 **)(param_1 + 0x1fc) = &DAT_00777b74;
  _DAT_00735ba4 = 1;
  iVar4 = DAT_00777b6c;
  if (0x9c < DAT_00777b6c) {
    iVar4 = 0x9c;
  }
  *(int *)(param_1 + 0x4c) = iVar4;
  *(undefined4 *)(param_1 + 0x204) = DAT_00777b60;
  *(undefined4 *)(param_1 + 0x208) = DAT_00777b64;
  *(undefined4 *)(param_1 + 0x20c) = DAT_00777b70;
  iVar4 = DAT_006ee6f0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  switch(iVar4) {
  case 1:
    *(undefined4 *)(param_1 + 0x40) = 1;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x40) = 2;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x40) = 3;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x40) = 4;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x40) = 5;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x40) = 6;
    break;
  default:
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  iVar4 = DAT_0073578c;
  DAT_0073639c = &DAT_00777b74;
  DAT_007363ac = DAT_00777b6c;
  DAT_007363a8 = 1;
  DAT_007363b0 = 0;
  DAT_00777b74 = 0;
  DAT_007363a0 = 0;
  DAT_007363a4 = 0;
  if (DAT_0073578c != 0) {
    *(undefined1 *)(*(int *)(DAT_0073578c + 8) + 1) = 0;
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(int *)(param_1 + 0x20c) == 3) {
    *(undefined1 *)(param_1 + 0x52) = 1;
  }
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar5 = FUN_004f65d0(), iVar4 = DAT_0073578c, iVar5 == 0))
     || (iVar5 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar5 == 0)) {
    if (iVar4 == 0) {
      iVar5 = 0;
      iVar4 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0x5dfa6642);
      iVar4 = DAT_0073578c;
    }
  }
  *(int *)(param_1 + 0x54) = iVar5;
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar5 = FUN_004f65d0(), iVar4 = DAT_0073578c, iVar5 == 0))
     || (iVar5 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar5 == 0)) {
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xa036136a);
    }
  }
  *(int *)(param_1 + 0x58) = iVar5;
  local_28 = (int *)(param_1 + 0x118);
  local_2c = 1;
  local_24 = 0xd;
  do {
    FUN_004f68c0(0x20,"KB_SYMBOL_%.2d",local_2c);
    iVar4 = -1;
    pbVar9 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      bVar3 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ecbf3:
      if (iVar5 == 0) {
LAB_004ecc04:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
        if (DAT_0073578c != 0) {
          iVar7 = *(int *)(DAT_0073578c + 8);
          if ((iVar7 == 0) ||
             ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
              (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_004ecbf3;
          goto LAB_004ecbdc;
        }
        goto LAB_004ecc04;
      }
LAB_004ecbdc:
      if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ecbf3;
    }
    local_28[-0x2f] = iVar6;
    FUN_004f68c0(0x20,"KB_SYMBOL_BUTTON_%.2d",local_2c);
    iVar4 = -1;
    pbVar9 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar9 + 1;
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar9 = pbVar9 + 1;
      bVar3 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004eccc3:
      if (iVar5 == 0) {
LAB_004eccd4:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
        if (DAT_0073578c != 0) {
          iVar7 = *(int *)(DAT_0073578c + 8);
          if ((iVar7 == 0) ||
             ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
              (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_004eccc3;
          goto LAB_004eccac;
        }
        goto LAB_004eccd4;
      }
LAB_004eccac:
      if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar6 == 0))
      goto LAB_004eccc3;
    }
    *local_28 = iVar6;
    local_28 = local_28 + 1;
    local_2c = local_2c + 1;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  local_28 = (int *)(param_1 + 0x14c);
  local_2c = 1;
  local_24 = 0x22;
  do {
    FUN_004f68c0(0x20,"KB_LETTER_%.2d",local_2c);
    iVar4 = -1;
    pbVar9 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      bVar3 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ecdd3:
      if (iVar5 == 0) {
LAB_004ecde4:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
        if (DAT_0073578c != 0) {
          iVar7 = *(int *)(DAT_0073578c + 8);
          if ((iVar7 == 0) ||
             ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
              (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_004ecdd3;
          goto LAB_004ecdbc;
        }
        goto LAB_004ecde4;
      }
LAB_004ecdbc:
      if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ecdd3;
    }
    local_28[-0x2f] = iVar6;
    FUN_004f68c0(0x20,"KB_LETTER_BUTTON_%.2d",local_2c);
    iVar4 = -1;
    pbVar9 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar9 + 1;
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar9 = pbVar9 + 1;
      bVar3 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ecea3:
      if (iVar5 == 0) {
LAB_004eceb4:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
        if (DAT_0073578c != 0) {
          iVar7 = *(int *)(DAT_0073578c + 8);
          if ((iVar7 == 0) ||
             ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
              (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_004ecea3;
          goto LAB_004ece8c;
        }
        goto LAB_004eceb4;
      }
LAB_004ece8c:
      if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ecea3;
    }
    *local_28 = iVar6;
    local_28 = local_28 + 1;
    local_2c = local_2c + 1;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  local_28 = (int *)(param_1 + 0x1e8);
  local_2c = 1;
  local_24 = 5;
  do {
    FUN_004f68c0(0x20,"KB_CONTROL_%.2d",local_2c);
    iVar4 = -1;
    pbVar9 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      bVar3 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ecfb3:
      if (iVar5 == 0) {
LAB_004ecfc4:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004ef050(iVar4);
      }
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
        if (DAT_0073578c != 0) {
          iVar7 = *(int *)(DAT_0073578c + 8);
          if ((iVar7 == 0) ||
             ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
              (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_004ecfb3;
          goto LAB_004ecf9c;
        }
        goto LAB_004ecfc4;
      }
LAB_004ecf9c:
      if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ecfb3;
    }
    local_28[-5] = iVar6;
    FUN_004f68c0(0x20,"KB_CONTROL_BUTTON_%.2d",local_2c);
    iVar4 = -1;
    pbVar9 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar9 + 1;
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar9 = pbVar9 + 1;
      bVar3 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed08b:
      iVar6 = 0;
      if (iVar5 == 0) {
LAB_004ed0a2:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar4);
        iVar6 = DAT_0073578c;
      }
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
        iVar6 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar7 = *(int *)(DAT_0073578c + 8);
          if ((iVar7 == 0) ||
             ((iVar6 = FUN_004fd1e0(iVar7 + 0xdc), iVar6 == 0 &&
              (iVar6 = FUN_004fd1e0(iVar7 + 0xec), iVar6 == 0)))) goto LAB_004ed08b;
          goto LAB_004ed06c;
        }
        goto LAB_004ed0a2;
      }
LAB_004ed06c:
      if ((iVar6 == 0) ||
         (iVar7 = FUN_004ffb70(), iVar6 = DAT_0073578c, iVar5 = DAT_0073578c, iVar7 == 0))
      goto LAB_004ed08b;
    }
    *local_28 = iVar7;
    local_28 = local_28 + 1;
    local_2c = local_2c + 1;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  if ((*(int *)(param_1 + 0x20c) == 0) && (DAT_006ee6f0 != 7)) {
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed15b:
      iVar4 = 0;
      if (iVar6 == 0) goto LAB_004ed37d;
      iVar5 = FUN_004ef050(0xbf8ec481);
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      iVar6 = DAT_0073578c;
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
        iVar4 = DAT_0073578c;
        if (DAT_0073578c == 0) goto LAB_004ed37d;
        iVar5 = *(int *)(DAT_0073578c + 8);
        if ((iVar5 == 0) ||
           ((iVar4 = FUN_004fd1e0(iVar5 + 0xdc), iVar4 == 0 &&
            (iVar4 = FUN_004fd1e0(iVar5 + 0xec), iVar4 == 0)))) goto LAB_004ed15b;
      }
      if ((iVar4 == 0) || (iVar5 = FUN_004ffb70(), iVar6 = DAT_0073578c, iVar5 == 0))
      goto LAB_004ed15b;
    }
    iVar4 = DAT_0073578c;
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x18) == 2)) {
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x400000;
      puVar2 = DAT_00735710;
      bVar10 = DAT_00735710 != (undefined4 *)0x0;
      *(undefined4 *)(iVar5 + 0x5c) = 0xfa4c00a9;
      if (bVar10) {
        (**(code **)*puVar2)(iVar5);
      }
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffd | 0x400000;
      iVar4 = DAT_0073578c;
    }
  }
  else {
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed228:
      iVar4 = 0;
      if (iVar6 == 0) {
LAB_004ed243:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_004ef050(0x4c913f7);
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
              (iVar4 = FUN_004fd1e0(iVar5 + 0xec), iVar4 == 0)))) goto LAB_004ed228;
          goto LAB_004ed20e;
        }
        goto LAB_004ed243;
      }
LAB_004ed20e:
      if ((iVar4 == 0) ||
         (iVar5 = FUN_004ffb70(), iVar6 = DAT_0073578c, iVar4 = DAT_0073578c, iVar5 == 0))
      goto LAB_004ed228;
    }
    FUN_004f6910(iVar5);
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed2bd:
      iVar5 = 0;
      if (iVar4 == 0) {
LAB_004ed2d8:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004ef050(0xbf8ec481);
        iVar5 = DAT_0073578c;
      }
    }
    else {
      iVar5 = FUN_004f3f90(&DAT_00746104);
      iVar4 = DAT_0073578c;
      if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
        iVar5 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar6 = *(int *)(DAT_0073578c + 8);
          if ((iVar6 == 0) ||
             ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
              (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004ed2bd;
          goto LAB_004ed2a3;
        }
        goto LAB_004ed2d8;
      }
LAB_004ed2a3:
      if ((iVar5 == 0) ||
         (iVar6 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar5 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ed2bd;
    }
    FUN_004f6910(iVar6);
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed352:
      iVar4 = 0;
      if (iVar5 == 0) {
LAB_004ed36d:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004ef050(0x261a66d0);
        iVar4 = DAT_0073578c;
      }
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
        iVar4 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar6 = *(int *)(DAT_0073578c + 8);
          if ((iVar6 == 0) ||
             ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
              (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004ed352;
          goto LAB_004ed338;
        }
        goto LAB_004ed36d;
      }
LAB_004ed338:
      if ((iVar4 == 0) ||
         (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ed352;
    }
    FUN_004f6910(iVar6);
  }
LAB_004ed37d:
  if (*(int *)(param_1 + 0x20c) == 3) {
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed3fd:
      iVar5 = 0;
      if (iVar4 == 0) {
LAB_004ed418:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004ef050(0x261a66ce);
        iVar5 = DAT_0073578c;
      }
    }
    else {
      iVar5 = FUN_004f3f90(&DAT_00746104);
      iVar4 = DAT_0073578c;
      if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
        iVar5 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar6 = *(int *)(DAT_0073578c + 8);
          if ((iVar6 == 0) ||
             ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
              (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004ed3fd;
          goto LAB_004ed3e3;
        }
        goto LAB_004ed418;
      }
LAB_004ed3e3:
      if ((iVar5 == 0) ||
         (iVar6 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar5 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ed3fd;
    }
    FUN_004f6910(iVar6);
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed496:
      iVar4 = 0;
      if (iVar5 == 0) {
LAB_004ed4b1:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004ef050(0x261a66cf);
        iVar4 = DAT_0073578c;
      }
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
        iVar4 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar6 = *(int *)(DAT_0073578c + 8);
          if ((iVar6 == 0) ||
             ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
              (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004ed496;
          goto LAB_004ed47c;
        }
        goto LAB_004ed4b1;
      }
LAB_004ed47c:
      if ((iVar4 == 0) ||
         (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ed496;
    }
    FUN_004f6910(iVar6);
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed52f:
      iVar6 = 0;
      if (iVar4 == 0) {
LAB_004ed54a:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_004ef050(0x2a7d443d);
        iVar6 = DAT_0073578c;
      }
    }
    else {
      iVar5 = FUN_004f3f90(&DAT_00746104);
      iVar4 = DAT_0073578c;
      if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
        iVar6 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar6 = *(int *)(DAT_0073578c + 8);
          if ((iVar6 == 0) ||
             ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
              (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004ed52f;
          goto LAB_004ed515;
        }
        goto LAB_004ed54a;
      }
LAB_004ed515:
      if ((iVar5 == 0) ||
         (iVar5 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar6 = DAT_0073578c, iVar5 == 0))
      goto LAB_004ed52f;
    }
    FUN_004f6910(iVar5);
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed5c8:
      iVar5 = 0;
      if (iVar6 != 0) {
        uVar8 = FUN_004ef050(0xca67c5a7);
        iVar5 = DAT_0073578c;
        FUN_004f6910(uVar8);
        goto LAB_004ed6be;
      }
LAB_004ed5ef:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      iVar6 = DAT_0073578c;
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
        iVar5 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar5 = *(int *)(DAT_0073578c + 8);
          if ((iVar5 == 0) ||
             ((iVar4 = FUN_004fd1e0(iVar5 + 0xdc), iVar4 == 0 &&
              (iVar4 = FUN_004fd1e0(iVar5 + 0xec), iVar4 == 0)))) goto LAB_004ed5c8;
          goto LAB_004ed5ae;
        }
        goto LAB_004ed5ef;
      }
LAB_004ed5ae:
      if ((iVar4 == 0) ||
         (iVar4 = FUN_004ffb70(), iVar6 = DAT_0073578c, iVar5 = DAT_0073578c, iVar4 == 0))
      goto LAB_004ed5c8;
    }
    FUN_004f6910(iVar4);
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed66f:
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar6 = FUN_004ef050(0xca67c5a7);
LAB_004ed682:
      iVar5 = DAT_0073578c;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) == 2)) {
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
        puVar2 = DAT_00735710;
        bVar10 = DAT_00735710 != (undefined4 *)0x0;
        *(undefined4 *)(iVar6 + 0x5c) = 0xe013d55;
        if (bVar10) {
          (**(code **)*puVar2)(iVar6);
        }
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffd | 0x400000;
        iVar5 = DAT_0073578c;
      }
    }
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    iVar4 = DAT_0073578c;
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_004ed655:
      if ((iVar5 == 0) || (iVar6 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ed66f;
      goto LAB_004ed682;
    }
    iVar5 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      iVar6 = *(int *)(DAT_0073578c + 8);
      if ((iVar6 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004ed66f;
      goto LAB_004ed655;
    }
  }
LAB_004ed6be:
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed735:
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar6 = FUN_004ef050(0x59c69891);
LAB_004ed748:
      iVar4 = DAT_0073578c;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) == 2)) {
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
        puVar2 = DAT_00735710;
        bVar10 = DAT_00735710 != (undefined4 *)0x0;
        *(undefined4 *)(iVar6 + 0x5c) = 0x7f042bcd;
        if (bVar10) {
          (**(code **)*puVar2)(iVar6);
        }
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffd | 0x400000;
        iVar4 = DAT_0073578c;
      }
    }
  }
  else {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_004ed71b:
      if ((iVar4 == 0) || (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ed735;
      goto LAB_004ed748;
    }
    iVar4 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      iVar6 = *(int *)(DAT_0073578c + 8);
      if ((iVar6 == 0) ||
         ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
          (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004ed735;
      goto LAB_004ed71b;
    }
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ed7fb:
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar6 = FUN_004ef050(0x64aff8d3);
LAB_004ed80e:
      iVar5 = DAT_0073578c;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) == 2)) {
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
        puVar2 = DAT_00735710;
        bVar10 = DAT_00735710 != (undefined4 *)0x0;
        *(undefined4 *)(iVar6 + 0x5c) = 0x95e10f41;
        if (bVar10) {
          (**(code **)*puVar2)(iVar6);
        }
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffd | 0x400000;
        iVar5 = DAT_0073578c;
      }
    }
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    iVar4 = DAT_0073578c;
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_004ed7e1:
      if ((iVar5 == 0) || (iVar6 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar6 == 0))
      goto LAB_004ed7fb;
      goto LAB_004ed80e;
    }
    iVar5 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      iVar6 = *(int *)(DAT_0073578c + 8);
      if ((iVar6 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004ed7fb;
      goto LAB_004ed7e1;
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        return;
      }
      iVar6 = *(int *)(DAT_0073578c + 8);
      if ((iVar6 == 0) ||
         ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
          (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004ed8c1;
    }
    if ((iVar4 != 0) && (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 != 0))
    goto LAB_004ed8d4;
  }
LAB_004ed8c1:
  if (iVar5 == 0) {
    return;
  }
  iVar4 = FUN_004ef050(0x18985589);
LAB_004ed8d4:
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) == 2)) {
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
    puVar2 = DAT_00735710;
    bVar10 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar4 + 0x5c) = 0x169268;
    if (bVar10) {
      (**(code **)*puVar2)(iVar4);
    }
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}

