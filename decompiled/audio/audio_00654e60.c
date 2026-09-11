/* Decompiled from Speed.exe @ 00654e60 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_00654e60(uint param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_00713ee4 != '\0') {
    uVar2 = param_1 & 0xfffffe07;
    if ((param_1 & 0x1f8) == 0) {
      param_1 = param_1 | 0x1f8;
    }
    if ((param_1 & 0x10) != 0) {
      (&DAT_00713f52)[uVar2 * 0x14] = param_2;
    }
    if ((param_1 & 0x180) != 0) {
      (&DAT_00713f66)[uVar2 * 0x14] = param_2;
    }
    FUN_0064e520();
    iVar1 = 0;
    if (0 < DAT_00713ee8) {
      iVar3 = 0;
      do {
        FUN_00658e60(*(undefined4 *)(iVar3 + DAT_00713f48),uVar2,
                     (int)*(char *)(uVar2 + 0x61 + iVar3 + DAT_00713f48));
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x8c;
      } while (iVar1 < DAT_00713ee8);
    }
    FUN_0064e540();
    return 0;
  }
  return 0xfffffff6;
}

