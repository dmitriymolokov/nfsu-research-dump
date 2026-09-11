/* Decompiled from Speed.exe @ 0050ee10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0050ee10(void)

{
  char cVar1;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  cVar1 = FUN_0050ee90(unaff_ESI);
  if ((cVar1 == '\0') && (DAT_00745e40 == 1)) {
    cVar1 = FUN_005a3570(&DAT_0075f344);
    if (cVar1 == '\0') {
      cVar1 = FUN_0050ed30(unaff_ESI);
      if (cVar1 != '\0') {
        return 1;
      }
      local_10 = 0x639;
      local_14 = 0x2c0344a3;
      local_c = 0;
      FUN_004dcbe0(&local_14,"GenericOKDialog.fng",*(undefined4 *)(unaff_ESI + 0xc));
    }
  }
  return 0;
}

