/* Decompiled from Speed.exe @ 005fbf9d */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005fbf9d(void *param_1,byte param_2)

{
  FUN_005f7f76();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

