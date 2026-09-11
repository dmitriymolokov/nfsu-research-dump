/* Decompiled from Speed.exe @ 004ab470 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


uint FUN_004ab470(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar2 = 0;
  iVar1 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if (*(short *)(iVar1 + 0x6c) == unaff_ESI) {
        switch(unaff_EDI) {
        case 0:
          return *(uint *)(iVar1 + 0x74) & 1;
        case 1:
          return *(uint *)(iVar1 + 0x74) & 4;
        case 2:
          return *(uint *)(iVar1 + 0x74) & 0x40;
        case 3:
          return *(uint *)(iVar1 + 0x74) & 0x10;
        case 4:
          return *(uint *)(iVar1 + 0x74) & 0x20;
        case 5:
          return *(uint *)(iVar1 + 0x74) & 2;
        case 6:
          return *(uint *)(iVar1 + 0x74) & 8;
        default:
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xfc;
    } while (iVar2 < DAT_0073616c);
  }
  return 0;
}

