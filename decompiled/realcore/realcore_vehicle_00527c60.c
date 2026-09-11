/* Decompiled from Speed.exe @ 00527c60 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00527c60(int *param_1,int param_2)

{
  if ((DAT_007361f0 != (int *)0x0) && (*DAT_007361f0 == 8)) {
    *param_1 = 0;
    return;
  }
  *param_1 = *(int *)(param_2 + 0x70) * *param_1 >> 0xf;
  FUN_00536c20(DAT_007356ac);
  return;
}

