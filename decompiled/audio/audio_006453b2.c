/* Decompiled from Speed.exe @ 006453b2 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int __thiscall FUN_006453b2(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_24 [32];
  
  FUN_0040a880(param_1[0xd],0x97,0x33);
  FUN_0040a880(param_1[0xc],0x97,0x33);
  if (param_1[9] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("Please Wait for video data to finish loading...\n");
  }
  if (param_1[0xb] != 0) {
    if ((char)param_1[5] != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x520,
                   "m_SndFromDifferentFile==1");
    }
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("Please Wait for audio data to finish loading...\n");
  }
  if ((char)param_1[5] == '\0') {
    param_1[0xf] = param_1[0xe];
  }
  if (param_1[7] == 0) {
    iVar2 = FUN_00645f00(0x14);
    if (iVar2 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_00646100(param_1[0xd],param_1[0xf]);
    }
    *param_1 = local_38;
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x535,&DAT_006a943c);
    }
    iVar2 = FUN_00647b90();
    param_1[0x15] = (uint)(-1 < iVar2);
  }
  else {
    param_1[0x15] = 0;
  }
  param_1[0x19] = 0;
  cVar1 = FUN_00645dc0();
  if (cVar1 != '\0') {
    FUN_00645eb0(param_1);
    FUN_00648c5f(param_1 + 0x18,FUN_00645d22,FUN_00645d7a,param_2);
    iVar2 = FUN_00645ed0(0x1c);
    if (iVar2 == 0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_0064894b(local_24);
    }
    param_1[0x19] = local_3c;
    if (param_1[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x54f,"m_pdecoder");
    }
    FUN_006497d0();
  }
  iVar2 = FUN_00648ac8(0);
  param_1[0x1d] = iVar2;
  iVar2 = FUN_00645f30(0x18);
  if (iVar2 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_00645f60();
  }
  param_1[0x17] = local_40;
  if (param_1[0x17] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x558,"m_MSTimer");
  }
  iVar2 = FUN_00645fa0();
  param_1[0x13] = iVar2;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x10] = param_3;
  if (*param_1 != 0) {
    FUN_0064629f();
  }
  FUN_00645860(0x1000);
  return param_1[0x1d];
}

