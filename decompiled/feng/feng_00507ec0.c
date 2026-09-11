/* Decompiled from Speed.exe @ 00507ec0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00507ec0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  char local_ac [32];
  char local_8c [32];
  undefined4 local_6c [8];
  char local_4c [64];
  int local_c;
  bool local_6;
  bool local_5;
  
  local_c = *(int *)(param_1 + 0x40);
  FUN_005048e0(&DAT_00744ff0);
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  iVar8 = 0x20;
  pcVar6 = local_ac;
  do {
    cVar2 = pcVar6[iVar3 - (int)local_ac];
    iVar8 = iVar8 + -1;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while (iVar8 != 0);
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  iVar8 = 0x20;
  pcVar6 = local_8c;
  do {
    cVar2 = pcVar6[iVar3 - (int)local_8c];
    iVar8 = iVar8 + -1;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while (iVar8 != 0);
  puVar7 = local_6c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = (undefined4 *)(&DAT_00745b6c)[*(int *)(&DAT_006f8868 + DAT_00735724 * 4)];
  if (puVar7 == (undefined4 *)0x0) {
    bVar9 = true;
  }
  else {
    bVar9 = *(char *)((int)puVar7 + 0x11) == '\0';
  }
  puVar1 = *(undefined4 **)(local_c + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    local_6 = true;
LAB_00507fb2:
    if (!bVar9) {
LAB_00508078:
      local_5 = false;
      goto LAB_00507ffb;
    }
    local_5 = true;
  }
  else {
    local_6 = *(char *)((int)puVar1 + 0x11) == '\0';
    if (local_6) goto LAB_00507fb2;
    if (bVar9) goto LAB_00508078;
    local_5 = puVar1 == puVar7;
    if (puVar1 != puVar7) goto LAB_00507ffb;
  }
  FUN_00565da0(" (%s)",local_ac);
LAB_00507ffb:
  iVar3 = local_c;
  pcVar6 = local_4c;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  if (*(int *)(iVar3 + 0xc) != 0) {
    if (DAT_00735724 == 9) {
      iVar3 = 0;
      do {
        if ((&DAT_00745e50)[iVar3 * 2] == puVar1[2]) {
          if (*(int *)(&DAT_00745e54 + iVar3 * 8) != 0) {
            FUN_00507e80();
          }
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x13);
      iVar3 = FUN_0059fb80();
      if (iVar3 == 0) {
        iVar3 = FUN_0059fb80();
      }
      iVar8 = 0x40;
      pcVar6 = local_4c;
      do {
        cVar2 = pcVar6[iVar3 - (int)local_4c];
        iVar8 = iVar8 + -1;
        *pcVar6 = cVar2;
        if (cVar2 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (iVar8 != 0);
    }
    else if (DAT_00735724 == 10) {
      iVar3 = FUN_00507ea0();
      if (iVar3 != 0) {
        FUN_00507ea0();
      }
      iVar3 = FUN_0059fb80();
      if (iVar3 == 0) {
        iVar3 = FUN_0059fb80();
      }
      iVar8 = 0x40;
      pcVar6 = local_4c;
      do {
        cVar2 = pcVar6[iVar3 - (int)local_4c];
        iVar8 = iVar8 + -1;
        *pcVar6 = cVar2;
        if (cVar2 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (iVar8 != 0);
    }
    else {
      pcVar6 = (char *)*puVar1;
      local_4c[0] = *pcVar6;
      if (local_4c[0] != '\0') {
        pcVar4 = local_4c;
        do {
          cVar2 = pcVar4[(int)(pcVar6 + (1 - (int)local_4c))];
          pcVar4 = pcVar4 + 1;
          *pcVar4 = cVar2;
        } while (cVar2 != '\0');
      }
    }
  }
  if (*(int *)(local_c + 0xc) == 0) {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0))
    {
      (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar3 + 0x18));
    }
    puVar7 = local_6c;
    if (local_5 == false) {
      puVar7 = (undefined4 *)&DAT_006b9172;
    }
    pcVar6 = local_8c;
    if (local_6 == false) {
      pcVar6 = local_4c;
    }
    FUN_004f6850(&DAT_006cc578,pcVar6,puVar7);
  }
  else {
    if ((DAT_00735724 == 0xc) && (*(char *)(*(int *)(local_c + 0xc) + 0x11) == '\0')) {
      FUN_00495f00(0x44798138);
    }
    else {
      puVar7 = local_6c;
      if (local_5 == false) {
        puVar7 = (undefined4 *)&DAT_006b9172;
      }
      pcVar6 = local_8c;
      if (local_6 == false) {
        pcVar6 = local_4c;
      }
      FUN_004f6850(&DAT_006cc578,pcVar6,puVar7);
    }
    uVar5 = FUN_005042d0(&DAT_00744ff0);
    iVar3 = FUN_004f3f90(&DAT_00746104);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int *)(iVar3 + 0x14) != 0)) {
      FUN_004f7c00(uVar5,0,0,*(int *)(iVar3 + 0x18));
    }
  }
  iVar3 = FUN_005a08f0();
  local_5 = DAT_007677ac != 0;
  if (((((iVar3 == 0) || (DAT_00777b4c != 1)) || (DAT_00735ec1 != '\0')) ||
      ((DAT_007677ac != 0 || (cVar2 = FUN_005a3570(&DAT_0075f344), cVar2 != '\0')))) ||
     (local_5 != false)) {
    if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
       (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x7c5a7469);
      }
    }
    FUN_004f6910(iVar3);
  }
  else {
    FUN_00495fc0();
    FUN_004f6850(&DAT_006ca778,iVar3);
  }
  cVar2 = FUN_00507e10(param_1);
  if (cVar2 != '\0') {
    if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
       (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
      if (DAT_0073578c != 0) {
        uVar5 = FUN_004ef050(0xa8a3681a);
        FUN_004f6970(uVar5);
        return;
      }
      iVar3 = 0;
    }
    FUN_004f6970(iVar3);
    return;
  }
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c != 0) {
      uVar5 = FUN_004ef050(0xa8a3681a);
      FUN_004f6910(uVar5);
      return;
    }
    iVar3 = 0;
  }
  FUN_004f6910(iVar3);
  return;
}

