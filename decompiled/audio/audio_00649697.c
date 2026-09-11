/* Decompiled from Speed.exe @ 00649697 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_00649697(void)

{
  int iVar1;
  int local_10;
  
  iVar1 = FUN_00649880();
  if (iVar1 == 0) {
    iVar1 = FUN_00649cd0();
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = iVar1 + 8;
    }
    FUN_00649c20(local_10);
    *(undefined4 *)(iVar1 + 0x10) = 1;
  }
  else {
    FUN_00642450(
                "MAD_CODEC_INTERNAL::CreateB() out of frames did you call CODEC::ReleaseFrame( FRAME *Frame )\n"
                );
    iVar1 = 0;
  }
  return iVar1;
}

