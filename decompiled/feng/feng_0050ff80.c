/* Decompiled from Speed.exe @ 0050ff80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050ff80(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  iVar7 = *(int *)(param_1 + 0x40);
  FUN_005048e0(&DAT_00744ff0);
  FUN_00495f00(*(undefined4 *)(iVar7 + 0x10));
  cVar5 = FUN_005a1550(&DAT_0075eef8,1);
  uVar4 = DAT_0073766c;
  iVar12 = DAT_00737668;
  if (cVar5 == '\0') {
    uVar6 = 0;
    if (DAT_0073766c == 0) {
LAB_00510024:
      bVar3 = false;
    }
    else {
      piVar9 = (int *)(DAT_00737668 + 0x24);
      do {
        if ((piVar9[-1] == 1) && (*piVar9 == 2)) {
          if (*(char *)(uVar6 * 0x34 + 0x30 + DAT_00737668) != '\0') goto LAB_0051002a;
          goto LAB_00510024;
        }
        uVar6 = uVar6 + 1;
        piVar9 = piVar9 + 0xd;
      } while (uVar6 < DAT_0073766c);
      bVar3 = false;
    }
  }
  else {
LAB_0051002a:
    bVar3 = true;
  }
  cVar5 = FUN_005a1550(&DAT_0075eef8,1);
  if (cVar5 == '\0') {
    uVar6 = 0;
    if (uVar4 == 0) {
LAB_00510071:
      bVar1 = false;
    }
    else {
      piVar9 = (int *)(iVar12 + 0x24);
      do {
        if ((piVar9[-1] == 1) && (*piVar9 == 3)) {
          if (*(char *)(uVar6 * 0x34 + 0x30 + iVar12) != '\0') goto LAB_00510075;
          goto LAB_00510071;
        }
        uVar6 = uVar6 + 1;
        piVar9 = piVar9 + 0xd;
      } while (uVar6 < uVar4);
      bVar1 = false;
    }
  }
  else {
LAB_00510075:
    bVar1 = true;
  }
  if ((bVar3) || (DAT_00735ec1 != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((bVar1) || (bVar1 = false, DAT_00735ec1 != '\0')) {
    bVar1 = true;
  }
  bVar2 = false;
  switch(*(undefined4 *)(iVar7 + 8)) {
  case 0:
  case 1:
    goto switchD_005100a5_default;
  case 2:
  case 3:
  case 4:
  case 5:
    break;
  case 6:
    bVar3 = bVar1;
    break;
  default:
    goto switchD_005100a5_default;
  }
  bVar2 = !bVar3;
switchD_005100a5_default:
  iVar7 = FUN_004f3f90(&DAT_00746104);
  if (((iVar7 != 0) && (iVar12 = *(int *)(iVar7 + 0x18), iVar12 != 0)) &&
     (*(int *)(iVar7 + 0x14) != 0)) {
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = FUN_005042d0(&DAT_00744ff0);
    FUN_004f7c00(uVar8,uVar10,uVar11,iVar12);
  }
  if (bVar2) {
    if (((*(int *)(param_1 + 0xc) == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) ||
       (iVar7 = FUN_004ffb70(), iVar7 == 0)) {
      if (DAT_0073578c != 0) {
        uVar8 = FUN_004ef050(0xa8a3681a);
        FUN_004f6970(uVar8);
        return;
      }
      iVar7 = 0;
    }
    FUN_004f6970(iVar7);
    return;
  }
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) ||
     (iVar7 = FUN_004ffb70(), iVar7 == 0)) {
    if (DAT_0073578c != 0) {
      uVar8 = FUN_004ef050(0xa8a3681a);
      FUN_004f6910(uVar8);
      return;
    }
    iVar7 = 0;
  }
  FUN_004f6910(iVar7);
  return;
}

