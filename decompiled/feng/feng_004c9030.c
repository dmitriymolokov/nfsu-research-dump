/* Decompiled from Speed.exe @ 004c9030 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004c9030(int param_1)

{
  int iVar1;
  int unaff_EDI;
  
  if ((*(char *)(unaff_EDI + 0x88) == '\0') && (*(int *)(unaff_EDI + 0x80) != unaff_EDI + 0x80)) {
    iVar1 = *(int *)(unaff_EDI + 0x7c);
    if (param_1 == -0x6edfbf62) {
      if ((iVar1 != *(int *)(unaff_EDI + 0x80)) && (*(int *)(unaff_EDI + 0x80) != unaff_EDI + 0x80))
      {
        *(undefined4 *)(unaff_EDI + 0x7c) = *(undefined4 *)(iVar1 + 4);
      }
    }
    else if (((param_1 == -0x4a68e40f) &&
             (*(undefined4 **)(unaff_EDI + 0x7c) != *(undefined4 **)(unaff_EDI + 0x84))) &&
            (*(int *)(unaff_EDI + 0x80) != unaff_EDI + 0x80)) {
      *(undefined4 *)(unaff_EDI + 0x7c) = **(undefined4 **)(unaff_EDI + 0x7c);
    }
    if (iVar1 != *(int *)(unaff_EDI + 0x7c)) {
      FUN_004f8910();
      FUN_004c90c0();
    }
  }
  return;
}

