/* Decompiled from Speed.exe @ 0050b8f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050b8f0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  FUN_004af5d0();
  iVar1 = *(int *)(unaff_EDI + 0x40);
  if (unaff_EBX == -0x6edfbf62) {
    if (iVar1 != *(int *)(unaff_EDI + 0x44)) {
      iVar2 = FUN_004f3f90(&DAT_00746104);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)
         ) {
        (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x50fe5db4,0,0,*(int *)(iVar2 + 0x18));
      }
    }
    if ((*(int *)(unaff_EDI + 0x40) != *(int *)(unaff_EDI + 0x44)) &&
       (*(int *)(unaff_EDI + 0x44) != unaff_EDI + 0x44)) {
      *(undefined4 *)(unaff_EDI + 0x40) = *(undefined4 *)(*(int *)(unaff_EDI + 0x40) + 4);
    }
  }
  else if (unaff_EBX == -0x4a68e40f) {
    if (iVar1 != *(int *)(unaff_EDI + 0x48)) {
      FUN_004c96c0(0x50fe5db4);
    }
    if ((*(undefined4 **)(unaff_EDI + 0x40) != *(undefined4 **)(unaff_EDI + 0x48)) &&
       (*(int *)(unaff_EDI + 0x44) != unaff_EDI + 0x44)) {
      *(undefined4 *)(unaff_EDI + 0x40) = **(undefined4 **)(unaff_EDI + 0x40);
    }
  }
  if (iVar1 != *(int *)(unaff_EDI + 0x40)) {
    FUN_004f8910();
    *(undefined4 *)(unaff_EDI + 0x88) = DAT_0073ad3c;
    FUN_0050b9e0(unaff_EDI);
    if (unaff_EBX == -0x6edfbf62) {
      FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
      return;
    }
    FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
  }
  return;
}

