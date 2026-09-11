/* Decompiled from Speed.exe @ 00520f80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint FUN_00520f80(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_0064c000(&PTR_s_FX_NITROUS_01_006f2238);
  uVar2 = FUN_0064c000(&PTR_s_FX_SHIFTING_01_006f2240);
  uVar3 = FUN_0064c000(&PTR_s_FX_SPARKCHATTER_006f2248);
  uVar4 = FUN_0064c000(&PTR_s_FX_SKID_006f2250);
  return uVar4 | uVar1 | uVar2 | uVar3;
}

