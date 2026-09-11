/* Decompiled from Speed.exe @ 0041c3d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041c3d0(void)

{
  void *_Memory;
  void *_Memory_00;
  
  if (DAT_00736228 != (void *)0x0) {
    FUN_0041c7a0();
  }
  _Memory_00 = DAT_00736228;
  _Memory = DAT_00736224;
  if (DAT_00736224 != (void *)0x0) {
    if (DAT_00736228 != (void *)0x0) {
      FUN_00404cc0(DAT_00736228);
      _free(_Memory_00);
    }
    _free(_Memory);
    DAT_00736224 = (void *)0x0;
  }
  return;
}

