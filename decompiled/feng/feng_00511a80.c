/* Decompiled from Speed.exe @ 00511a80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void * __thiscall FUN_00511a80(void *param_1,byte param_2)

{
  FUN_00511a70();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

