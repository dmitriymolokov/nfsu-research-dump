/* Decompiled from Speed.exe @ 004e3d80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004e3d80(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if (param_2 < 1) {
    return 0;
  }
  if (3 < param_2) {
    return 0;
  }
  switch(param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  default:
    goto switchD_004e3dd4_default;
  }
  FUN_00567ce0();
  if (param_2 == 1) {
    puVar3 = &DAT_006c59e8;
LAB_004e3e69:
    FUN_00567de0(puVar3);
  }
  else {
    if (param_2 == 2) {
      puVar3 = &DAT_006c59e4;
      goto LAB_004e3e69;
    }
    if (param_2 == 3) {
      puVar3 = &DAT_006c59e0;
      goto LAB_004e3e69;
    }
  }
  uVar2 = FUN_00567c70();
  cVar1 = FUN_004aa9d0(&DAT_007588c4,0,uVar2);
  if (cVar1 != '\0') {
    if ((char)param_3 != '\0') {
      uVar2 = FUN_004e3b10(param_3);
      return uVar2;
    }
    return 1;
  }
switchD_004e3dd4_default:
  return 0;
}

