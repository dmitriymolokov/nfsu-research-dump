/* Decompiled from Speed.exe @ 00649d90 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00649d90(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_8;
  
  if (DAT_00713440 == 0) {
    FUN_00649eae();
  }
  iVar1 = FUN_00649e59(param_1,2);
  uVar2 = FUN_00649e59(param_1 + 2,2);
  DAT_00712c38 = iVar1 << 0x10 | uVar2;
  DAT_00712030 = 0x20;
  DAT_00713a48 = param_1 + 4;
  DAT_00713444 = param_2;
  DAT_00712438 = FUN_00649e9b(DAT_006aa7b8 << 0x10,DAT_006e9938);
  for (local_8 = 1; local_8 < 0x40; local_8 = local_8 + 1) {
    uVar3 = FUN_00649e9b(param_3 * (&DAT_006aa7b8)[local_8] * 0x2000,(&DAT_006e9938)[local_8]);
    (&DAT_00712438)[local_8] = uVar3;
  }
  return;
}

