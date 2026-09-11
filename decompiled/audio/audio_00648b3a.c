/* Decompiled from Speed.exe @ 00648b3a */
/* Module: Audio */
/* Ghidra DecompileAll */


void __thiscall FUN_00648b3a(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/decoder/cmn/rcmpbase.cpp",0x6b,
                 "m_codec != NULL");
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(param_2);
  return;
}

