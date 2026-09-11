/* Decompiled from Speed.exe @ 004b8750 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b8750(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_4c;
  int *local_48;
  int local_44;
  byte local_40;
  byte local_3f [31];
  byte local_20;
  byte local_1f [31];
  
  local_4c = 1;
  local_48 = (int *)0x9;
  do {
    FUN_004f68c0(0x20,"Option%dText",local_4c);
    iVar8 = -1;
    pbVar5 = &local_40;
    bVar2 = local_40;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    if (((DAT_0073578c != 0) && (iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0)) &&
       (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
      iVar7 = *(int *)(iVar3 + 0x88);
      iVar9 = 0;
      if (iVar7 != 0) {
        piVar6 = *(int **)(iVar3 + 0x84);
        do {
          if (*(int *)(*piVar6 + 0x10) == iVar8) {
            iVar9 = *piVar6;
          }
          piVar6 = piVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (iVar9 != 0) {
          *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x4000000;
        }
      }
    }
    iVar8 = -1;
    pbVar5 = &local_40;
    bVar2 = local_40;
    while (bVar2 != 0) {
      uVar4 = (uint)bVar2;
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        uVar4 = (uint)(byte)(bVar2 - 0x20);
      }
      pbVar1 = pbVar5 + 1;
      iVar8 = iVar8 * 0x21 + uVar4;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004b889c:
      if (DAT_0073578c == 0) {
LAB_004b88b2:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar7 = *(int *)(DAT_0073578c + 8);
          if ((iVar7 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar7 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar7 + 0xec), iVar3 == 0)))) goto LAB_004b889c;
          goto LAB_004b888b;
        }
        goto LAB_004b88b2;
      }
LAB_004b888b:
      if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar3 == 0)) goto LAB_004b889c;
    }
    FUN_004f6910(iVar3);
    FUN_004f68c0(0x20,"Option%dData",local_4c);
    iVar8 = -1;
    pbVar5 = &local_40;
    bVar2 = local_40;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar5 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    iVar3 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004b896a:
      if (iVar3 == 0) {
LAB_004b897b:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar3 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar9 = *(int *)(DAT_0073578c + 8);
          if ((iVar9 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar9 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar9 + 0xec), iVar7 == 0)))) goto LAB_004b896a;
          goto LAB_004b8953;
        }
        goto LAB_004b897b;
      }
LAB_004b8953:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar3 = DAT_0073578c, iVar7 == 0))
      goto LAB_004b896a;
    }
    FUN_004f6910(iVar7);
    local_4c = local_4c + 1;
    local_48 = (int *)((int)local_48 + -1);
  } while (local_48 != (int *)0x0);
  switch(DAT_00777cc8) {
  case 0:
    FUN_004b8e60();
    break;
  case 1:
    FUN_004b8f40();
    break;
  case 2:
    FUN_004b8fe0();
    break;
  case 3:
    if (DAT_00777b4c == 4) {
      _DAT_007589f8 = 0;
    }
    FUN_004b8d50(1);
    *(undefined4 *)(param_1 + 0x9c) = 1;
    *(undefined1 **)(param_1 + 0x60) = &LAB_004b8690;
    FUN_004b83c0();
    break;
  case 4:
    FUN_004b9070();
    break;
  case 5:
    FUN_004b9130();
    break;
  case 6:
    FUN_004b9190();
  }
  local_48 = (int *)(param_1 + 0x50);
  local_4c = 1;
  local_44 = 4;
  do {
    FUN_004f68c0(0x20,"option%d_arrow_L_button",local_4c);
    iVar8 = -1;
    pbVar5 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    iVar3 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004b8af3:
      if (iVar3 == 0) {
LAB_004b8b04:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar3 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar9 = *(int *)(DAT_0073578c + 8);
          if ((iVar9 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar9 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar9 + 0xec), iVar7 == 0)))) goto LAB_004b8af3;
          goto LAB_004b8adc;
        }
        goto LAB_004b8b04;
      }
LAB_004b8adc:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar3 = DAT_0073578c, iVar7 == 0))
      goto LAB_004b8af3;
    }
    local_48[-4] = iVar7;
    FUN_004f68c0(0x20,"option%d_arrow_R_button",local_4c);
    iVar8 = -1;
    pbVar5 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar5 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    iVar3 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004b8bc3:
      if (iVar3 == 0) {
LAB_004b8bd4:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar3 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar9 = *(int *)(DAT_0073578c + 8);
          if ((iVar9 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar9 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar9 + 0xec), iVar7 == 0)))) goto LAB_004b8bc3;
          goto LAB_004b8bac;
        }
        goto LAB_004b8bd4;
      }
LAB_004b8bac:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar3 = DAT_0073578c, iVar7 == 0))
      goto LAB_004b8bc3;
    }
    *local_48 = iVar7;
    local_48 = local_48 + 1;
    local_4c = local_4c + 1;
    local_44 = local_44 + -1;
    if (local_44 == 0) {
      return;
    }
  } while( true );
}

