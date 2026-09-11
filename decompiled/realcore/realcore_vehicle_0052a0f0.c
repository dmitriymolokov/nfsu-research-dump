/* Decompiled from Speed.exe @ 0052a0f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052a0f0(undefined4 param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int extraout_EDX;
  undefined4 uVar3;
  float local_4;
  
  *(undefined4 *)(param_2 + 0x18e8) = 1;
  fVar1 = *(float *)(param_2 + 0x18dc) - *(float *)(*(int *)(param_2 + 0x1f0c) + 0x44);
  local_4 = DAT_006cc7a4;
  if ((DAT_006cc7a4 < fVar1) && (local_4 = fVar1, _DAT_006cc7bc < fVar1)) {
    local_4 = 1.0;
  }
  FUN_0052a040();
  FUN_00532640();
  uVar3 = 0;
  uVar2 = FUN_00674898(0);
  FUN_00532670(local_4,0x3f800000,uVar2,uVar3);
  *(float *)(extraout_EDX + 0x17dc) = local_4;
  return;
}

