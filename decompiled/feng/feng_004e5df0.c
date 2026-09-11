/* Decompiled from Speed.exe @ 004e5df0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e5df0(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688888;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c3194;
  local_4 = 0;
  if (*(char *)(param_1 + 0x26) == '\0') {
    switch(DAT_006fa1a0) {
    case 0x1f:
      if (param_1[0x22] == 0) goto switchD_004e5e3c_default;
      FUN_005044b0(param_1[0x22],0);
      FUN_005044b0(param_1[0x23],0);
      FUN_005044b0(param_1[0x24],0);
      break;
    case 0x20:
      if (param_1[0x22] == 0) goto switchD_004e5e3c_default;
      FUN_005044b0(param_1[0x22],0);
      FUN_005044b0(param_1[0x23],0);
      FUN_005044b0(param_1[0x24],0);
      break;
    case 0x21:
      if (param_1[0x22] == 0) goto switchD_004e5e3c_default;
      FUN_005044b0(param_1[0x22],0);
      FUN_005044b0(param_1[0x23],0);
      FUN_005044b0(param_1[0x24],0);
      break;
    case 0x22:
      if (param_1[0x22] == 0) goto switchD_004e5e3c_default;
      FUN_005044b0(param_1[0x22],0);
      FUN_005044b0(param_1[0x23],0);
      FUN_005044b0(param_1[0x24],0);
      break;
    default:
      goto switchD_004e5e3c_default;
    }
    FUN_005044b0(param_1[0x25],0);
  }
switchD_004e5e3c_default:
  FUN_004323f0(&DAT_00745000,&DAT_00745720);
  iVar1 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,&DAT_00745720);
  _DAT_0072cc80 = 2;
  if (iVar1 != 0) {
    FUN_004b0e50(iVar1,&DAT_00748850,2);
  }
  local_4 = 0xffffffff;
  FUN_004e2170();
  ExceptionList = pvStack_c;
  return;
}

