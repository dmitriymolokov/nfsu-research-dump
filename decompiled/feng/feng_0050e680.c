/* Decompiled from Speed.exe @ 0050e680 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0050e680(void)

{
  char cVar1;
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (DAT_00745e40 == 1) {
    cVar1 = FUN_005a3570(&DAT_0075f344);
    if (cVar1 == '\0') {
      cVar1 = FUN_0050e5c0(unaff_EDI,unaff_ESI);
      if (cVar1 != '\0') {
        return 1;
      }
      local_10 = 0x639;
      local_14 = 0x2c0344a3;
      local_c = 0;
      FUN_004dcbe0(&local_14,"GenericOKDialog.fng",*(undefined4 *)(unaff_EDI + 0xc));
    }
  }
  return 0;
}

