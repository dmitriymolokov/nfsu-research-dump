/* Decompiled from Speed.exe @ 00644b88 */
/* Module: Audio */
/* Ghidra DecompileModule */


/* WARNING: Removing unreachable block (ram,0x00644c7d) */

void __thiscall
FUN_00644b88(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0064f810();
  if (iVar2 == 0) {
    param_11 = 1;
  }
  FUN_00641a10(param_1,0,0x94);
  param_1[6] = param_10;
  param_1[7] = param_11;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[3] = param_2;
  param_1[4] = param_6;
  param_1[0x24] = 0;
  cVar1 = FUN_00645dc0();
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x3e4,
                 "!\"you must fill in the RCMP::rcmp_sys struct first!!!\"");
  }
  if (param_6 == 0) {
    *(undefined1 *)(param_1 + 5) = 0;
    uVar3 = FUN_00645e00("AV::VideoStreamBuffer",param_4,0,0,DAT_00712028);
    param_1[1] = uVar3;
    param_1[2] = 0;
    uVar3 = FUN_004124f0(2,3,2,param_1[1],param_4);
    param_1[0xc] = uVar3;
    uVar3 = FUN_00412900(param_1[0xc],2);
    param_1[0xd] = uVar3;
    FUN_0040a880(param_1[0xd],0x98,0x34);
    FUN_0040a880(param_1[0xc],0x98,0x34);
    FUN_004127a0(param_1[0xc],1,0xff,0x4d,1);
    FUN_004127a0(param_1[0xc],3,0,0,0xfffffffe);
    if (param_1[7] == 0) {
      FUN_004127a0(param_1[0xc],2,0xffff,0x4353,2);
    }
    else {
      FUN_004127a0(param_1[0xc],2,0xffff,0x4353,0xffffffff);
    }
    if (param_1[6] == 1) {
      uVar3 = FUN_006836a0(param_2,DAT_00712028);
      param_1[9] = uVar3;
      if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x451,
                     "m_AyncVideoFileHandle != 0");
      }
    }
    else if (param_1[6] == 0) {
      uVar3 = FUN_00412930(param_1[0xc],param_2,param_5,0);
      param_1[0xe] = uVar3;
      if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x45a,
                     "m_VideoStreamRequestID != 0");
      }
    }
    else {
      if (param_1[6] != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x467,
                     "!\"bad LoadMode\"");
      }
      uVar3 = FUN_004129f0(param_1[0xc],param_1[3],param_3,0);
      param_1[0xe] = uVar3;
      if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x463,
                     "m_VideoStreamRequestID != 0");
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 5) = 1;
    uVar3 = FUN_00645e00("AV::VideoStreamBuffer",param_4,0,0,DAT_00712028);
    param_1[1] = uVar3;
    uVar3 = FUN_00645e00("AV::AudioStreamBuffer",param_8,0,0,DAT_00712028);
    param_1[2] = uVar3;
    uVar3 = FUN_004124f0(2,2,1,param_1[1],param_4);
    param_1[0xc] = uVar3;
    uVar3 = FUN_004124f0(2,2,1,param_1[2],param_8);
    param_1[0xd] = uVar3;
    FUN_0040a880(param_1[0xd],0x98,0x34);
    FUN_0040a880(param_1[0xc],0x98,0x34);
    FUN_004127a0(param_1[0xc],1,0xff,0x4d,1);
    FUN_004127a0(param_1[0xc],2,0,0,0xfffffffe);
    if (param_1[7] == 0) {
      FUN_004127a0(param_1[0xd],1,0xffff,0x4353,1);
    }
    else {
      FUN_004127a0(param_1[0xd],1,0xffff,0x4353,0xffffffff);
    }
    FUN_004127a0(param_1[0xd],2,0,0,0xfffffffe);
    if (param_1[6] == 1) {
      uVar3 = FUN_006836a0(param_6,DAT_00712028);
      param_1[0xb] = uVar3;
      uVar3 = FUN_006836a0(param_2,DAT_00712028);
      param_1[9] = uVar3;
      if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x411,
                     "m_AyncVideoFileHandle != 0");
      }
      if (param_1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x412,
                     "m_AyncAudioFileHandle != 0");
      }
    }
    else if (param_1[6] == 0) {
      uVar3 = FUN_00412930(param_1[0xd],param_6,param_9,0);
      param_1[0xf] = uVar3;
      uVar3 = FUN_00412930(param_1[0xc],param_2,param_5,0);
      param_1[0xe] = uVar3;
      if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x41d,
                     "m_VideoStreamRequestID != 0");
      }
      if (param_1[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x41e,
                     "m_AudioStreamRequestID != 0");
      }
    }
    else {
      if (param_1[6] != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x42d,
                     "!\"bad LoadMode\"");
      }
      uVar3 = FUN_004129f0(param_1[0xc],param_1[3],param_3,0);
      param_1[0xe] = uVar3;
      uVar3 = FUN_004129f0(param_1[0xd],param_1[4],param_7,0);
      param_1[0xf] = uVar3;
      if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x429,
                     "m_VideoStreamRequestID != 0");
      }
    }
  }
  return;
}

