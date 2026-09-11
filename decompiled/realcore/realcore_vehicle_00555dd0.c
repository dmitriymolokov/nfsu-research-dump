/* Decompiled from Speed.exe @ 00555dd0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00555dd0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_34;
  int local_2c;
  int local_1c;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    iVar2 = FUN_004a9950();
    if (iVar2 <= local_14) break;
    iVar2 = FUN_00442010();
    iVar3 = FUN_004ab470(&DAT_00748f70);
    if (iVar3 != 0) {
      cVar1 = FUN_00554400(param_1,(int)*(short *)(iVar2 + 0x6c),0);
      if (cVar1 != '\0') {
        FUN_00555ce0(iVar2,0);
      }
    }
    local_14 = local_14 + 1;
  }
  iVar2 = FUN_00549480();
  if (iVar2 != 2) {
    local_1c = 0;
    while( true ) {
      iVar2 = FUN_004a9950();
      if (iVar2 <= local_1c) break;
      iVar2 = FUN_00442010();
      iVar3 = FUN_004ab470(&DAT_00748f70);
      if (iVar3 != 0) {
        cVar1 = FUN_00554400(param_1,(int)*(short *)(iVar2 + 0x6c),1);
        if (cVar1 != '\0') {
          FUN_00555ce0(iVar2,1);
        }
      }
      local_1c = local_1c + 1;
    }
  }
  FUN_00401bd0();
  iVar2 = FUN_004ab510();
  if (*(int *)(iVar2 + 8) == -1) {
    local_2c = FUN_00421960();
    if (local_2c == 0) {
      local_2c = 0;
    }
    else {
      local_2c = local_2c + -4;
    }
    *(int *)(param_1 + 0x60) = local_2c;
    *(int *)(iVar2 + 8) = (int)*(short *)(*(int *)(*(int *)(param_1 + 0x60) + 0xc) + 0x6c);
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  else {
    uVar4 = FUN_00555ff0(*(int *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    if (*(int *)(param_1 + 0x60) == 0) {
      local_34 = FUN_00421960();
      if (local_34 == 0) {
        local_34 = 0;
      }
      else {
        local_34 = local_34 + -4;
      }
      *(int *)(param_1 + 0x60) = local_34;
    }
  }
  return;
}

