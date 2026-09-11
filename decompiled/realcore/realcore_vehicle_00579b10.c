/* Decompiled from Speed.exe @ 00579b10 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void * __thiscall FUN_00579b10(void *param_1,byte param_2)

{
  FUN_00579b30(param_1);
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

