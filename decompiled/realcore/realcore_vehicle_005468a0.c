/* Decompiled from Speed.exe @ 005468a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005468a0(void)

{
  undefined1 local_40c [1036];
  
  DAT_007402a0 = DAT_0073ad3c;
  FUN_00548ee0();
  _DAT_00730170 = _DAT_006f1f3c & 0xffff;
  _DAT_0073de24 = (undefined2)_DAT_006f1f3c;
  DAT_00730164 = 0;
  DAT_0073017c = 0;
  DAT_00730174 = 10000;
  DAT_00730180 = FUN_00546d10;
  DAT_00730168 = &LAB_00546d70;
  DAT_0073016c = &LAB_00546e00;
  DAT_00730178 = &LAB_00546e60;
  _DAT_0073de20 = FUN_00662a90(0x61646472,0,0);
  DAT_00735500 = 1;
  FUN_004392a0();
  FUN_004389b0(0xd);
  FUN_00548840(DAT_00735500);
  FUN_00547910(0xd,local_40c,1);
  DAT_006f3da0 = FUN_00546cb0();
  return;
}

