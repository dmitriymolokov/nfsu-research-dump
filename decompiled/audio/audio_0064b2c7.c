/* Decompiled from Speed.exe @ 0064b2c7 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_0064b2c7(int param_1)

{
  int iVar1;
  
  DAT_00712c38 = DAT_00712c38 << ((byte)param_1 & 0x1f);
  DAT_00712030 = DAT_00712030 - param_1;
  if (DAT_00712030 < 0x10) {
    iVar1 = FUN_0064b33b(DAT_00713a48,2);
    DAT_00712c38 = DAT_00712c38 | iVar1 << (0x10U - (char)DAT_00712030 & 0x1f);
    DAT_00712030 = DAT_00712030 + 0x10;
    DAT_00713a48 = DAT_00713a48 + 2;
  }
  return;
}

