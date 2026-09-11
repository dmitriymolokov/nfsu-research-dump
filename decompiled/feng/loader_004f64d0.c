/* Decompiled from Speed.exe @ 004f64d0 */
/* Module: FEng_FE */
/* Ghidra DecompileVAs */


undefined4 FUN_004f64d0(void)

{
  int iVar1;
  
  if (DAT_0073578c != 0) {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 0x80);
    }
  }
  return 0;
}

