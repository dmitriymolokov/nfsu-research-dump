/* Decompiled from Speed.exe @ 005210b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint FUN_005210b0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_0064c000(&PTR_s_FX_ROADNOISE_006f81b8);
  uVar2 = FUN_0064c000(&PTR_s_ENV_STATIC_006f81c0);
  uVar3 = FUN_0064c000(&PTR_s_FX_WIND_006f81c8);
  return uVar3 | uVar1 | uVar2;
}

