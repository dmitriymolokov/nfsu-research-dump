/* Decompiled from Speed.exe @ 004f5e90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f5e90(void)

{
  int iVar1;
  int unaff_ESI;
  
  *(undefined1 *)(unaff_ESI + 5) = 1;
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      FUN_004f5e00(unaff_ESI,iVar1);
    }
  }
  *(undefined1 *)(unaff_ESI + 5) = 0;
  return;
}

