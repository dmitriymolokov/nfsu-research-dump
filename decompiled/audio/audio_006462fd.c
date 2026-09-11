/* Decompiled from Speed.exe @ 006462fd */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 __thiscall FUN_006462fd(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0064f810();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/audioplayer.cpp",0x77,
                 "SNDSYS_inited()");
  }
  if (*(int *)(param_1 + 0xc) == -1) {
    uVar2 = 0;
  }
  else {
    FUN_0064e520();
    uVar2 = FUN_00650f40(*(undefined4 *)(param_1 + 0xc),param_2);
    FUN_0064e540();
  }
  return uVar2;
}

