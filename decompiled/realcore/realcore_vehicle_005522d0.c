/* Decompiled from Speed.exe @ 005522d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005522d0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_2 < 10) {
    pcVar3 = "%s0%d";
  }
  else {
    pcVar3 = "%s%d";
  }
  FUN_004f68c0(0x20,pcVar3,"Rep_DATA_",param_2);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = FUN_004fd230();
  if (((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) || (iVar2 = FUN_004ffb70(), iVar2 == 0)
     ) {
    if (DAT_0073578c != 0) {
      iVar2 = FUN_004ef050(uVar1);
      goto LAB_00552342;
    }
  }
  else {
LAB_00552342:
    if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
      FUN_004f0700(0x55d1e635,iVar2,*(undefined4 *)(param_1 + 0x68),iVar2,0);
    }
  }
  if (param_2 < 10) {
    pcVar3 = "%s0%d";
  }
  else {
    pcVar3 = "%s%d";
  }
  FUN_004f68c0(0x20,pcVar3,"PlayersName_DATA_",param_2);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = FUN_004fd230();
  if (((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) || (iVar2 = FUN_004ffb70(), iVar2 == 0)
     ) {
    if (DAT_0073578c != 0) {
      iVar2 = FUN_004ef050(uVar1);
      goto LAB_005523c8;
    }
  }
  else {
LAB_005523c8:
    if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
      FUN_004f0700(0x55d1e635,iVar2,*(undefined4 *)(param_1 + 0x68),iVar2,0);
    }
  }
  if (param_2 < 10) {
    pcVar3 = "%s0%d";
  }
  else {
    pcVar3 = "%s%d";
  }
  FUN_004f68c0(0x20,pcVar3,"DISC_DATA_",param_2);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = FUN_004fd230();
  if (((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) || (iVar2 = FUN_004ffb70(), iVar2 == 0)
     ) {
    if (DAT_0073578c != 0) {
      iVar2 = FUN_004ef050(uVar1);
      goto LAB_0055244e;
    }
  }
  else {
LAB_0055244e:
    if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
      FUN_004f0700(0x55d1e635,iVar2,*(undefined4 *)(param_1 + 0x68),iVar2,0);
    }
  }
  if (param_2 < 10) {
    pcVar3 = "%s0%d";
  }
  else {
    pcVar3 = "%s%d";
  }
  FUN_004f68c0(0x20,pcVar3,"Ping_Group_",param_2);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = FUN_004fd230();
  if (((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) || (iVar2 = FUN_004ffb70(), iVar2 == 0)
     ) {
    if (DAT_0073578c != 0) {
      iVar2 = FUN_004ef050(uVar1);
      goto LAB_005524d4;
    }
  }
  else {
LAB_005524d4:
    if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
      FUN_004f0700(0x55d1e635,iVar2,*(undefined4 *)(param_1 + 0x68),iVar2,0);
    }
  }
  if (param_2 < 10) {
    pcVar3 = "%s0%d";
  }
  else {
    pcVar3 = "%s%d";
  }
  FUN_004f68c0(0x20,pcVar3,"NumberOfPlayers_DATA_",param_2);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = FUN_004fd230();
  if (((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) || (iVar2 = FUN_004ffb70(), iVar2 == 0)
     ) {
    if (DAT_0073578c == 0) goto LAB_0055257d;
    iVar2 = FUN_004ef050(uVar1);
  }
  if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
    FUN_004f0700(0x55d1e635,iVar2,*(undefined4 *)(param_1 + 0x68),iVar2,0);
  }
LAB_0055257d:
  if (param_2 < 10) {
    pcVar3 = "%s0%d";
  }
  else {
    pcVar3 = "%s%d";
  }
  FUN_004f68c0(0x20,pcVar3,"HighLight_",param_2);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = FUN_004fd230();
  if (((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) || (iVar2 = FUN_004ffb70(), iVar2 == 0)
     ) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar2 = FUN_004ef050(uVar1);
  }
  if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
    FUN_004f0700(0x55d1e635,iVar2,*(undefined4 *)(param_1 + 0x68),iVar2,0);
  }
  return;
}

