/* Decompiled from Speed.exe @ 004ea460 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ea460(int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x40);
  if (param_1 == -0x6edfbf62) {
    if (iVar1 != 0) {
      *(int *)(unaff_ESI + 0x40) = iVar1 + -1;
    }
  }
  else if ((param_1 == -0x4a68e40f) && (iVar1 != 4)) {
    *(int *)(unaff_ESI + 0x40) = iVar1 + 1;
  }
  if (*(int *)(unaff_ESI + 0x40) == 0) {
    FUN_00414a10();
  }
  else {
    FUN_00414a60();
  }
  if (*(int *)(unaff_ESI + 0x40) == 4) {
    FUN_00414a10();
  }
  else {
    FUN_00414a60();
  }
  if (iVar1 != *(int *)(unaff_ESI + 0x40)) {
    FUN_004f8340(*(undefined4 *)(unaff_ESI + 0xc));
    FUN_004ea510();
  }
  return;
}

