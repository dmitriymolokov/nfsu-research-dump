/* Decompiled from Speed.exe @ 00521060 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint FUN_00521060(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_0064c000(&PTR_s_PlayCommonSample_006f8190);
  uVar2 = FUN_0064c000(&PTR_s_PlayFrontEndSample_006f8198);
  uVar3 = FUN_0064c000(&PTR_s_PlayFrontEndSample_loop_006f81a0);
  uVar4 = FUN_0064c000(&PTR_s_FEDriveOn_006f81a8);
  return uVar4 | uVar1 | uVar2 | uVar3;
}

