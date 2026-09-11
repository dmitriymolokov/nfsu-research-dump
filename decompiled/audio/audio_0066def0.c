/* Decompiled from Speed.exe @ 0066def0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066def0(int *param_1)

{
  if (*param_1 != -1) {
    Ordinal_3(*param_1);
  }
  Sleep(0x32);
  Ordinal_116();
  if ((void *)param_1[0xf] != (void *)0x0) {
    _free((void *)param_1[0xf]);
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    _free((void *)param_1[0xc]);
  }
  _free(param_1);
  return;
}

