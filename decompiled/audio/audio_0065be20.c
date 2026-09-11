/* Decompiled from Speed.exe @ 0065be20 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_0065be20(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = 0;
  iVar2 = 0;
  local_14 = 1;
  local_4 = 0;
  if (param_2 == 8) {
    iVar2 = 1;
  }
  else if (param_2 == 9) {
    iVar2 = 0;
    local_14 = 0;
  }
  else if (param_2 == 10) {
    iVar2 = 2;
  }
  else if (param_2 == 4) {
    iVar2 = 3;
  }
  else if (param_2 == 0x16) {
    iVar2 = 4;
  }
  else if (param_2 == 0x10) {
    iVar2 = 5;
  }
  else if (param_2 == 0x17) {
    iVar2 = 6;
  }
  else if (param_2 == 0x40) {
    iVar2 = 7;
  }
  iVar3 = 0;
  if (param_1 == 0) {
    iVar3 = 2;
  }
  else if (0 < param_4) {
    iVar3 = 1;
  }
  iVar2 = (iVar3 + iVar2 * 3) * 4;
  if (*(int *)(&DAT_00716474 + iVar2) != 0) {
    iVar1 = FUN_00650fd0(*(undefined4 *)(&DAT_007164d4 + iVar2));
    *(undefined1 *)(iVar1 + 0x1a) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
    local_c = (uint)DAT_00713eeb;
    local_8 = param_8;
    local_10 = param_7;
    local_24 = param_5;
    local_2c[0] = param_1;
    local_20 = param_6;
    local_1c = param_3;
    local_18 = param_4;
    (**(code **)(&DAT_00716474 + iVar2))(iVar1,local_2c);
    *param_9 = local_4;
  }
  return iVar1;
}

