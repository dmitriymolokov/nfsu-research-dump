/* Decompiled from Speed.exe @ 0064f210 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_0064f210(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_00713ee4 != '\0') {
    if (DAT_00713c8c != 0) {
      FUN_0064c5c0(&LAB_0064f0e0);
      iVar2 = 0;
      if (DAT_00713c78 != 0) {
        iVar1 = 0;
        do {
          FUN_00650880(*(undefined4 *)(iVar1 + 0x18 + DAT_00713c8c));
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x60;
        } while (iVar2 < (int)(uint)DAT_00713c78);
      }
      DAT_00713c94 = 0;
      DAT_00713c90 = 0;
      DAT_00713c8c = 0;
    }
    return 0;
  }
  return 0xfffffff6;
}

