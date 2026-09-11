/* Decompiled from Speed.exe @ 0052b040 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0052b040(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_64 [11];
  undefined4 uStack_38;
  undefined4 local_2c [6];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_2c[2] = 0;
  local_2c[1] = 0;
  local_2c[0] = 8;
  local_2c[3] = 1;
  local_8 = DAT_006b65e0;
  local_4 = 0;
  local_2c[4] = 0;
  uStack_38 = 0x52b081;
  local_2c[5] = FUN_00674898();
  uStack_38 = 0x52b096;
  local_14 = FUN_00674898();
  uStack_38 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x264);
  local_10 = 0;
  local_c = 0;
  puVar2 = local_2c;
  puVar3 = auStack_64;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00536c80(DAT_007356ac);
  return;
}

