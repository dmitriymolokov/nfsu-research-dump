/* Decompiled from Speed.exe @ 004d76a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d76a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (DAT_00758928 == 1) {
    pcVar3 = "Chyron_alpine.fng";
  }
  else if (DAT_00758928 == 2) {
    pcVar3 = "Chyron_kenwood.fng";
  }
  else if (DAT_00758928 == 3) {
    pcVar3 = "Chyron_audiobahn.fng";
  }
  else {
    pcVar3 = "Chyron.fng";
  }
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar1 = *(int *)(DAT_0073578c + 8);
    iVar2 = iVar1 + 0xdc;
    if (iVar2 != 0) {
      iVar2 = FUN_004fd1e0(iVar2);
      if (iVar2 != 0) goto LAB_004d7717;
    }
    FUN_004eede0(iVar1,pcVar3,0xff,0);
  }
LAB_004d7717:
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x14) != 0)) {
    FUN_004d7580(param_1,param_3,param_4);
  }
  return;
}

