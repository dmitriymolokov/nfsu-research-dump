/* Decompiled from Speed.exe @ 004ab880 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_004ab880(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if (*(short *)(iVar3 + 0x6c) == DAT_0078a2f0) {
        uVar1 = *(uint *)(iVar3 + 0x74);
        if ((uVar1 & 1) != 0) {
          return 3;
        }
        if ((uVar1 & 2) != 0) {
          return 1;
        }
        if ((uVar1 & 4) != 0) {
          return 0;
        }
        if ((uVar1 & 8) == 0) {
          return 0xffffffff;
        }
        return 2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xfc;
    } while (iVar2 < DAT_0073616c);
  }
  return 0xffffffff;
}

