/* Decompiled from Speed.exe @ 00454240 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


undefined4 FUN_00454240(void)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0044d570();
  iVar1 = FUN_005a6ea0();
  if ((iVar1 != 0xff) && (*(int *)(unaff_EBX + 0x394) == iVar1)) {
    FUN_005a7340();
    FUN_005aad90();
    iVar1 = FUN_00442950();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

