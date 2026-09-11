/* Decompiled from Speed.exe @ 00557a00 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void * __thiscall FUN_00557a00(void *param_1,byte param_2)

{
  FUN_00557a20();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

