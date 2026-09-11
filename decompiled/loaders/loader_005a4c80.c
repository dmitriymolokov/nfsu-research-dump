/* Decompiled from Speed.exe @ 005a4c80 */
/* Module: Loader */
/* Ghidra DecompileAll */


void fn_005a4c80(void)

{
  void *_Memory;
  
  _Memory = DAT_00733f6c;
  if ((DAT_00733f6c != (void *)0x0) && (*(char *)((int)DAT_00733f6c + 0x30) == '\0')) {
    DAT_00733f74 = 0;
    FUN_005a4590();
    _free(_Memory);
    DAT_00733f6c = (void *)0x0;
    _free(DAT_00733f68);
    DAT_00733f68 = (void *)0x0;
  }
  if (DAT_007363b4 != '\0') {
    ResumeThread(DAT_0070f460);
  }
  return;
}

