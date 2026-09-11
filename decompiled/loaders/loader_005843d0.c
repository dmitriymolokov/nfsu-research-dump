/* Decompiled from Speed.exe @ 005843d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005843d0(void *param_1,byte param_2)

{
  FUN_005843f0();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

