/* Decompiled from Speed.exe @ 00532bb0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00532bb0(void)

{
  int unaff_EDI;
  undefined1 local_4 [4];
  
  if (DAT_006f1dd8 != 0) {
    FUN_0064e8e0();
    FUN_0064b560();
    FUN_0064b500(&PTR_PTR_00705810);
    FUN_0064b530();
    FUN_0064e9e0();
    FUN_0064ea10();
    FUN_0064e5f0(0x20);
    *(undefined4 *)(unaff_EDI + 0x14) = DAT_00758920;
    FUN_00532cb0(unaff_EDI);
    FUN_0064e710(0,24000);
    FUN_0064e900(0,*(undefined4 *)(unaff_EDI + 4),*(undefined4 *)(unaff_EDI + 0xc));
    if ((DAT_00736334 == 0) || (DAT_006f7e88 = 0xac44, DAT_00736334 == 1)) {
      DAT_006f7e88 = 0x5622;
    }
    if (DAT_00735610 != 0) {
      DAT_006f7e88 = DAT_00735610;
    }
    FUN_0064e930(0,local_4);
    FUN_0064e780(0,0x40);
    FUN_0064e930(0,local_4);
    FUN_0064e620(DAT_006f7e84);
    FUN_0064e710(0,DAT_006f7e88);
    FUN_0064e800(0x80407);
    if (DAT_006f1ddc != 0) {
      FUN_0064f320(*(undefined4 *)(unaff_EDI + 8),*(undefined4 *)(unaff_EDI + 0x10),4);
    }
  }
  return;
}

