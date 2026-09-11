/* Decompiled from Speed.exe @ 0050dc60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050dc60(int param_1)

{
  int iVar1;
  char cVar2;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x40);
  if (param_1 == -0x6edfbf62) {
    if ((iVar1 != *(int *)(unaff_EDI + 0x44)) && (*(int *)(unaff_EDI + 0x44) != unaff_EDI + 0x44)) {
      *(undefined4 *)(unaff_EDI + 0x40) = *(undefined4 *)(iVar1 + 4);
    }
  }
  else if (((param_1 == -0x4a68e40f) &&
           (*(undefined4 **)(unaff_EDI + 0x40) != *(undefined4 **)(unaff_EDI + 0x48))) &&
          (*(int *)(unaff_EDI + 0x44) != unaff_EDI + 0x44)) {
    *(undefined4 *)(unaff_EDI + 0x40) = **(undefined4 **)(unaff_EDI + 0x40);
  }
  if (iVar1 != *(int *)(unaff_EDI + 0x40)) {
    FUN_0050d130();
    cVar2 = FUN_0050d1f0(unaff_EDI);
    if (cVar2 != '\0') {
      FUN_0050d360();
    }
    FUN_00504450();
    FUN_004f8910();
    FUN_0050df60(unaff_EDI);
    if (param_1 == -0x6edfbf62) {
      FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
      return;
    }
    FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
  }
  return;
}

