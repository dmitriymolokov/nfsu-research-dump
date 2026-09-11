/* Decompiled from Speed.exe @ 0064629f */
/* Module: Audio */
/* Ghidra DecompileModule */


undefined4 __fastcall FUN_0064629f(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0064f810();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/audioplayer.cpp",0x65,
                 "SNDSYS_inited()");
  }
  if (*(int *)(param_1 + 0x10) == -1) {
    uVar2 = 0;
  }
  else {
    FUN_0064e520();
    uVar2 = FUN_00650d00(*(undefined4 *)(param_1 + 0x10),0);
    FUN_0064e540();
  }
  return uVar2;
}

