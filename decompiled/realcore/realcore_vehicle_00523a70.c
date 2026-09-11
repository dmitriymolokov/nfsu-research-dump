/* Decompiled from Speed.exe @ 00523a70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00523a70(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1e50) = 0;
  *(undefined4 *)(param_1 + 0x1a3c) = 0;
  *(undefined4 *)(param_1 + 0x1a40) = 0;
  *(undefined4 *)(param_1 + 0x1d14) = 0;
  FUN_00584310(*(undefined4 *)(param_1 + 0x1f8c));
  uVar1 = *(undefined4 *)(param_1 + 0x1f8c);
  *(undefined4 *)(param_1 + 0x1d14) = 3;
  *(undefined4 *)(param_1 + 0x1d0c) = *(undefined4 *)(param_1 + 0x1f1c);
  FUN_00532640();
  FUN_00532670(uVar1,0,0x32,0);
  *(undefined4 *)(param_1 + 0x1c84) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1f1c);
  FUN_00532640();
  FUN_00532670(uVar1,uVar1,300,0);
  *(undefined4 *)(param_1 + 0x1c08) = uVar1;
  return;
}

