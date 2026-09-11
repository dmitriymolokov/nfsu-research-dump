/* Decompiled from Speed.exe @ 005600c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005600c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x98) != 0) {
    FUN_004f68c0(0x20,"Rank_DATA_%02d",param_1);
    iVar2 = *(int *)(unaff_EDI + 0xc);
    uVar1 = FUN_004fd230();
    if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
        (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(uVar1);
    }
    FUN_004f75b0(*(undefined4 *)(unaff_EDI + 0x9c));
    FUN_004f68c0(0x20,"PlayersName_DATA_%02d",param_1);
    iVar2 = *(int *)(unaff_EDI + 0xc);
    uVar1 = FUN_004fd230();
    if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
        (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(uVar1);
    }
    FUN_004f75b0(*(undefined4 *)(unaff_EDI + 0x9c));
    FUN_004f68c0(0x20,"Rep_DATA_%02d",param_1);
    iVar2 = *(int *)(unaff_EDI + 0xc);
    uVar1 = FUN_004fd230();
    if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
        (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(uVar1);
    }
    FUN_004f75b0(*(undefined4 *)(unaff_EDI + 0x9c));
    FUN_004f68c0(0x20,"Win_DATA_%02d",param_1);
    iVar2 = *(int *)(unaff_EDI + 0xc);
    uVar1 = FUN_004fd230();
    if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
        (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(uVar1);
    }
    FUN_004f75b0(*(undefined4 *)(unaff_EDI + 0x9c));
    FUN_004f68c0(0x20,"Losses_DATA_%02d",param_1);
    iVar2 = *(int *)(unaff_EDI + 0xc);
    uVar1 = FUN_004fd230();
    if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
        (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(uVar1);
    }
    FUN_004f75b0(*(undefined4 *)(unaff_EDI + 0x9c));
    FUN_004f68c0(0x20,"NumberOfPlayers_DATA_%02d",param_1);
    iVar2 = *(int *)(unaff_EDI + 0xc);
    uVar1 = FUN_004fd230();
    if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
        (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(uVar1);
    }
    FUN_004f75b0(*(undefined4 *)(unaff_EDI + 0x9c));
    *(undefined4 *)(unaff_EDI + 0x98) = 0;
  }
  return;
}

