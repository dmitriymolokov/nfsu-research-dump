/* Decompiled from Speed.exe @ 00495e90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00495e90(void)

{
  void *_Memory;
  
  _Memory = DAT_00735ed8;
  if (DAT_00735ed8 != (void *)0x0) {
    FUN_00494d60(DAT_00735ed8);
    _free(_Memory);
  }
  DAT_00735ed8 = (void *)0x0;
  return;
}

