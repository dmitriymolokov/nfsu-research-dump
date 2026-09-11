/* Decompiled from Speed.exe @ 005d90a8 */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005d90a8(void *param_1,byte param_2)

{
  FUN_005d824f();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

