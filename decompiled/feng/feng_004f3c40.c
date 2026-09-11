/* Decompiled from Speed.exe @ 004f3c40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004f3c40(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0x10);
  if (*piVar1 == 0x30203) {
    return *(undefined4 *)(unaff_EDI + 0xc);
  }
  if (*piVar1 == 0x30210) {
    iVar2 = FUN_00565b60(piVar1[5],0,0,0);
    *(int *)(unaff_EDI + 0xc) = iVar2;
    if (iVar2 != 0) {
      if (piVar1[3] == 0x504d4f43) {
        FUN_0058d2c0(iVar2);
        return *(undefined4 *)(unaff_EDI + 0xc);
      }
      if (piVar1[3] == 0x5a4c444a) {
        FUN_0058d190();
      }
    }
    return *(undefined4 *)(unaff_EDI + 0xc);
  }
  return 0;
}

