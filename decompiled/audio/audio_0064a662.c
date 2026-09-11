/* Decompiled from Speed.exe @ 0064a662 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_0064a662(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_00712b38 + (DAT_00712c38 >> 0x1a) * 4);
  FUN_0064a5ee(uVar1 & 0xff);
  return (int)uVar1 >> 0x16;
}

