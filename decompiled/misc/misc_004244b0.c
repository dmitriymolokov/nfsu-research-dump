/* Decompiled from Speed.exe @ 004244b0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004244b0(void)

{
  int *_Memory;
  int unaff_ESI;
  
  if (*(undefined4 **)(unaff_ESI + 0x54) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_ESI + 0x54))(1);
  }
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  if (*(void **)(unaff_ESI + 0x58) != (void *)0x0) {
    _free(*(void **)(unaff_ESI + 0x58));
  }
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  if (*(void **)(unaff_ESI + 0x98) != (void *)0x0) {
    _free(*(void **)(unaff_ESI + 0x98));
  }
  _Memory = *(int **)(unaff_ESI + 0xa8);
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  if (_Memory != (int *)0x0) {
    if (*_Memory != 0) {
      FUN_00565ce0();
    }
    _free(_Memory);
  }
  *(undefined4 *)(unaff_ESI + 0xa8) = 0;
  if (*(int *)(unaff_ESI + 0x94) != 0) {
    FUN_00565ce0();
  }
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  if (*(int *)(unaff_ESI + 0x90) != 0) {
    FUN_00565ce0();
  }
  *(undefined4 *)(unaff_ESI + 0x90) = 0;
  return;
}

