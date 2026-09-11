/* Decompiled from Speed.exe @ 00648dd5 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void __fastcall FUN_00648dd5(int param_1)

{
  if (0 < *(int *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80(" RCMP:: Warning: in ~MAD_FRAME() m_ReferenceCount >= 1 \n");
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005a4510(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 8;
  }
  FUN_00649a50(param_1);
  FUN_006497d0();
  return;
}

