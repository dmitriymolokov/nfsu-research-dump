/* Decompiled from Speed.exe @ 004d7580 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d7580(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
  
  FUN_004f6850();
  FUN_004f6850(param_2);
  FUN_004f6850(param_1);
  if (DAT_00735e1c == '\0') {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) {
      return;
    }
    *(undefined1 *)(unaff_ESI + 0x45) = 1;
    *(undefined4 *)(unaff_ESI + 0x40) = DAT_0073ad3c;
  }
  else {
    *(undefined1 *)(unaff_ESI + 0x45) = 1;
    *(undefined4 *)(unaff_ESI + 0x40) = DAT_0073ad3c;
  }
  FUN_004f6bd0(&DAT_006c515c,1);
  return;
}

