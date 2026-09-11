/* Decompiled from Speed.exe @ 00564a80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Removing unreachable block (ram,0x00564abb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00564a80(float param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_006f227c % 0x7fffffff;
  uVar2 = DAT_006f227c ^ 0x1d872b41;
  uVar1 = uVar2 >> 5 ^ uVar2;
  DAT_006f227c = uVar1 << 0x1b ^ uVar1 ^ uVar2;
  return (float10)uVar3 * (float10)_DAT_006b5e7c * (float10)param_1;
}

