/* Decompiled from Speed.exe @ 0049c820 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049c820(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *puVar10;
  int iVar11;
  
  FUN_0049d370();
  puVar10 = (undefined4 *)(param_1 + 0xf8);
  iVar11 = 9;
  do {
    FUN_004f6910(puVar10[-10]);
    FUN_004f6910(*puVar10);
    puVar10 = puVar10 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if (*(int *)(DAT_0073619c + 0x24) < param_2) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(DAT_0073619c + 0x51c + param_2 * 4);
  }
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
      FUN_0049cee0(param_1,uVar7);
    }
    else {
      FUN_0049cd90(uVar7);
    }
  }
  else {
    FUN_0049cc70(param_1,uVar7);
  }
  pcVar8 = "mouse_over_L";
  iVar11 = -1;
  bVar2 = 0x6d;
  do {
    if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
      bVar2 = bVar2 - 0x20;
    }
    uVar9 = (uint)bVar2;
    bVar2 = pcVar8[1];
    iVar11 = iVar11 * 0x21 + uVar9;
    pcVar8 = pcVar8 + 1;
  } while (bVar2 != 0);
  iVar6 = DAT_0073578c;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049c947:
    iVar4 = 0;
    if ((iVar6 != 0) && (iVar5 = FUN_004ef050(iVar11), iVar4 = DAT_0073578c, iVar5 != 0)) {
LAB_0049c95a:
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
      iVar4 = DAT_0073578c;
      if (*(int *)(iVar5 + 0x18) == 5) {
        uVar7 = *(undefined4 *)(iVar5 + 0x60);
        iVar11 = *(int *)(iVar5 + 0x5c);
        if (0 < iVar11) {
          do {
            FUN_004f6970(uVar7);
            uVar7 = *(undefined4 *)(extraout_EDX + 4);
            iVar11 = iVar11 + -1;
            iVar4 = DAT_0073578c;
          } while (iVar11 != 0);
        }
      }
    }
  }
  else {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar6 = DAT_0073578c;
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_0049c930:
      if ((iVar4 == 0) || (iVar5 = FUN_004ffb70(), iVar6 = DAT_0073578c, iVar5 == 0))
      goto LAB_0049c947;
      goto LAB_0049c95a;
    }
    iVar4 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      iVar5 = *(int *)(DAT_0073578c + 8);
      if ((iVar5 == 0) ||
         ((iVar4 = FUN_004fd1e0(iVar5 + 0xdc), iVar4 == 0 &&
          (iVar4 = FUN_004fd1e0(iVar5 + 0xec), iVar4 == 0)))) goto LAB_0049c947;
      goto LAB_0049c930;
    }
  }
  pcVar8 = "mouse_over_R";
  iVar11 = -1;
  bVar2 = 0x6d;
  do {
    if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
      bVar2 = bVar2 - 0x20;
    }
    iVar11 = iVar11 * 0x21 + (uint)bVar2;
    bVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 1;
  } while (bVar2 != 0);
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049ca30:
    iVar6 = 0;
    if ((iVar4 == 0) || (iVar5 = FUN_004ef050(iVar11), iVar6 = DAT_0073578c, iVar5 == 0))
    goto LAB_0049ca79;
  }
  else {
    iVar6 = FUN_004f3f90(&DAT_00746104);
    iVar4 = DAT_0073578c;
    if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
      iVar6 = DAT_0073578c;
      if (DAT_0073578c == 0) goto LAB_0049ca79;
      iVar5 = *(int *)(DAT_0073578c + 8);
      if ((iVar5 == 0) ||
         ((iVar6 = FUN_004fd1e0(iVar5 + 0xdc), iVar6 == 0 &&
          (iVar6 = FUN_004fd1e0(iVar5 + 0xec), iVar6 == 0)))) goto LAB_0049ca30;
    }
    if ((iVar6 == 0) || (iVar5 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar5 == 0))
    goto LAB_0049ca30;
  }
  *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
  iVar6 = DAT_0073578c;
  if (*(int *)(iVar5 + 0x18) == 5) {
    uVar7 = *(undefined4 *)(iVar5 + 0x60);
    iVar11 = *(int *)(iVar5 + 0x5c);
    if (0 < iVar11) {
      do {
        FUN_004f6970(uVar7);
        uVar7 = *(undefined4 *)(extraout_EDX_00 + 4);
        iVar11 = iVar11 + -1;
        iVar6 = DAT_0073578c;
      } while (iVar11 != 0);
    }
  }
LAB_0049ca79:
  if (param_2 == 1) {
    pcVar8 = "mouse_over_L";
    iVar11 = -1;
    bVar2 = 0x6d;
    do {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      uVar9 = (uint)bVar2;
      bVar2 = pcVar8[1];
      iVar11 = iVar11 * 0x21 + uVar9;
      pcVar8 = pcVar8 + 1;
    } while (bVar2 != 0);
    if (((*(int *)(param_1 + 0xc) == 0) ||
        (iVar4 = FUN_004f65d0(), iVar6 = DAT_0073578c, iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar6 = DAT_0073578c, iVar4 == 0)) {
      if (iVar6 == 0) {
        iVar4 = 0;
        iVar6 = 0;
      }
      else {
        iVar4 = FUN_004ef050(iVar11);
        iVar6 = DAT_0073578c;
      }
    }
    FUN_004f6910(iVar4);
    if (*(int *)(DAT_0073619c + 0x24) != 1) {
      return;
    }
    iVar11 = *(int *)(param_1 + 0xc);
    pcVar8 = "mouse_over_R";
    iVar4 = -1;
    bVar2 = 0x6d;
    do {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      uVar9 = (uint)bVar2;
      bVar2 = pcVar8[1];
      iVar4 = iVar4 * 0x21 + uVar9;
      pcVar8 = pcVar8 + 1;
    } while (bVar2 != 0);
  }
  else {
    if (param_2 != *(int *)(DAT_0073619c + 0x24)) {
      return;
    }
    iVar11 = *(int *)(param_1 + 0xc);
    pcVar8 = "mouse_over_R";
    iVar4 = -1;
    uVar9 = 0x6d;
    do {
      cVar3 = (char)uVar9;
      if (('`' < cVar3) && (cVar3 < '{')) {
        uVar9 = (uint)(byte)(cVar3 - 0x20);
      }
      iVar4 = iVar4 * 0x21 + uVar9;
      pbVar1 = (byte *)(pcVar8 + 1);
      uVar9 = (uint)*pbVar1;
      pcVar8 = pcVar8 + 1;
    } while (*pbVar1 != 0);
  }
  if (((iVar11 == 0) || (iVar11 = FUN_004f65d0(), iVar6 = DAT_0073578c, iVar11 == 0)) ||
     (iVar11 = FUN_004ffb70(), iVar6 = DAT_0073578c, iVar11 == 0)) {
    if (iVar6 != 0) {
      uVar7 = FUN_004ef050(iVar4);
      FUN_004f6910(uVar7);
      return;
    }
    iVar11 = 0;
  }
  FUN_004f6910(iVar11);
  return;
}

