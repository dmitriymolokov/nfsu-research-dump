/* Decompiled from Speed.exe @ 0050e600 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint FUN_0050e600(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (DAT_00745e40 == 1) {
    cVar1 = *(char *)(unaff_ESI + 0x10);
    iVar3 = 0;
    if (cVar1 == '\x06') goto LAB_0050e640;
    uVar2 = FUN_005a3570(&DAT_0075f344);
    if ((char)uVar2 == '\0') goto LAB_0050e671;
  }
  else {
    uVar2 = DAT_00745e40;
    if (DAT_00745e40 != 2) goto LAB_0050e671;
    cVar1 = *(char *)(unaff_ESI + 0x10);
  }
  iVar3 = (int)cVar1;
  if ((&DAT_00745b6c)[iVar3] == unaff_ESI) {
    local_c = 0;
    local_14 = 0x368294c0;
    local_10 = 0x639;
    uVar2 = FUN_004dcbe0(&local_14,"GenericOKDialog.fng",*(undefined4 *)(unaff_EDI + 0xc));
LAB_0050e671:
    return uVar2 & 0xffffff00;
  }
LAB_0050e640:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

