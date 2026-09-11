/* Decompiled from Speed.exe @ 005336c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


undefined4 * FUN_005336c0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006852c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0052e3f0();
  *param_1 = &PTR_FUN_006be428;
  param_1[0x8c] = param_2;
  param_1[0x86] = 0x42c80000;
  param_1[0x87] = 0x40a00000;
  *(undefined1 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x2f] = &DAT_006f4500;
  iVar3 = *(int *)(param_2 + 0x1c);
  local_4 = 0;
  if (*(int *)(iVar3 + 0xe4) != 0) {
    FUN_005791c0();
  }
  uVar1 = *(undefined4 *)(iVar3 + 0x44);
  uVar2 = *(undefined4 *)(iVar3 + 0x48);
  param_1[0x94] = *(undefined4 *)(iVar3 + 0x40);
  param_1[0x95] = uVar1;
  param_1[0x96] = uVar2;
  iVar3 = *(int *)(param_2 + 0x1c);
  if (*(int *)(iVar3 + 0xe4) != 0) {
    FUN_005791c0();
  }
  uVar1 = *(undefined4 *)(iVar3 + 0x44);
  uVar2 = *(undefined4 *)(iVar3 + 0x48);
  param_1[0x90] = *(undefined4 *)(iVar3 + 0x40);
  param_1[0x91] = uVar1;
  param_1[0x92] = uVar2;
  iVar3 = *(int *)(param_2 + 0x1c);
  if (*(int *)(iVar3 + 0xe4) != 0) {
    FUN_005791c0();
  }
  uVar2 = *(undefined4 *)(iVar3 + 0x40);
  uVar1 = *(undefined4 *)(iVar3 + 0x48);
  param_1[0x9d] = *(undefined4 *)(iVar3 + 0x44);
  param_1[0x9c] = uVar2;
  param_1[0x9e] = uVar1;
  FUN_00567370();
  uVar1 = extraout_EDX[1];
  uVar2 = extraout_EDX[2];
  param_1[0x98] = *extraout_EDX;
  param_1[0x99] = uVar1;
  param_1[0x9a] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

