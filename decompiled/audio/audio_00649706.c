/* Decompiled from Speed.exe @ 00649706 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00649706(int param_1)

{
  int local_10;
  
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  if (*(int *)(param_1 + 0x10) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/decoder/cmn/rcmp_mad_codec.cpp",0x163,
                 "Frame->m_ReferenceCount >= 0");
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    FUN_00649a70();
    if (param_1 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = param_1 + 8;
    }
    FUN_00649c20(local_10);
  }
  return;
}

