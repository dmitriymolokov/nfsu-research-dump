/* Decompiled from Speed.exe @ 005a3570 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005a3570(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  
  if (DAT_00735ec1 != '\0') {
    return 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_005a03d0();
  if (iVar1 == -1) {
    return 0;
  }
  if (*(char *)(extraout_ECX + 0x11) == '\0') {
    return 1;
  }
  switch(iVar1) {
  case 3:
    FUN_004bbd70();
    uVar2 = FUN_005a3630(param_2);
    return uVar2;
  default:
    uVar2 = FUN_005a3630(param_2);
    return uVar2;
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
    uVar2 = FUN_005a3630(param_2);
    return uVar2;
  }
}

