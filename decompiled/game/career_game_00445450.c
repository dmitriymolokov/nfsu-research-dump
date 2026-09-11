/* Decompiled from Speed.exe @ 00445450 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00445450(short param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[4];
  while (iVar1 != 0) {
    FUN_004483c0();
    iVar1 = unaff_EDI[4];
  }
  iVar1 = 0;
  if (0 < unaff_EDI[1]) {
    iVar2 = *unaff_EDI;
    while (*(short *)(iVar2 + 8) != param_1) {
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x38;
      if (unaff_EDI[1] <= iVar1) {
        FUN_004443e0();
        return;
      }
    }
    FUN_00448370();
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    unaff_EDI[3] = unaff_EDI[3] + -1;
  }
  FUN_004443e0();
  return;
}

