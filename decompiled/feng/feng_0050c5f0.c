/* Decompiled from Speed.exe @ 0050c5f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_0050c5f0(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  local_8 = param_1;
  if (0x9120409e < param_2) {
    if (param_2 != 0xb5971bf1) {
      if (param_2 != 0xc98356ba) {
        return;
      }
      FUN_004f89d0();
      FUN_004f7d30();
      return;
    }
LAB_0050c7c8:
    FUN_0050c430();
    return;
  }
  if (param_2 == 0x9120409e) goto LAB_0050c7c8;
  if (param_2 != 0xc407210) {
    if (param_2 != 0x911ab364) {
      return;
    }
    FUN_0050c530(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    DAT_006f88a4 = 0;
  }
  else {
    DAT_006f88a4 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 8);
  }
  switch(DAT_006f88a4) {
  case 2:
    iVar2 = 0xb;
    break;
  default:
    goto switchD_0050c657_caseD_3;
  case 4:
    iVar2 = 0x11;
    break;
  case 5:
    iVar2 = 0xf;
    break;
  case 8:
    bVar1 = 0 < DAT_00745730;
    iVar2 = DAT_00745b9c;
    if (DAT_00745b9c == 0) {
      FUN_004acce0(0xc,DAT_00745730);
      iVar2 = FUN_00504630();
      if ((iVar2 == 0) || (*(char *)(iVar2 + 0x11) == '\0')) goto LAB_0050c73b;
LAB_0050c6e2:
      FUN_00504450();
    }
LAB_0050c6ee:
    if (*(char *)(iVar2 + 0x11) != '\0') goto LAB_0050c6f5;
    goto LAB_0050c73b;
  case 0xb:
    bVar1 = 0 < DAT_00745748;
    iVar2 = DAT_00745bac;
    if (DAT_00745bac != 0) goto LAB_0050c6ee;
    FUN_004acce0(0x10,DAT_00745748);
    iVar2 = FUN_00504630();
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x11) != '\0')) goto LAB_0050c6e2;
LAB_0050c73b:
    if (!bVar1) {
      local_14 = 0x639;
      local_18 = 0x1fe3a85a;
      local_10 = 0;
      FUN_004dcbe0(&local_18,"GenericOKDialog.fng",*(undefined4 *)(local_8 + 0xc));
      return;
    }
LAB_0050c6f5:
    FUN_0050c590();
    return;
  }
  if (((&DAT_00745b6c)[iVar2] == 0) || (*(char *)((&DAT_00745b6c)[iVar2] + 0x11) == '\0')) {
    local_14 = 0x639;
    local_18 = 0x1fe3a85a;
    local_10 = 0;
    FUN_004dcbe0(&local_18,"GenericOKDialog.fng",*(undefined4 *)(param_1 + 0xc));
    return;
  }
switchD_0050c657_caseD_3:
  FUN_0050c590();
  return;
}

