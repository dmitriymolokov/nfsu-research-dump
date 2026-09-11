/* Decompiled from Speed.exe @ 00510980 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_00510980(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;
  
  local_5 = '\x01';
  if (0x928374ab < param_2) {
    if (param_2 != 0xb5971bf1) {
      if (param_2 != 0xc98356ba) {
        return;
      }
      FUN_004af5d0();
      FUN_004f89d0();
      FUN_004f7d30();
      if (*(char *)(param_1 + 0x88) == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x89) == '\0') {
        FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
        return;
      }
      DAT_00735750 = 0;
      FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
      return;
    }
LAB_005109bc:
    FUN_00510860();
    return;
  }
  if (param_2 == 0x928374ab) {
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    FUN_005044b0(0,0);
    *(undefined1 *)(param_1 + 0x89) = 1;
    *(undefined1 *)(param_1 + 0x88) = 1;
    return;
  }
  if (param_2 != 0xc407210) {
    if (param_2 == 0x911ab364) {
      FUN_00507020(param_1);
      return;
    }
    if (param_2 != 0x9120409e) {
      return;
    }
    goto LAB_005109bc;
  }
  if (*(char *)(*(int *)(param_1 + 0x58) + 0x18) != '\0') {
    return;
  }
  DAT_0073574c = *(int *)(*(int *)(param_1 + 0x40) + 8);
  FUN_00504320(*(undefined4 *)(param_1 + 0xc));
  iVar4 = DAT_00735748;
  switch(DAT_00735748) {
  case 2:
  case 3:
  case 6:
    local_5 = '\0';
    break;
  case 4:
  case 5:
    local_5 = DAT_0073574c == 0;
  }
  iVar2 = FUN_004acce0();
  iVar2 = iVar2 * 0xc90 + DAT_00734588;
  if (iVar4 == 6) {
    cVar1 = FUN_005088c0();
    if (cVar1 == '\0') goto LAB_00510b51;
    iVar3 = FUN_004f42f0(PTR_s__s_DECAL_HOOD_RECT_MEDIUM_006f88ec,iVar2);
    iVar2 = FUN_004f42f0(PTR_s__s_DECAL_HOOD_RECT_SMALL_006f88f0,iVar2);
    iVar4 = DAT_00745bb8;
  }
  else if (iVar4 == 4) {
    cVar1 = FUN_00508880();
    if (cVar1 == '\0') goto LAB_00510b51;
    iVar3 = FUN_004f42f0(PTR_s__s_DECAL_LEFT_QUARTER_RECT_MEDIU_006f88bc,iVar2);
    iVar2 = FUN_004f42f0(PTR_s__s_DECAL_LEFT_QUARTER_RECT_SMALL_006f88c0,iVar2);
    iVar4 = DAT_00745bcc;
  }
  else {
    if ((iVar4 != 5) || (cVar1 = FUN_005088a0(), cVar1 == '\0')) goto LAB_00510b51;
    iVar3 = FUN_004f42f0(PTR_s__s_DECAL_RIGHT_QUARTER_RECT_MEDI_006f88c4,iVar2);
    iVar2 = FUN_004f42f0(PTR_s__s_DECAL_RIGHT_QUARTER_RECT_SMAL_006f88c8,iVar2);
    iVar4 = DAT_00745bd0;
  }
  if (iVar4 != 0) {
    iVar5 = 0;
    if ((*(int *)(iVar4 + 8) != iVar3) && (*(int *)(iVar4 + 8) == iVar2)) {
      iVar5 = 1;
    }
    if (DAT_0073574c != iVar5) {
      local_10 = 0;
      local_c = 0;
      local_2c = 0x571dddc6;
      local_24 = 0x928374ab;
      local_28 = 0x639;
      local_1c = 0;
      local_20 = 0x541389e5;
      local_18 = 0;
      local_14 = 0xb8a7c6cc;
      FUN_004dc6e0(&local_2c,"GenericDialog.fng",*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
LAB_00510b51:
  if (local_5 == '\0') {
    FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  DAT_00735750 = 0;
  FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
  return;
}

