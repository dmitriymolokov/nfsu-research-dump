/* Decompiled from Speed.exe @ 004c2230 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c2230(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  FUN_004c13b0(1,1);
  FUN_004c1470(unaff_ESI);
  *(undefined4 *)(unaff_ESI + 0x1c4) = 1;
  *(undefined1 **)(unaff_ESI + 0x48) = &LAB_004bff40;
  FUN_004bfaa0();
  iVar1 = 0;
  iVar2 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if (*(short *)(iVar2 + 0x6c) == DAT_0078a2f0) {
        if ((*(byte *)(iVar2 + 0x74) & 4) != 0) {
          return;
        }
        FUN_004c13b0(2,1);
        FUN_004c1470(unaff_ESI);
        *(undefined4 *)(unaff_ESI + 0x1bc) = 2;
        *(undefined1 **)(unaff_ESI + 0x4c) = &LAB_004bfd90;
        FUN_004bf8c0();
        return;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xfc;
    } while (iVar1 < DAT_0073616c);
  }
  return;
}

