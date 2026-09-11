/* Decompiled from Speed.exe @ 005d9016 */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005d9016(void *param_1,byte param_2)

{
  FUN_005d7ca4();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

