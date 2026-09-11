/* Decompiled from Speed.exe @ 004bd5e0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004bd5e0(void)

{
  int iVar1;
  
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f6850(iVar1);
  iVar1 = FUN_004ab510();
  iVar1 = *(int *)(iVar1 + 0x20);
  if (((iVar1 == 1) || (iVar1 == 3)) || (iVar1 == 5)) {
    iVar1 = FUN_0059fb80();
    if (iVar1 == 0) {
      iVar1 = FUN_0059fb80();
    }
    FUN_004f6850(iVar1);
  }
  return;
}

