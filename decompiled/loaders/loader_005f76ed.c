/* Decompiled from Speed.exe @ 005f76ed */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005f76ed(void *param_1,byte param_2)

{
  FUN_005f7658();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

