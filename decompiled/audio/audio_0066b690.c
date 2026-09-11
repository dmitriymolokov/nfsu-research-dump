/* Decompiled from Speed.exe @ 0066b690 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066b690(void)

{
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x80) == 1) || (*(int *)(unaff_ESI + 0x80) == 2)) {
    FUN_0066b1e0();
  }
  FUN_0066b4d0();
  FUN_0066b490();
  FUN_0066b610();
  if ((*(int *)(unaff_ESI + 0x200) == 0) && (*(int *)(unaff_ESI + 0x204) != 0)) {
    *(int *)(unaff_ESI + 0x200) = *(int *)(unaff_ESI + 0x200) + 1;
    if (*(code **)(unaff_ESI + 0x208) != (code *)0x0) {
      (**(code **)(unaff_ESI + 0x208))();
    }
    *(int *)(unaff_ESI + 0x200) = *(int *)(unaff_ESI + 0x200) + -1;
    *(undefined4 *)(unaff_ESI + 0x204) = 0;
  }
  return;
}

