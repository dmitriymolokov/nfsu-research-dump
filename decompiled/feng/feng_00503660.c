/* Decompiled from Speed.exe @ 00503660 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void * __thiscall FUN_00503660(void *param_1,byte param_2)

{
  FUN_00503680(param_1);
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

