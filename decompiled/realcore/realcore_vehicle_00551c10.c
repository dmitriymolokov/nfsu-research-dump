/* Decompiled from Speed.exe @ 00551c10 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00551c10(int param_1,int param_2)

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
      FUN_004ef050(uVar1);
      goto LAB_00551c82;
    }
  }
  else {
LAB_00551c82:
    iVar2 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      uVar1 = 1;
      FUN_004fd230(1);
      FUN_004f5f80(iVar2,uVar1);
    }
  }
  FUN_004f7f10(param_1);
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
      FUN_004ef050(uVar1);
      goto LAB_00551d13;
    }
  }
  else {
LAB_00551d13:
    iVar2 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      uVar1 = 1;
      FUN_004fd230(1);
      FUN_004f5f80(iVar2,uVar1);
    }
  }
  FUN_004f7f10(param_1);
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
      FUN_004ef050(uVar1);
      goto LAB_00551da4;
    }
  }
  else {
LAB_00551da4:
    iVar2 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      uVar1 = 1;
      FUN_004fd230(1);
      FUN_004f5f80(iVar2,uVar1);
    }
  }
  FUN_004f7f10(param_1);
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
      FUN_004ef050(uVar1);
      goto LAB_00551e35;
    }
  }
  else {
LAB_00551e35:
    iVar2 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      uVar1 = 1;
      FUN_004fd230(1);
      FUN_004f5f80(iVar2,uVar1);
    }
  }
  FUN_004f7f10(param_1);
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
    if (DAT_0073578c == 0) goto LAB_00551ee8;
    FUN_004ef050(uVar1);
  }
  iVar2 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    uVar1 = 1;
    FUN_004fd230(1);
    FUN_004f5f80(iVar2,uVar1);
  }
LAB_00551ee8:
  FUN_004f7f10(param_1);
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
      FUN_004f7f10(param_1);
      return;
    }
    FUN_004ef050(uVar1);
  }
  iVar2 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    uVar1 = 1;
    FUN_004fd230(1);
    FUN_004f5f80(iVar2,uVar1);
  }
  FUN_004f7f10(param_1);
  return;
}

