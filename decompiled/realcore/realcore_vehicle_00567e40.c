/* Decompiled from Speed.exe @ 00567e40 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void * __thiscall FUN_00567e40(void *param_1,byte param_2)

{
  FUN_00567e20();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

