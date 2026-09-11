/* Decompiled from Speed.exe @ 005d9032 */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005d9032(void *param_1,byte param_2)

{
  FUN_005d7df3();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

