/* Decompiled from Speed.exe @ 005d904e */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005d904e(void *param_1,byte param_2)

{
  FUN_005d7f77();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

