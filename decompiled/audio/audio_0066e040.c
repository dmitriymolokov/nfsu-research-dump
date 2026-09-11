/* Decompiled from Speed.exe @ 0066e040 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0066e040(int *param_1)

{
  if (*param_1 != -1) {
    Ordinal_3(*param_1);
    *param_1 = -1;
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    _free((void *)param_1[0xc]);
    param_1[0xc] = 0;
  }
  param_1[7] = 4;
  return 0;
}

