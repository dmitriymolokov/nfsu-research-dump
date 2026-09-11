/* Decompiled from Speed.exe @ 005210f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint FUN_005210f0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_0064c000(&PTR_s_MUSIC_STREAM_006f2210);
  uVar2 = FUN_0064c000(&PTR_s_AMBIENT_STEREO_STREAM_006f2218);
  uVar3 = FUN_0064c000(&PTR_s_AMBIENT_MONO_STREAM_006f2220);
  uVar4 = FUN_0064c000(&PTR_s_TCAR_MONO_STREAM_006f2228);
  uVar5 = FUN_0064c000(&PTR_s_SPEECH_STREAM_006f2230);
  return uVar5 | uVar1 | uVar2 | uVar3 | uVar4;
}

