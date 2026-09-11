/* Decompiled from Speed.exe @ 005540b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_005540b0(undefined4 param_1,int param_2)

{
  char in_AL;
  int unaff_EDI;
  undefined1 local_44 [68];
  
  if (((in_AL != '\0') && (*(char *)(unaff_EDI + 4) != '\0')) && (param_2 != 0)) {
    FUN_004f68c0(0x40,"%s: %s",&DAT_00734718,param_1);
    FUN_005539a0(unaff_EDI,local_44,0,1,0);
  }
  FUN_0054b0e0();
  return;
}

