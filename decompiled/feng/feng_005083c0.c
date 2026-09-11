/* Decompiled from Speed.exe @ 005083c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_005083c0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  FUN_004af5d0();
  iVar1 = *(int *)(unaff_EDI + 0x40);
  if (param_1 == -0x6edfbf62) {
    if ((((iVar1 != *(int *)(unaff_EDI + 0x44)) && (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0)
         ) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x50fe5db4,0,0,*(int *)(iVar2 + 0x18));
    }
    if ((*(int *)(unaff_EDI + 0x40) != *(int *)(unaff_EDI + 0x44)) &&
       (*(int *)(unaff_EDI + 0x44) != unaff_EDI + 0x44)) {
      *(undefined4 *)(unaff_EDI + 0x40) = *(undefined4 *)(*(int *)(unaff_EDI + 0x40) + 4);
    }
  }
  else if (param_1 == -0x4a68e40f) {
    if (iVar1 != *(int *)(unaff_EDI + 0x48)) {
      FUN_004c96c0(0x50fe5db4);
    }
    if ((*(undefined4 **)(unaff_EDI + 0x40) != *(undefined4 **)(unaff_EDI + 0x48)) &&
       (*(int *)(unaff_EDI + 0x44) != unaff_EDI + 0x44)) {
      *(undefined4 *)(unaff_EDI + 0x40) = **(undefined4 **)(unaff_EDI + 0x40);
    }
  }
  iVar2 = *(int *)(unaff_EDI + 0x40);
  if (iVar1 != iVar2) {
    FUN_004f8910();
    FUN_00507ec0(unaff_EDI);
    if (*(char *)(*(int *)(iVar2 + 0xc) + 0x10) == '\x05') {
      FUN_00504450();
    }
    if (DAT_00745e40 == 1) {
      FUN_00507e10(unaff_EDI);
    }
    FUN_00504450();
    if (param_1 == -0x6edfbf62) {
      FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
      return;
    }
    FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
  }
  return;
}

