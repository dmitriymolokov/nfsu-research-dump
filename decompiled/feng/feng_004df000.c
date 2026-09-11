/* Decompiled from Speed.exe @ 004df000 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004df000(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  puVar1 = *(undefined4 **)(unaff_ESI + 0x48);
  if (unaff_EDI == -0x6edfbf62) {
    piVar2 = (int *)puVar1[1];
    if (piVar2 == (int *)(unaff_ESI + 0x40)) {
      piVar2 = *(int **)(unaff_ESI + 0x44);
    }
  }
  else {
    if (unaff_EDI != -0x4a68e40f) goto LAB_004df030;
    piVar2 = (int *)*puVar1;
    if (piVar2 == (int *)(unaff_ESI + 0x40)) {
      piVar2 = *(int **)(unaff_ESI + 0x40);
    }
  }
  *(int **)(unaff_ESI + 0x48) = piVar2;
LAB_004df030:
  if (puVar1 != *(undefined4 **)(unaff_ESI + 0x48)) {
    FUN_004f8340(*(undefined4 *)(unaff_ESI + 0xc));
    FUN_0059fa20();
    FUN_004df080();
    return;
  }
  return;
}

