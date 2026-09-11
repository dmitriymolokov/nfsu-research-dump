/* Decompiled from Speed.exe @ 004ea090 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ea090(int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x4c);
  if (param_1 == -0x6edfbf62) {
    if (iVar1 != 0) {
      *(int *)(unaff_ESI + 0x4c) = iVar1 + -1;
    }
  }
  else if ((param_1 == -0x4a68e40f) && (iVar1 != 3)) {
    *(int *)(unaff_ESI + 0x4c) = iVar1 + 1;
  }
  if (*(int *)(unaff_ESI + 0x4c) == 0) {
    FUN_00414a10();
  }
  else {
    FUN_00414a60();
  }
  if (*(int *)(unaff_ESI + 0x4c) == 3) {
    FUN_00414a10();
  }
  else {
    FUN_00414a60();
  }
  if (*(int *)(unaff_ESI + 0x4c) != iVar1) {
    FUN_004e9e90(unaff_ESI);
    if (param_1 == -0x6edfbf62) {
      FUN_004f8340(*(undefined4 *)(unaff_ESI + 0xc));
      return;
    }
    FUN_004f8340(*(undefined4 *)(unaff_ESI + 0xc));
  }
  return;
}

