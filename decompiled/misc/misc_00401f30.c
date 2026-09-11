/* Decompiled from Speed.exe @ 00401f30 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00401f5b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00401f30(undefined4 param_1,uint *param_2,float param_3)

{
  uint uVar1;
  
  uVar1 = *param_2 << 0x11 ^ *param_2;
  uVar1 = uVar1 ^ uVar1 >> 0xd;
  uVar1 = uVar1 ^ uVar1 << 5;
  *param_2 = uVar1;
  return (float10)(uVar1 & 0x7fffffff) * (float10)_DAT_006cca54 * (float10)param_3;
}

