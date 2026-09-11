/* Decompiled from Speed.exe @ 004198b0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004198b0(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_0071d89c;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar2 = 0;
      }
    }
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x71d8a4);
  if (DAT_00736338 != (int *)0x0) {
    (**(code **)(*DAT_00736338 + 8))(DAT_00736338);
    DAT_00736338 = (int *)0x0;
  }
  return;
}

