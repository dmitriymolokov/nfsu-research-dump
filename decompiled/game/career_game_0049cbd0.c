/* Decompiled from Speed.exe @ 0049cbd0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049cbd0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  
  iVar1 = *(int *)(DAT_0073619c + 0x24);
  iVar2 = *(int *)(unaff_ESI + 0x13c);
  if (unaff_EBX == -0x6edfbf62) {
    *(int *)(unaff_ESI + 0x13c) = iVar2 + -1;
    if (iVar2 + -1 < 1) {
      *(undefined4 *)(unaff_ESI + 0x13c) = 1;
    }
  }
  else if ((unaff_EBX == -0x4a68e40f) &&
          (*(int *)(unaff_ESI + 0x13c) = iVar2 + 1, iVar1 < iVar2 + 1)) {
    *(int *)(unaff_ESI + 0x13c) = iVar1;
  }
  FUN_0049c820(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x13c));
  if (iVar2 != *(int *)(unaff_ESI + 0x13c)) {
    if (unaff_EBX == -0x6edfbf62) {
      FUN_004f8340(*(undefined4 *)(unaff_ESI + 0xc));
      return;
    }
    FUN_004f8340(*(undefined4 *)(unaff_ESI + 0xc));
  }
  return;
}

