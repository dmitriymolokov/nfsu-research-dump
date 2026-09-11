/* Decompiled from Speed.exe @ 005362a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


undefined4 *
FUN_005362a0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_7c [7];
  undefined4 auStack_60 [6];
  undefined4 auStack_48 [6];
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [6];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  iVar2 = 0;
  do {
    auStack_60[iVar2] = 0;
    auStack_48[iVar2] = 0;
    local_7c[iVar2 + 1] = 0;
    auStack_30[iVar2] = 0;
    auStack_28[iVar2] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  local_8 = 0;
  local_7c[0] = 0;
  local_c = 0;
  local_10 = 0;
  iVar2 = 0;
  do {
    auStack_60[iVar2] = 0;
    auStack_48[iVar2] = 0;
    local_7c[iVar2 + 1] = 0;
    auStack_30[iVar2] = 0;
    auStack_28[iVar2] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  local_4 = 0;
  FUN_00532670(0,0,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  local_8 = 0;
  switch(param_3) {
  case 1:
  case 2:
    FUN_00532640();
    FUN_00532670(uVar1,param_9,param_4,0);
    FUN_00532670(param_9,param_9,param_5,0);
    FUN_00532670(param_9,param_10,param_6,0);
    FUN_00532670(param_10,param_10,param_7,0);
    param_9 = 0;
    param_4 = param_8;
    break;
  case 3:
  case 4:
    FUN_00532640();
    param_10 = uVar1;
    break;
  case 5:
    FUN_00532640();
    param_9 = 0;
    param_10 = uVar1;
    break;
  default:
    goto switchD_0053635b_default;
  }
  FUN_00532670(param_10,param_9,param_4,0);
switchD_0053635b_default:
  puVar3 = local_7c;
  puVar4 = param_2;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_2;
}

