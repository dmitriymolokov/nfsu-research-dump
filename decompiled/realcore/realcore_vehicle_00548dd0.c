/* Decompiled from Speed.exe @ 00548dd0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00548dd0(int param_1,byte param_2,char param_3)

{
  uint uVar1;
  
  _DAT_0073fe7c = _DAT_0073fe7c + 1;
  _DAT_0073fe80 = _DAT_0073fe80 + param_1;
  if (param_3 == '\0') {
    _DAT_0074028c = _DAT_0074028c + 1;
    _DAT_00740290 = _DAT_00740290 + param_1;
  }
  else {
    _DAT_00740084 = _DAT_00740084 + 1;
    _DAT_00740088 = _DAT_00740088 + param_1;
  }
  uVar1 = (uint)param_2;
  (&DAT_0073e03c)[uVar1 * 0x81] = (&DAT_0073e03c)[uVar1 * 0x81] + 1;
  (&DAT_0073e040)[uVar1 * 0x81] = (&DAT_0073e040)[uVar1 * 0x81] + param_1;
  return;
}

