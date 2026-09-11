/* Decompiled from Speed.exe @ 005276a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void * __thiscall FUN_005276a0(void *param_1,byte param_2)

{
  FUN_005276c0();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}

