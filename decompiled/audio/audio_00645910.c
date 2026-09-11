/* Decompiled from Speed.exe @ 00645910 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00645945) */

undefined4 __thiscall FUN_00645910(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avplayer.cpp",0x65e,
                 "!\"You can set Volume if you are not using sound\"");
  }
  uVar1 = FUN_006462fd(param_2);
  return uVar1;
}

