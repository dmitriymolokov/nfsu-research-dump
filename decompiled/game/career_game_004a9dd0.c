/* Decompiled from Speed.exe @ 004a9dd0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined1 * __fastcall FUN_004a9dd0(undefined1 *param_1)

{
  int iVar1;
  bool bVar2;
  
  param_1[1] = 1;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[4] = 1;
  param_1[5] = 1;
  param_1[6] = 1;
  param_1[7] = 1;
  param_1[8] = 1;
  param_1[9] = 1;
  param_1[10] = 1;
  *(undefined4 *)(param_1 + 0x18) = 1;
  bVar2 = DAT_006ee6f0 != 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f000000;
  *(uint *)(param_1 + 0x1c) = (uint)bVar2;
  iVar1 = DAT_006fa5b4 / 2;
  *(int *)(param_1 + 0x20) = iVar1;
  *(int *)(param_1 + 0x24) = iVar1;
  return param_1;
}

