/* Decompiled from Speed.exe @ 00405760 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00405760(void)

{
  void *_Memory;
  
  if (DAT_007187c8 != (int *)0x0) {
    (**(code **)(*DAT_007187c8 + 0x20))(DAT_007187c8);
    (**(code **)(*DAT_007187c8 + 8))(DAT_007187c8);
    DAT_007187c8 = (int *)0x0;
  }
  _Memory = DAT_00736500;
  if (DAT_00736500 != (void *)0x0) {
    FUN_00419cc0(DAT_00736500);
    _free(_Memory);
  }
  if (DAT_00736510 != (int *)0x0) {
    (**(code **)(*DAT_00736510 + 8))(DAT_00736510);
    DAT_00736510 = (int *)0x0;
  }
  return;
}

