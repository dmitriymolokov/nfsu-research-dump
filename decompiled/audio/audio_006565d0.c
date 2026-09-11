/* Decompiled from Speed.exe @ 006565d0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_006565d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10,
                 undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined1 param_14)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = (undefined1 *)(param_1 * 0x60 + DAT_0071666c);
  iVar1 = -1;
  iVar3 = 0;
  *(undefined4 *)(puVar4 + 0x40) = 0;
  *(undefined4 *)(puVar4 + 0x48) = 0;
  *(undefined4 *)(puVar4 + 0x50) = 0;
  *(undefined4 *)(puVar4 + 0x58) = 0;
  *(undefined4 *)(puVar4 + 0x5c) = 0;
  *(undefined4 *)(puVar4 + 0x4c) = 0;
  local_14 = 1;
  local_4 = 0;
  if (param_2 == 8) {
    iVar1 = 1;
  }
  else if (param_2 == 9) {
    iVar1 = 0;
    local_14 = 0;
  }
  else if (param_2 == 10) {
    iVar1 = 2;
  }
  else if (param_2 == 4) {
    iVar1 = 3;
  }
  else if (param_2 == 0x16) {
    iVar1 = 4;
  }
  else if (param_2 == 0x10) {
    iVar1 = 5;
  }
  else if (param_2 == 0x17) {
    iVar1 = 6;
  }
  if (param_3 == 1) {
    if (0 < param_10) {
      iVar3 = 1;
    }
  }
  else if (param_3 == 0) {
    iVar3 = 2;
  }
  iVar3 = (iVar3 + iVar1 * 3) * 4;
  if (*(int *)(&DAT_00716474 + iVar3) != 0) {
    uVar2 = FUN_00650fd0(*(undefined4 *)(&DAT_007164d4 + iVar3));
    *(undefined4 *)(puVar4 + 0x48) = uVar2;
    local_28 = param_5;
    local_2c = param_4;
    local_20 = param_8;
    local_c = (uint)DAT_00713eeb;
    local_24 = param_7;
    local_8 = param_13;
    local_1c = param_9;
    local_18 = param_10;
    local_10 = param_1;
    *(undefined4 *)(*(int *)(puVar4 + 0x48) + 4) = 0;
    *(undefined2 *)(*(int *)(puVar4 + 0x48) + 0x18) = 0xf0;
    *(undefined1 *)(*(int *)(puVar4 + 0x48) + 0x1a) = param_14;
    (**(code **)(&DAT_00716474 + iVar3))(*(undefined4 *)(puVar4 + 0x48),&local_2c);
    *(undefined4 *)(puVar4 + 0x44) = local_4;
    FUN_006577e0(puVar4 + 0x40,*(undefined4 *)(puVar4 + 0x48));
  }
  if (param_6 != 0) {
    if (param_3 != 0) {
      param_1 = -1;
    }
    iVar3 = FUN_00650fd0(0x1828);
    *(int *)(puVar4 + 0x4c) = iVar3;
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined2 *)(*(int *)(puVar4 + 0x4c) + 0x18) = 200;
    *(undefined1 *)(*(int *)(puVar4 + 0x4c) + 0x1a) = param_14;
    FUN_0065b380(*(undefined4 *)(puVar4 + 0x4c),param_6,param_1);
    FUN_006577e0(puVar4 + 0x40,*(undefined4 *)(puVar4 + 0x4c));
  }
  *puVar4 = 1;
  return;
}

