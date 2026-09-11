/* Decompiled from Speed.exe @ 00557510 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void * __thiscall FUN_00557510(void *param_1,byte param_2)

{
  FUN_00557500();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

