/* Decompiled from Speed.exe @ 0059c1b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_0059c1b0(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) &&
     (iVar1 = FUN_00456e90(*(undefined4 *)(unaff_ESI + 4),DAT_0078a2fc,0xff,0xff), iVar1 != -1)) {
    return iVar1;
  }
  iVar1 = *(int *)(*(int *)(unaff_ESI + 4) + 0x10);
  if (*(char *)(iVar1 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  return (int)*(char *)(iVar1 + 0x424);
}

