/* Decompiled from Speed.exe @ 00511d70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4
FUN_00511d70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_8c [16];
  undefined4 local_4c [16];
  int local_c;
  char local_5;
  
  local_5 = FUN_00506160();
  iVar1 = DAT_00735748;
  iVar3 = 0;
  piVar2 = &DAT_007066a0;
  do {
    if (*piVar2 == DAT_00735748) {
      puVar4 = &DAT_007066a0 + iVar3 * 8;
      goto LAB_00511da4;
    }
    piVar2 = piVar2 + 8;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x706780);
  puVar4 = (undefined4 *)0x0;
LAB_00511da4:
  *param_1 = puVar4[1];
  *param_2 = puVar4[3];
  local_c = FUN_004acce0();
  param_1 = (undefined4 *)0x0;
  param_2 = (undefined4 *)0x0;
  puVar4 = local_4c;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_8c;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  switch(iVar1) {
  case 2:
  case 3:
    if (local_5 != '\0') {
      if (local_5 == '\x01') {
        FUN_00567ce0();
        break;
      }
      FUN_00567ce0();
    }
  case 0:
  case 1:
    break;
  case 4:
  case 5:
    if (local_5 != '\0') {
      FUN_00567ce0();
    }
    break;
  case 6:
    break;
  default:
    goto switchD_00511de9_default;
  }
  FUN_00567ce0();
switchD_00511de9_default:
  iVar3 = local_c * 0xc90;
  iVar1 = iVar3 + DAT_00734588;
  if (iVar1 != 0) {
    param_1 = (undefined4 *)FUN_004f42f0(local_4c,iVar1);
  }
  iVar3 = DAT_00734588 + iVar3;
  if (iVar3 != 0) {
    param_2 = (undefined4 *)FUN_004f42f0(local_8c,iVar3);
  }
  *param_3 = param_1;
  *param_4 = param_2;
  return 1;
}

