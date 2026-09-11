/* Decompiled from Speed.exe @ 00547dc0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00547dc0(void)

{
  if (DAT_006f3d9c == -1) {
    if (DAT_007301cc != (code *)0x0) {
      (*DAT_007301cc)();
      DAT_007354e4 = 0;
      FUN_00547ae0();
      return;
    }
  }
  else {
    FUN_0043ba60(DAT_006f3d9c,0);
  }
  DAT_007354e4 = 0;
  FUN_00547ae0();
  return;
}

