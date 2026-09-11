/* Decompiled from Speed.exe @ 00480ff0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00480ff0(int param_1)

{
  int iVar1;
  int local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_9c;
  float local_98;
  undefined1 local_50 [76];
  
  FUN_00564bd0();
  FUN_00564bd0();
  if ((*(int *)(param_1 + 0xcb8) == 4) || (*(int *)(param_1 + 0xcb8) == 6)) {
    local_d8 = 1;
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
    local_d8 = 0;
  }
  FUN_00480e20();
  local_bc = local_bc * *(float *)(param_1 + 0xcd8);
  local_9c = local_bc * local_b8;
  local_98 = local_d4 * *(float *)(param_1 + 0xcd8);
  local_d0 = local_b0 + local_b4 * local_bc;
  local_cc = local_ac + local_9c;
  local_c8 = local_a8 + local_98;
  if (*(char *)(*(int *)(param_1 + 0xcb4) * 0x4c + 0xd4 + param_1) != '\0') {
    FUN_00424ba0();
    FUN_0040bc10();
    thunk_FUN_005abda2(&local_d0,&local_d0,local_50);
    iVar1 = local_d8;
  }
  iVar1 = iVar1 * 0xc;
  *(float *)(*(int *)(param_1 + 0xcb4) * 0x4c + iVar1 + 0xdc + param_1) = local_d0;
  *(float *)(*(int *)(param_1 + 0xcb4) * 0x4c + iVar1 + 0xe0 + param_1) = local_cc;
  *(float *)((*(int *)(param_1 + 0xcb4) + 3) * 0x4c + iVar1 + param_1) = local_c8;
  return;
}

