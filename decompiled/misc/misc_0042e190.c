/* Decompiled from Speed.exe @ 0042e190 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042e190(void)

{
  int *piVar1;
  int unaff_EDI;
  
  if ((*(int *)(unaff_EDI + 4) != 0) && (*(int *)(*(int *)(unaff_EDI + 4) + 0x24) != 2)) {
    FUN_00425fe0();
    piVar1 = *(int **)(*(int *)(unaff_EDI + 4) + 0x30);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(unaff_EDI + 8));
      (**(code **)(*piVar1 + 0x20))();
      FUN_00461520();
      return;
    }
  }
  return;
}

