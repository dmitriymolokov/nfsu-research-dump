/* Decompiled from Speed.exe @ 0050ed90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint FUN_0050ed90(int param_1)

{
  char cVar1;
  uint uVar2;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar2 = DAT_00745e40;
  if (DAT_00745e40 == 1) {
    cVar1 = *(char *)(unaff_ESI + 0x10);
    if (cVar1 != '\x06') {
      uVar2 = FUN_005a3570(&DAT_0075f344);
      if ((char)uVar2 != '\0') {
        uVar2 = (int)cVar1;
        if ((&DAT_00745b6c)[cVar1] != unaff_ESI) goto LAB_0050ee00;
        local_10 = 0x639;
        local_14 = 0x368294c0;
        local_c = 0;
        uVar2 = FUN_004dcbe0(&local_14,"GenericOKDialog.fng",*(undefined4 *)(param_1 + 0xc));
      }
LAB_0050edf2:
      return uVar2 & 0xffffff00;
    }
  }
  else if (DAT_00745e40 != 2) goto LAB_0050edf2;
LAB_0050ee00:
  return CONCAT31((int3)(uVar2 >> 8),1);
}

