/* Decompiled from Speed.exe @ 00548d70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00548d70(int param_1,byte param_2,char param_3)

{
  uint uVar1;
  
  _DAT_0073fe74 = _DAT_0073fe74 + 1;
  _DAT_0073fe78 = _DAT_0073fe78 + param_1;
  if (param_3 == '\0') {
    _DAT_00740284 = _DAT_00740284 + 1;
    _DAT_00740288 = _DAT_00740288 + param_1;
  }
  else {
    _DAT_0074007c = _DAT_0074007c + 1;
    _DAT_00740080 = _DAT_00740080 + param_1;
  }
  uVar1 = (uint)param_2;
  (&DAT_0073e034)[uVar1 * 0x81] = (&DAT_0073e034)[uVar1 * 0x81] + 1;
  (&DAT_0073e038)[uVar1 * 0x81] = (&DAT_0073e038)[uVar1 * 0x81] + param_1;
  return;
}

