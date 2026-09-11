/* Decompiled from Speed.exe @ 0055fe30 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055fe30(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBX;
  
  FUN_004f68c0(0x20,"Rank_DATA_%02d",param_1);
  iVar2 = *(int *)(unaff_EBX + 0xc);
  uVar1 = FUN_004fd230();
  if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
      (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
    FUN_004ef050(uVar1);
  }
  if (*(int *)(unaff_EBX + 0x98) == 0) {
    uVar1 = FUN_0049fc90();
    *(undefined4 *)(unaff_EBX + 0x9c) = uVar1;
  }
  FUN_004f75b0(param_2);
  FUN_004f68c0(0x20,"PlayersName_DATA_%02d",param_1);
  iVar2 = *(int *)(unaff_EBX + 0xc);
  uVar1 = FUN_004fd230();
  if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
      (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
    FUN_004ef050(uVar1);
  }
  FUN_004f75b0(param_2);
  FUN_004f68c0(0x20,"Rep_DATA_%02d",param_1);
  iVar2 = *(int *)(unaff_EBX + 0xc);
  uVar1 = FUN_004fd230();
  if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
      (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
    FUN_004ef050(uVar1);
  }
  FUN_004f75b0(param_2);
  FUN_004f68c0(0x20,"Win_DATA_%02d",param_1);
  iVar2 = *(int *)(unaff_EBX + 0xc);
  uVar1 = FUN_004fd230();
  if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
      (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
    FUN_004ef050(uVar1);
  }
  FUN_004f75b0(param_2);
  FUN_004f68c0(0x20,"Losses_DATA_%02d",param_1);
  iVar2 = *(int *)(unaff_EBX + 0xc);
  uVar1 = FUN_004fd230();
  if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
      (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
    FUN_004ef050(uVar1);
  }
  FUN_004f75b0(param_2);
  FUN_004f68c0(0x20,"NumberOfPlayers_DATA_%02d",param_1);
  iVar2 = *(int *)(unaff_EBX + 0xc);
  uVar1 = FUN_004fd230();
  if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
      (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
    FUN_004ef050(uVar1);
  }
  FUN_004f75b0(param_2);
  *(undefined4 *)(unaff_EBX + 0x98) = param_1;
  return;
}

