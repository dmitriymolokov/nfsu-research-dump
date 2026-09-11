/* Decompiled from Speed.exe @ 00571870 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00571870(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 < 1) || (3 < iVar1)) {
    if ((9 < iVar1) && ((iVar1 < 0x10 && (DAT_006f1a78 != 0)))) {
      FUN_0040c910(param_1,&DAT_0073c1b0,&DAT_0073c1e0,0,0);
    }
  }
  else if (DAT_006eef60 != 0) {
    FUN_0040c910(param_1,&DAT_0073c1c8,&DAT_0073c220,0,0);
    return;
  }
  return;
}

