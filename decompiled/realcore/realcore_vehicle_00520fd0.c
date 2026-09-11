/* Decompiled from Speed.exe @ 00520fd0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint FUN_00520fd0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_0064c000(&PTR_s_PLAYER_CAR_006f8158);
  uVar2 = FUN_0064c000(&PTR_s_AI_CAR_006f8160);
  uVar3 = FUN_0064c000(&PTR_s_DYNAMIC_LOAD_006f8168);
  return uVar3 | uVar1 | uVar2;
}

