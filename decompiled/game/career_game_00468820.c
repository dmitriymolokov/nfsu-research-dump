/* Decompiled from Speed.exe @ 00468820 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_00468820(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  if (param_1 < *(char *)(unaff_EDI + 0x1c)) {
    iVar2 = 0;
    if (DAT_00779be0 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_00779be0 + -0x250;
    }
    iVar1 = FUN_00421970();
    while (iVar3 != iVar1) {
      if ((*(int *)(iVar3 + 0x264) != 0) &&
         ((*(int *)(iVar3 + 600) == unaff_EDI || (*(int *)(iVar3 + 0x25c) == unaff_EDI)))) {
        if (iVar2 == param_1) {
          return *(undefined4 *)(iVar3 + 0x264);
        }
        iVar2 = iVar2 + 1;
      }
      if (*(int *)(iVar3 + 0x250) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x250) + -0x250;
      }
    }
  }
  return 0;
}

