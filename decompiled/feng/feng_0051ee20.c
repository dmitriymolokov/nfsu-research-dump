/* Decompiled from Speed.exe @ 0051ee20 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051ee20(void)

{
  int iVar1;
  int unaff_EDI;
  
  FUN_00532fc0();
  iVar1 = *(int *)(unaff_EDI + 0x104);
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_EDI + 0xac) = *(undefined4 *)(iVar1 + 0x1c4);
    if (DAT_006f1dd8 != 0) {
      *(undefined4 *)(iVar1 + 0x1c4) = 4;
      FUN_00537cc0();
    }
    *(undefined1 *)(unaff_EDI + 0x9c) = 1;
  }
  if ((*(int *)(unaff_EDI + 0x104) != 0) && (DAT_006f1dd8 != 0)) {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x104) + 0x1c4) = 4;
    FUN_00537cc0();
  }
  iVar1 = DAT_007356ac;
  if (DAT_007356ac != 0) {
    FUN_005368b0(DAT_007356ac,8,0xbf800000,0);
    FUN_005368b0(iVar1,8,0xbf800000,1);
    FUN_005368b0(iVar1,8,0xbf800000,2);
    FUN_005368b0(iVar1,8,0xbf800000,3);
  }
  *(undefined1 *)(unaff_EDI + 0x84) = 1;
  *(undefined1 *)(unaff_EDI + 0x9c) = 1;
  return;
}

