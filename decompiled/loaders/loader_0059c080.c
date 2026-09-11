/* Decompiled from Speed.exe @ 0059c080 */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_0059c080(void *param_1,byte param_2)

{
  FUN_0059c0a0();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

