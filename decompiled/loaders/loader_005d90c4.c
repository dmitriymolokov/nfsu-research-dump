/* Decompiled from Speed.exe @ 005d90c4 */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005d90c4(void *param_1,byte param_2)

{
  FUN_005d8486();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

