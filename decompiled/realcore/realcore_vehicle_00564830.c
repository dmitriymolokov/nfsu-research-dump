/* Decompiled from Speed.exe @ 00564830 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 FUN_00564830(void)

{
  BOOL BVar1;
  void *unaff_ESI;
  
  BVar1 = IsBadReadPtr(unaff_ESI,1);
  if (BVar1 != 0) {
    BVar1 = IsBadWritePtr(unaff_ESI,1);
    if (BVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

