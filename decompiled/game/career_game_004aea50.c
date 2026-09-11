/* Decompiled from Speed.exe @ 004aea50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004aea50(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_006fb0b0;
  do {
    if (*piVar1 == param_2) {
      iVar2 = iVar2 * 0x30;
      if (iVar2 != -0x6fb0b0) {
        FUN_00487830(*(undefined4 *)(iVar2 + 0x6fb0b4),*(undefined4 *)(iVar2 + 0x6fb0b8),
                     *(undefined4 *)(iVar2 + 0x6fb0bc),*(undefined4 *)(iVar2 + 0x6fb0c0),
                     *(undefined4 *)(iVar2 + 0x6fb0c4),*(undefined4 *)(iVar2 + 0x6fb0c8),
                     *(undefined4 *)(iVar2 + 0x6fb0cc),*(undefined4 *)(iVar2 + 0x6fb0d0),
                     *(undefined4 *)(iVar2 + 0x6fb0d4),*(undefined4 *)(iVar2 + 0x6fb0d8),
                     *(undefined4 *)(iVar2 + 0x6fb0dc));
      }
      return;
    }
    piVar1 = piVar1 + 0xc;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x6fb6e0);
  return;
}

