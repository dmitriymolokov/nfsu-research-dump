/* Decompiled from Speed.exe @ 004e0010 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void * __thiscall FUN_004e0010(void *param_1,byte param_2)

{
  FUN_004e0000();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

