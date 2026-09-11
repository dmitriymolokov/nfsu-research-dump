/* Decompiled from Speed.exe @ 005101f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_005101f0(int param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  char local_5;
  
  local_c = param_1;
  if (0x9120409e < param_2) {
    if (param_2 != 0xb5971bf1) {
      if (param_2 != 0xc98356ba) {
        return;
      }
      FUN_004f89d0();
      FUN_004f7d30();
      return;
    }
LAB_005105b3:
    FUN_0050fee0();
    return;
  }
  if (param_2 == 0x9120409e) goto LAB_005105b3;
  if (param_2 != 0xc407210) {
    if (param_2 != 0x780885f9) {
      if (param_2 != 0x911ab364) {
        return;
      }
      FUN_00507020(param_1);
      return;
    }
    uVar11 = 0xffffffff;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 8;
    FUN_004acce0(8,0,0,0xffffffff);
    piVar4 = (int *)FUN_0057ced0(&DAT_0073ad40,uVar8,uVar9,uVar10,uVar11);
    if (piVar4 == (int *)0x0) {
      return;
    }
    bVar2 = true;
    do {
      if (!bVar2) break;
      pcVar5 = "STOCK";
      do {
        cVar3 = pcVar5[*piVar4 + -0x6c3200];
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        if ((cVar3 == '\0') || (cVar1 == '\0')) break;
      } while (cVar3 == cVar1);
      if (cVar3 == cVar1) {
        bVar2 = false;
      }
      else {
        uVar10 = 0xffffffff;
        uVar9 = 0;
        uVar8 = 8;
        FUN_004acce0(8,0,0xffffffff);
        piVar4 = (int *)FUN_004b3940(&DAT_0073ad40,piVar4,uVar8,uVar9,uVar10);
      }
    } while (piVar4 != (int *)0x0);
    FUN_005044b0(piVar4,0);
    return;
  }
  local_10 = *(int *)(param_1 + 0x40);
  if (*(char *)(*(int *)(param_1 + 0x58) + 0x18) != '\0') {
    return;
  }
  cVar3 = FUN_005a1550(&DAT_0075eef8,1);
  if (cVar3 == '\0') {
    cVar3 = FUN_0059e5c0();
    bVar2 = false;
    if (cVar3 != '\0') goto LAB_0051031b;
  }
  else {
LAB_0051031b:
    bVar2 = true;
  }
  cVar3 = FUN_005a1550(&DAT_0075eef8,1);
  if (cVar3 == '\0') {
    cVar3 = FUN_0059e5c0();
    bVar7 = false;
    if (cVar3 != '\0') goto LAB_00510344;
  }
  else {
LAB_00510344:
    bVar7 = true;
  }
  if ((bVar2) || (DAT_00735ec1 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar7) || (bVar7 = false, DAT_00735ec1 != '\0')) {
    bVar7 = true;
  }
  uVar8 = *(undefined4 *)(local_10 + 8);
  switch(uVar8) {
  default:
    goto switchD_00510372_caseD_0;
  case 2:
  case 3:
  case 4:
  case 5:
    break;
  case 6:
    bVar2 = bVar7;
  }
  if (!bVar2) {
    if (DAT_006f1dd8 == 0) {
      return;
    }
    if (*(int **)(DAT_007356a8 + 0xc0) == (int *)0x0) {
      return;
    }
    (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(7);
    return;
  }
switchD_00510372_caseD_0:
  local_5 = '\x01';
  bVar2 = false;
  DAT_00735748 = uVar8;
  cVar3 = FUN_00506160();
  bVar7 = cVar3 != '\0';
  switch(uVar8) {
  case 0:
    DAT_00735750 = 0;
    DAT_0073574c = 0;
    bVar2 = true;
    break;
  case 1:
    DAT_00735750 = 0;
    DAT_0073574c = 0;
    bVar2 = true;
    break;
  case 2:
    DAT_0073574c = 0;
    break;
  case 3:
    DAT_0073574c = 0;
    break;
  case 4:
    local_5 = bVar7;
    bVar2 = bVar7;
    if (bVar7) {
      DAT_0073574c = 0;
      DAT_00735750 = 0;
    }
    break;
  case 5:
    local_5 = bVar7;
    bVar2 = bVar7;
    if (bVar7) {
      DAT_0073574c = 0;
      DAT_00735750 = 0;
    }
    break;
  case 6:
    local_5 = '\0';
    if (DAT_0074546c != 0) {
      local_10 = FUN_00567c70();
      iVar6 = FUN_00567c70();
      if (iVar6 != local_10) {
        local_24 = 0xed716986;
        local_20 = 0xed716986;
        local_18 = 0;
        local_14 = 0;
        local_34 = 0x8c5249b2;
        local_2c = 0x780885f9;
        local_30 = 0x639;
        local_28 = 0x541389e5;
        local_1c = 0xb8a7c6cc;
        FUN_004dc6e0(&local_34,"GenericDialog.fng",*(undefined4 *)(local_c + 0xc));
        return;
      }
    }
  }
  iVar6 = FUN_004b2330();
  if (iVar6 != 0) {
    FUN_004b0150();
  }
  iVar6 = local_c;
  FUN_00504320(*(undefined4 *)(local_c + 0xc));
  if (local_5 == '\0') {
    FUN_004f6360(*(undefined4 *)(iVar6 + 0xc));
    return;
  }
  if (!bVar2) {
    FUN_004f6360(*(undefined4 *)(iVar6 + 0xc));
    return;
  }
  FUN_004f6360(*(undefined4 *)(iVar6 + 0xc));
  return;
}

