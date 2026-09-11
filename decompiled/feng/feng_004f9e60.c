/* Decompiled from Speed.exe @ 004f9e60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f9e60(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(char *)(unaff_EDI + 0x44) == '\0') {
    uVar1 = *(uint *)(unaff_EDI + 0x48);
    *(undefined1 *)(unaff_EDI + 0x44) = 1;
    if ((((*(int *)(unaff_EDI + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
        (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0x12dfbc68);
    }
    FUN_004f75b0(uVar1 >> 1);
    *(undefined4 *)(unaff_EDI + 0x40) = DAT_0073ad3c;
    return;
  }
  *(undefined4 *)(unaff_EDI + 0x40) = DAT_0073ad3c;
  return;
}

