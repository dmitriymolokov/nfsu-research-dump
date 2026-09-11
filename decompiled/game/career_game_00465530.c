/* Decompiled from Speed.exe @ 00465530 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465530(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x3bc) != 0) && (*(int *)(unaff_ESI + 0x3bc) != 0x7fffffff)) {
    uVar1 = FUN_00674898();
    *(undefined4 *)(unaff_ESI + 0x3b8) = uVar1;
    *(undefined4 *)(unaff_ESI + 0x3b4) = 0;
    *(undefined4 *)(unaff_ESI + 0x3bc) = 0;
  }
  return;
}

