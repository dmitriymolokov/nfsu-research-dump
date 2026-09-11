/* Decompiled from Speed.exe @ 004f9dd0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9dd0(void)

{
  int iVar1;
  int unaff_EDI;
  
  if ((_DAT_006cc7dc < (float)(DAT_0073ad3c - *(int *)(unaff_EDI + 0x40)) * _DAT_006cca38) &&
     (*(char *)(unaff_EDI + 0x44) != '\0')) {
    *(undefined1 *)(unaff_EDI + 0x44) = 0;
    if (((*(int *)(unaff_EDI + 0xc) == 0) ||
        ((iVar1 = FUN_004f65d0(), iVar1 == 0 || (iVar1 = FUN_004ffb70(), iVar1 == 0)))) &&
       (DAT_0073578c != 0)) {
      FUN_004ef050(0x12dfbc68);
      FUN_004f75b0(*(undefined4 *)(unaff_EDI + 0x48));
      return;
    }
    FUN_004f75b0(*(undefined4 *)(unaff_EDI + 0x48));
  }
  return;
}

