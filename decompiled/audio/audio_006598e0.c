/* Decompiled from Speed.exe @ 006598e0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_006598e0(byte param_1)

{
  FUN_0064e520();
  if ((param_1 & 0x10) != 0) {
    FUN_00653a20((int)DAT_00713f64,DAT_00713f68,DAT_00713f6c);
    FUN_0064e540();
    return;
  }
  if ((param_1 & 4) != 0) {
    if (DAT_00713f50 == 1) {
      FUN_0065a740(DAT_00713d9a,DAT_00713f54);
      FUN_0064e540();
      return;
    }
    FUN_0065a720();
  }
  FUN_0064e540();
  return;
}

