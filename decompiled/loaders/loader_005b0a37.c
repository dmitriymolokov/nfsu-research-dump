/* Decompiled from Speed.exe @ 005b0a37 */
/* Module: Loader */
/* Ghidra DecompileAll */


void * __thiscall FUN_005b0a37(void *param_1,byte param_2)

{
  FUN_005b0a08();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

