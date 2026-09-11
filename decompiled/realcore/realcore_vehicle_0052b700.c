/* Decompiled from Speed.exe @ 0052b700 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0052b700(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0x1a84) == '\0') {
    FUN_00532640();
    FUN_00532670(0,0x3f800000,500,0);
    uVar1 = DAT_007356ac;
    *(undefined4 *)(unaff_ESI + 0x1b04) = 0;
    *(undefined1 *)(unaff_ESI + 0x1a84) = 1;
    FUN_005368b0(uVar1,4,0xbf800000,*(undefined4 *)(unaff_ESI + 0x264));
    FUN_0052b500(unaff_ESI);
  }
  return;
}

