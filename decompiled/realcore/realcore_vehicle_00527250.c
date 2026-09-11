/* Decompiled from Speed.exe @ 00527250 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void * __thiscall FUN_00527250(void *param_1,byte param_2)

{
  FUN_00527270();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

