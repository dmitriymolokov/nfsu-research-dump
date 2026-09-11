/* Decompiled from Speed.exe @ 00551fa0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00551fa0(int param_1,int param_2)

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
      goto LAB_00552012;
    }
  }
  else {
LAB_00552012:
    iVar2 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      uVar1 = 0;
      FUN_004fd230(0);
      FUN_004f5f80(iVar2,uVar1);
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
      FUN_004ef050(uVar1);
      goto LAB_00552095;
    }
  }
  else {
LAB_00552095:
    iVar2 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      uVar1 = 0;
      FUN_004fd230(0);
      FUN_004f5f80(iVar2,uVar1);
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
      FUN_004ef050(uVar1);
      goto LAB_00552118;
    }
  }
  else {
LAB_00552118:
    iVar2 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      uVar1 = 0;
      FUN_004fd230(0);
      FUN_004f5f80(iVar2,uVar1);
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
      FUN_004ef050(uVar1);
      goto LAB_0055219b;
    }
  }
  else {
LAB_0055219b:
    iVar2 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      uVar1 = 0;
      FUN_004fd230(0);
      FUN_004f5f80(iVar2,uVar1);
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
    if (DAT_0073578c == 0) goto LAB_0055223e;
    FUN_004ef050(uVar1);
  }
  iVar2 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    uVar1 = 0;
    FUN_004fd230(0);
    FUN_004f5f80(iVar2,uVar1);
  }
LAB_0055223e:
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
    FUN_004ef050(uVar1);
  }
  iVar2 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    uVar1 = 0;
    FUN_004fd230(0);
    FUN_004f5f80(iVar2,uVar1);
  }
  return;
}

