/* Decompiled from Speed.exe @ 00508560 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint FUN_00508560(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar2 = FUN_00507e10(unaff_EDI);
  if ((char)uVar2 != '\0') {
    return uVar2 & 0xffffff00;
  }
  if (DAT_00745e40 == 1) {
    cVar1 = *(char *)(unaff_ESI + 0x10);
    iVar3 = 0;
    if ((cVar1 != '\x06') && (cVar1 != '\x05')) {
      uVar2 = FUN_005a3570(&DAT_0075f344);
      if ((char)uVar2 == '\0') goto LAB_00508616;
      iVar3 = (int)cVar1;
      if ((&DAT_00745b6c)[iVar3] == unaff_ESI) {
        uVar2 = FUN_004eba00(0,0);
        return uVar2 & 0xffffff00;
      }
    }
LAB_005085ac:
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  uVar2 = DAT_00745e40;
  if (DAT_00745e40 == 2) {
    cVar1 = *(char *)(unaff_ESI + 0x10);
    iVar3 = 0;
    if (((cVar1 == '\x06') || (cVar1 == '\x05')) || ((&DAT_00745b6c)[cVar1] != unaff_ESI))
    goto LAB_005085ac;
    local_10 = 0x639;
    local_14 = 0x368294c0;
    local_c = 0;
    uVar2 = FUN_004dcbe0(&local_14,"GenericOKDialog.fng",*(undefined4 *)(unaff_EDI + 0xc));
  }
LAB_00508616:
  return uVar2 & 0xffffff00;
}

