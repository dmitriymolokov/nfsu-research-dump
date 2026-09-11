/* Decompiled from Speed.exe @ 004ba100 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ba100(int param_1)

{
  byte *pbVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  int local_8;
  int local_4;
  
  FUN_004f85b0();
  local_8 = 0;
  if (0 < DAT_0073616c) {
    local_4 = 0;
    do {
      if (((DAT_00736168 == 0) || (local_4 < 0)) || (DAT_0073616c <= local_8)) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_4 + DAT_00736168;
      }
      sVar2 = *(short *)(iVar9 + 0x6c);
      iVar9 = FUN_004ab470(&DAT_00748f70);
      if ((iVar9 != 0) && ((DAT_0073494c == 0 || (sVar2 != 1099)))) {
        FUN_004b9f40();
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + 0xfc;
    } while (local_8 < DAT_0073616c);
  }
  local_4 = 0;
  if (0 < DAT_0073616c) {
    local_8 = 0;
    do {
      if (((DAT_00736168 == 0) || (local_8 < 0)) || (DAT_0073616c <= local_4)) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_8 + DAT_00736168;
      }
      sVar2 = *(short *)(iVar9 + 0x6c);
      iVar3 = FUN_004ab470(&DAT_00748f70);
      if (((iVar3 != 0) && ((*(uint *)(iVar9 + 0x74) & 8) == 0)) &&
         ((DAT_0073494c == 0 || ((sVar2 != 1099 && ((*(uint *)(iVar9 + 0x74) & 6) == 0)))))) {
        FUN_004b9f40();
      }
      local_4 = local_4 + 1;
      local_8 = local_8 + 0xfc;
    } while (local_4 < DAT_0073616c);
  }
  piVar10 = (int *)(param_1 + 0x40);
  FUN_004b9fd0(piVar10);
  if (*piVar10 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *piVar10 + -4;
  }
  while( true ) {
    if (piVar10 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 0x3c;
    }
    if (iVar9 == iVar3) break;
    if (*(int *)(iVar9 + 0x18) == 0) {
      sVar2 = *(short *)(*(int *)(iVar9 + 0xc) + 0x6c);
      pcVar11 = "TRACK_IMAGE_%d";
    }
    else {
      sVar2 = *(short *)(*(int *)(iVar9 + 0xc) + 0x6c);
      pcVar11 = "REVERSE_TRACK_IMAGE_%d";
    }
    uVar4 = FUN_004f42f0(pcVar11,(int)sVar2);
    iVar3 = FUN_004f8730(param_1 + 0x4c,uVar4,0,1);
    if (*(int *)(iVar9 + 0x18) == 0) {
      sVar2 = *(short *)(*(int *)(iVar9 + 0xc) + 0x6c);
      pcVar11 = "TRACK_%d_ICON";
    }
    else {
      sVar2 = *(short *)(*(int *)(iVar9 + 0xc) + 0x6c);
      pcVar11 = "REVERSE_TRACK_%d_ICON";
    }
    iVar5 = FUN_004f42f0(pcVar11,(int)sVar2);
    iVar6 = FUN_005461c0(iVar5,0,0);
    if (iVar6 == 0) {
      pcVar11 = "GENERICPLACEHOLDER";
      iVar5 = -1;
      uVar7 = 0x47;
      do {
        iVar5 = iVar5 * 0x21 + uVar7;
        pbVar1 = (byte *)(pcVar11 + 1);
        uVar7 = (uint)*pbVar1;
        pcVar11 = pcVar11 + 1;
      } while (*pbVar1 != 0);
    }
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != iVar5)) {
      *(int *)(iVar3 + 0x24) = iVar5;
      *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
    }
    if (*(int *)(iVar9 + 4) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(iVar9 + 4) + -4;
    }
  }
  puVar8 = (undefined *)0x0;
  switch(DAT_00777cc8) {
  case 0:
    puVar8 = &DAT_00758980;
    break;
  case 1:
    puVar8 = &DAT_007589a0;
    break;
  case 2:
    puVar8 = &DAT_007589c0;
    break;
  case 3:
    puVar8 = &DAT_007589e0;
    break;
  case 4:
    puVar8 = &DAT_00758a04;
    break;
  case 5:
    puVar8 = &DAT_00758a88;
    break;
  case 6:
    puVar8 = &DAT_00758ab4;
  }
  if (*(int *)(puVar8 + 8) == -1) {
    iVar9 = *piVar10;
    if (iVar9 == 0) goto LAB_004ba3bc;
    iVar3 = iVar9 + -4;
    while( true ) {
      if (piVar10 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1 + 0x3c;
      }
      if (iVar3 == iVar5) break;
      if (*(char *)(iVar3 + 0x10) == '\0') goto LAB_004ba3e4;
      if (*(int *)(iVar3 + 4) == 0) {
LAB_004ba3bc:
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + -4;
      }
    }
    iVar3 = 0;
LAB_004ba3e4:
    *(int *)(param_1 + 0x48) = iVar3;
    if (iVar3 == 0) {
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + -4;
      }
      *(int *)(param_1 + 0x48) = iVar9;
    }
    *(int *)(puVar8 + 8) = (int)*(short *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) + 0x6c);
    *(undefined4 *)(puVar8 + 0xc) = 0;
  }
  else {
    iVar9 = *piVar10;
    if (iVar9 == 0) goto LAB_004ba425;
    iVar3 = iVar9 + -4;
    while( true ) {
      if (piVar10 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1 + 0x3c;
      }
      if (iVar3 == iVar5) break;
      if (((int)*(short *)(*(int *)(iVar3 + 0xc) + 0x6c) == *(int *)(puVar8 + 8)) &&
         (*(int *)(iVar3 + 0x18) == *(int *)(puVar8 + 0xc))) goto LAB_004ba454;
      if (*(int *)(iVar3 + 4) == 0) {
LAB_004ba425:
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + -4;
      }
    }
    iVar3 = 0;
LAB_004ba454:
    *(int *)(param_1 + 0x48) = iVar3;
    if (iVar3 == 0) {
      if (iVar9 == 0) goto LAB_004ba468;
      iVar3 = iVar9 + -4;
      while( true ) {
        if (piVar10 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = param_1 + 0x3c;
        }
        if (iVar3 == iVar5) break;
        if (*(char *)(iVar3 + 0x10) == '\0') goto LAB_004ba494;
        if (*(int *)(iVar3 + 4) == 0) {
LAB_004ba468:
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 4) + -4;
        }
      }
      iVar3 = 0;
LAB_004ba494:
      *(int *)(param_1 + 0x48) = iVar3;
      if (iVar3 == 0) {
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = iVar9 + -4;
        }
        *(int *)(param_1 + 0x48) = iVar9;
      }
    }
  }
  iVar9 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar9 + 0x18) == 0) {
    sVar2 = *(short *)(*(int *)(iVar9 + 0xc) + 0x6c);
    pcVar11 = "TRACK_IMAGE_%d";
  }
  else {
    sVar2 = *(short *)(*(int *)(iVar9 + 0xc) + 0x6c);
    pcVar11 = "REVERSE_TRACK_IMAGE_%d";
  }
  FUN_004f42f0(pcVar11,(int)sVar2);
  FUN_004f8960();
  if (DAT_00777cc8 != 4) {
    return;
  }
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x48);
  FUN_004b99c0();
  return;
}

