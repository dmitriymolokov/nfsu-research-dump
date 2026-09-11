/* Decompiled from Speed.exe @ 00564a50 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


uint FUN_00564a50(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = DAT_006f227c % param_1;
  uVar1 = DAT_006f227c ^ 0x1d872b41;
  uVar2 = uVar1 >> 5 ^ uVar1;
  DAT_006f227c = uVar2 << 0x1b ^ uVar2 ^ uVar1;
  return param_1;
}

