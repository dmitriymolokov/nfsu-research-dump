/* Decompiled from Speed.exe @ 00416f00 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00416f00(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    if (unaff_EDI == 0) {
      unaff_EDI = FUN_004e6660();
    }
    if (unaff_EDI != 0) {
      FUN_004f8000(unaff_EDI);
      FUN_004e6ac0();
    }
  }
  return;
}

