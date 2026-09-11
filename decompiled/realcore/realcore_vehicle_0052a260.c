/* Decompiled from Speed.exe @ 0052a260 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_0052a260(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_EDX;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18dc);
  *(undefined4 *)(param_2 + 0x18e8) = 1;
  FUN_0052a040();
  FUN_00532640();
  uVar3 = 0;
  uVar2 = FUN_00674898(0);
  FUN_00532670(uVar1,0x3f800000,uVar2,uVar3);
  *(undefined4 *)(extraout_EDX + 0x17dc) = uVar1;
  return;
}

