/* Decompiled from Speed.exe @ 005d916c */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005d916c(void *param_1,byte param_2)

{
  FUN_005d8edb();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

