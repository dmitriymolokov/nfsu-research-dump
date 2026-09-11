/* Decompiled from Speed.exe @ 004f5740 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f5740(int param_1)

{
  int iVar1;
  int unaff_EDI;
  
  FUN_00575940("Init Package %s\n",*(undefined4 *)(unaff_EDI + 0xc));
  FUN_004ffa60(unaff_EDI);
  *(undefined1 *)(unaff_EDI + 0x14) = 1;
  if (*(char *)(unaff_EDI + 0x16) == '\0') {
    iVar1 = *(int *)(unaff_EDI + 0x40);
    *(undefined4 *)(unaff_EDI + 0x24) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(unaff_EDI + 0x28) = 0;
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_004ffeb0(iVar1,0);
    }
  }
  return;
}

