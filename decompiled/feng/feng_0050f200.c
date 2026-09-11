/* Decompiled from Speed.exe @ 0050f200 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050f200(int param_1)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 local_28 [8];
  int local_8;
  
  iVar5 = *(int *)(param_1 + 0x40);
  iVar4 = 0;
  puVar10 = local_28;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  pcVar2 = (char *)**(undefined4 **)(iVar5 + 0xc);
  if (pcVar2 != (char *)0x0) {
    cVar3 = *pcVar2;
    while (cVar3 != '\0') {
      iVar8 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar3 = pcVar2[iVar8];
    }
  }
  iVar8 = -1;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) break;
    if (pcVar2[iVar4] == ' ') {
      iVar8 = iVar4;
    }
  } while (iVar8 < 0);
  iVar4 = 0;
  local_8 = iVar5;
  if (0 < iVar8) {
    do {
      *(undefined1 *)((int)local_28 + iVar4) = *(undefined1 *)(iVar4 + **(int **)(iVar5 + 0xc));
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar8);
  }
  FUN_004f6850(&DAT_006cc568,local_28);
  switch(*(undefined1 *)(*(int *)(iVar5 + 0xc) + 0x11)) {
  case 0:
    uVar9 = 0x2cbd3c8d;
    break;
  case 1:
    uVar9 = 0x2cbd3c6b;
    break;
  case 2:
    uVar9 = 0x2cbd3c6c;
    break;
  case 3:
    uVar9 = 0x2cbd3c6d;
    break;
  case 4:
    uVar9 = 0x2cbd3c8f;
    break;
  default:
    uVar9 = 0x50fe8c15;
  }
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (*(int *)(iVar5 + 0x14) != 0)) {
    FUN_004f7c00(uVar9,0,0,*(int *)(iVar5 + 0x18));
  }
  if (((DAT_00745e40 == 2) || (DAT_00735ec1 != '\0')) ||
     (cVar3 = FUN_005a3570(&DAT_0075f344), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0050f4ae:
      if (DAT_0073578c == 0) {
LAB_0050f4c8:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_004ef050(0x7c5a7469);
      }
    }
    else {
      iVar5 = FUN_004f3f90(&DAT_00746104);
      if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar5 = FUN_004fd1e0(iVar4 + 0xdc), iVar5 == 0 &&
              (iVar5 = FUN_004fd1e0(iVar4 + 0xec), iVar5 == 0)))) goto LAB_0050f4ae;
          goto LAB_0050f49a;
        }
        goto LAB_0050f4c8;
      }
LAB_0050f49a:
      if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_0050f4ae;
    }
    FUN_004f6910(iVar5);
  }
  else {
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0050f392:
      if ((iVar5 != 0) && (iVar4 = FUN_004ef050(0x7c5a7469), iVar4 != 0)) {
LAB_0050f3a9:
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000;
        if (*(int *)(iVar4 + 0x18) == 5) {
          uVar9 = *(undefined4 *)(iVar4 + 0x60);
          iVar5 = *(int *)(iVar4 + 0x5c);
          if (0 < iVar5) {
            do {
              FUN_004f6970(uVar9);
              uVar9 = *(undefined4 *)(extraout_EDX + 4);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_0050f378:
        if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 == 0))
        goto LAB_0050f392;
        goto LAB_0050f3a9;
      }
      if (DAT_0073578c != 0) {
        iVar8 = *(int *)(DAT_0073578c + 8);
        if ((iVar8 == 0) ||
           ((iVar4 = FUN_004fd1e0(iVar8 + 0xdc), iVar4 == 0 &&
            (iVar4 = FUN_004fd1e0(iVar8 + 0xec), iVar4 == 0)))) goto LAB_0050f392;
        goto LAB_0050f378;
      }
    }
    if (((*(int *)(local_8 + 0xc) == 0) || (uVar6 = FUN_005a03d0(), 0x1f < uVar6)) ||
       (iVar5 = (&DAT_00733f78)[uVar6], iVar5 == 0)) {
switchD_0050f40b_caseD_0:
      uVar9 = 0;
    }
    else {
      switch(*(undefined1 *)(extraout_ECX + 0x11)) {
      default:
        goto switchD_0050f40b_caseD_0;
      case 1:
        uVar9 = *(undefined4 *)(iVar5 + 4);
        break;
      case 2:
        uVar9 = *(undefined4 *)(iVar5 + 8);
        break;
      case 3:
        uVar9 = *(undefined4 *)(iVar5 + 0xc);
      }
    }
    FUN_004f6850(&DAT_006ca778,uVar9);
  }
  iVar5 = DAT_0073578c;
  piVar7 = *(int **)(*(int *)(local_8 + 0xc) + 0x14);
  piVar1 = piVar7 + *(short *)(*(int *)(local_8 + 0xc) + 0x1c) * 2;
  if (piVar7 != (int *)0x0) {
    for (; (piVar7 < piVar1 && (*piVar7 != -0x14fefe1e)); piVar7 = piVar7 + 2) {
    }
  }
  iVar4 = FUN_0050dee0();
  *(int *)(param_1 + 0x90) = iVar4;
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0050f592:
      if ((iVar5 != 0) && (iVar4 = FUN_004ef050(0xc53843de), iVar4 != 0)) {
LAB_0050f5a9:
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000;
        if (*(int *)(iVar4 + 0x18) == 5) {
          uVar9 = *(undefined4 *)(iVar4 + 0x60);
          iVar5 = *(int *)(iVar4 + 0x5c);
          if (0 < iVar5) {
            do {
              FUN_004f6970(uVar9);
              uVar9 = *(undefined4 *)(extraout_EDX_00 + 4);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_0050f578:
        if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 == 0))
        goto LAB_0050f592;
        goto LAB_0050f5a9;
      }
      if (DAT_0073578c != 0) {
        iVar8 = *(int *)(DAT_0073578c + 8);
        if ((iVar8 == 0) ||
           ((iVar4 = FUN_004fd1e0(iVar8 + 0xdc), iVar4 == 0 &&
            (iVar4 = FUN_004fd1e0(iVar8 + 0xec), iVar4 == 0)))) goto LAB_0050f592;
        goto LAB_0050f578;
      }
    }
    iVar5 = *(int *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
        if (DAT_0073578c == 0) {
          return;
        }
        iVar8 = *(int *)(DAT_0073578c + 8);
        if ((iVar8 == 0) ||
           ((iVar4 = FUN_004fd1e0(iVar8 + 0xdc), iVar4 == 0 &&
            (iVar4 = FUN_004fd1e0(iVar8 + 0xec), iVar4 == 0)))) goto LAB_0050f654;
      }
      if ((iVar4 != 0) && (iVar4 = FUN_004ffb70(), iVar4 != 0)) goto LAB_0050f678;
    }
LAB_0050f654:
    if (DAT_0073578c == 0) {
      return;
    }
    iVar4 = FUN_004ef050(0xc53843de);
    if (iVar4 == 0) {
      return;
    }
LAB_0050f678:
    if ((*(int *)(iVar4 + 0x18) == 1) && (*(int *)(iVar4 + 0x24) != iVar5)) {
      *(int *)(iVar4 + 0x24) = iVar5;
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
      return;
    }
    return;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_0050f71f:
    if (iVar5 != 0) {
      uVar9 = FUN_004ef050(0xc53843de);
      FUN_004f6910(uVar9);
      return;
    }
  }
  else {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_0050f705:
      if ((iVar4 != 0) && (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 != 0))
      goto LAB_0050f746;
      goto LAB_0050f71f;
    }
    if (DAT_0073578c != 0) {
      iVar8 = *(int *)(DAT_0073578c + 8);
      if ((iVar8 == 0) ||
         ((iVar4 = FUN_004fd1e0(iVar8 + 0xdc), iVar4 == 0 &&
          (iVar4 = FUN_004fd1e0(iVar8 + 0xec), iVar4 == 0)))) goto LAB_0050f71f;
      goto LAB_0050f705;
    }
  }
  iVar4 = 0;
LAB_0050f746:
  FUN_004f6910(iVar4);
  return;
}

