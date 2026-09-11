/* Decompiled from Speed.exe @ 00645860 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 __thiscall FUN_00645860(int *param_1,uint param_2)

{
  if (0x4000 < param_2) {
    param_2 = 0x4000;
  }
  if (param_1[0x17] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x617,
                 "!\"SetSpeed can not be called before AV_PLAYER::GetFirstFrame\"");
  }
  if (*param_1 != 0) {
    FUN_0064623d(param_2);
  }
  FUN_00646050(param_2);
  return 0;
}

