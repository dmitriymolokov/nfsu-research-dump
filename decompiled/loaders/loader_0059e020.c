/* Decompiled from Speed.exe @ 0059e020 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0059e020(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 8);
  if ((0 < iVar2) && (iVar2 < 0xb)) {
    piVar4 = *(int **)(&DAT_006ef214 + iVar2 * 4);
    uVar3 = *(undefined4 *)(unaff_EDI + 4);
    iVar2 = *piVar4;
    while (iVar2 != 7) {
      uVar3 = FUN_0059df20(uVar3);
      piVar1 = piVar4 + 3;
      piVar4 = piVar4 + 3;
      iVar2 = *piVar1;
    }
  }
  *(undefined4 *)(unaff_EDI + 8) = 0;
  return;
}

