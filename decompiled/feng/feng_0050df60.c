/* Decompiled from Speed.exe @ 0050df60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050df60(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *puVar9;
  bool bVar10;
  undefined4 local_30 [8];
  int local_10;
  int local_c;
  char local_5;
  
  iVar4 = *(int *)(param_1 + 0x40);
  local_5 = DAT_007677ac != 0;
  local_c = iVar4;
  FUN_005048e0(&DAT_00744ff0);
  local_10 = FUN_0059fb80();
  if (local_10 == 0) {
    local_10 = FUN_0059fb80();
  }
  puVar5 = local_30;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar4 = *(int *)(iVar4 + 0x34);
  cVar2 = FUN_0050c930();
  if (cVar2 == '\0') {
    piVar3 = *(int **)(iVar4 + 0x14);
    piVar1 = piVar3 + *(short *)(iVar4 + 0x1c) * 2;
    if (piVar3 != (int *)0x0) {
      for (; piVar3 < piVar1; piVar3 = piVar3 + 2) {
        if (*piVar3 == 0x10c98090) {
          if (piVar3 != (int *)0x0) {
            iVar4 = piVar3[1];
            goto LAB_0050e015;
          }
          break;
        }
      }
    }
    iVar4 = 0;
LAB_0050e015:
    piVar3 = *(int **)(DAT_00745bb0 + 0x14);
    piVar1 = piVar3 + *(short *)(DAT_00745bb0 + 0x1c) * 2;
    if (piVar3 != (int *)0x0) {
      for (; piVar3 < piVar1; piVar3 = piVar3 + 2) {
        if (*piVar3 == 0x10c98090) {
          if (piVar3 != (int *)0x0) {
            iVar8 = piVar3[1];
            goto LAB_0050e041;
          }
          break;
        }
      }
    }
    iVar8 = 0;
LAB_0050e041:
    bVar10 = iVar4 == iVar8;
  }
  else {
    bVar10 = *(int *)(iVar4 + 8) == *(int *)(DAT_00745bb0 + 8);
  }
  if (bVar10) {
    FUN_00565da0(" (%s)",local_10);
  }
  pcVar6 = (char *)(local_c + 0x14);
  iVar4 = 0;
  if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
LAB_0050e0a2:
    puVar9 = &DAT_006c0bc4;
    do {
      pcVar6 = puVar9 + 1;
      puVar9 = puVar9 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)FUN_0059fb80();
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)FUN_0059fb80();
    }
    puVar5 = local_30;
    if (!bVar10) {
      puVar5 = (undefined4 *)&DAT_006b9172;
    }
  }
  else {
    do {
      iVar8 = iVar4 + 1;
      iVar4 = iVar4 + 1;
    } while (pcVar6[iVar8] != '\0');
    if (iVar4 < 1) goto LAB_0050e0a2;
    puVar5 = local_30;
    if (!bVar10) {
      puVar5 = (undefined4 *)&DAT_006b9172;
    }
  }
  FUN_004f6850(&DAT_006cc578,pcVar6,puVar5);
  if (DAT_006f88a8 == '\0') {
    if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0x7c5a7469);
      }
    }
    FUN_004f6910(iVar4);
    if (((*(int *)(param_1 + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
       (iVar4 = FUN_004ffb70(), iVar4 != 0)) goto LAB_0050e329;
    if (DAT_0073578c != 0) {
      uVar7 = FUN_004ef050(0xc53843de);
      FUN_004f6910(uVar7);
      return;
    }
  }
  else {
    cVar2 = FUN_0050d1f0(param_1);
    if (cVar2 == '\0') {
      FUN_00495f70();
    }
    else {
      FUN_00495fc0();
    }
    piVar3 = *(int **)(*(int *)(local_c + 0x34) + 0x14);
    piVar1 = piVar3 + *(short *)(*(int *)(local_c + 0x34) + 0x1c) * 2;
    if (piVar3 != (int *)0x0) {
      for (; (piVar3 < piVar1 && (*piVar3 != -0x14fefe1e)); piVar3 = piVar3 + 2) {
      }
    }
    iVar4 = FUN_0050dee0();
    if (iVar4 == 0) {
      FUN_00495f70();
    }
    else {
      FUN_00495fc0();
      FUN_004ad7b0(iVar4);
    }
    uVar7 = FUN_005042d0(&DAT_00744ff0);
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) && (*(int *)(iVar4 + 0x14) != 0)) {
      FUN_004f7c00(uVar7,0,0,*(int *)(iVar4 + 0x18));
    }
    if (((local_5 == '\0') && (DAT_00745e40 != 2)) &&
       (cVar2 = FUN_005a3570(&DAT_0075f344), cVar2 == '\0')) {
      FUN_00495fc0();
      uVar7 = FUN_005a08f0();
      FUN_004f6850(&DAT_006ca778,uVar7);
      return;
    }
    if (((*(int *)(param_1 + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
       (iVar4 = FUN_004ffb70(), iVar4 != 0)) goto LAB_0050e329;
    if (DAT_0073578c != 0) {
      uVar7 = FUN_004ef050(0x7c5a7469);
      FUN_004f6910(uVar7);
      return;
    }
  }
  iVar4 = 0;
LAB_0050e329:
  FUN_004f6910(iVar4);
  return;
}

