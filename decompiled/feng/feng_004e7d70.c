/* Decompiled from Speed.exe @ 004e7d70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004e7d70(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EDI;
  
  puVar1 = *(undefined4 **)(unaff_EDI + 0x84);
  if (param_1 == -0x6edfbf62) {
    if (puVar1 == *(undefined4 **)(unaff_EDI + 0x7c)) goto LAB_004e7da0;
    uVar2 = puVar1[1];
  }
  else {
    if ((param_1 != -0x4a68e40f) || (puVar1 == *(undefined4 **)(unaff_EDI + 0x80)))
    goto LAB_004e7da0;
    uVar2 = *puVar1;
  }
  *(undefined4 *)(unaff_EDI + 0x84) = uVar2;
LAB_004e7da0:
  if (puVar1 != *(undefined4 **)(unaff_EDI + 0x84)) {
    FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
    FUN_004f8910();
    FUN_004e7cf0();
    FUN_004e7c80();
    return;
  }
  return;
}

