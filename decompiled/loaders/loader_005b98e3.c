/* Decompiled from Speed.exe @ 005b98e3 */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005b98e3(void *param_1,byte param_2)

{
  FUN_005b982e();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

