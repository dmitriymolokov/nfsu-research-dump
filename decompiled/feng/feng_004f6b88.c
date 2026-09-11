/* Decompiled from Speed.exe @ 004f6b70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f6b70(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if ((unaff_EDI != 0) && (iVar2 = *(int *)(unaff_EDI + 0x4c), iVar2 != 0)) {
    while (iVar1 = FUN_004fd230(), *(int *)(iVar2 + 0x30) != iVar1) {
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) {
        return;
      }
    }
    if (iVar2 != 0) {
      if (iVar2 != *(int *)(unaff_EDI + 0x54)) {
        *(int *)(unaff_EDI + 0x54) = iVar2;
        FUN_004ff030(unaff_EDI);
        *(undefined4 *)(*(int *)(unaff_EDI + 0x54) + 0x10) = 0;
      }
      if (param_2 != '\0') {
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
    }
  }
  return;
}

