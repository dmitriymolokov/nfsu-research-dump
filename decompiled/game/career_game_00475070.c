/* Decompiled from Speed.exe @ 00475070 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_00475070(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006854b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c847c;
  fVar2 = *(float *)(param_2 + 0x1f8);
  fVar3 = *(float *)(param_2 + 0x1f0);
  param_1[0x56] = fVar3;
  param_1[0x55] = 9;
  param_1[0x57] = fVar2;
  param_1[0x59] = param_2 + 0x200;
  local_4 = 0;
  param_1[0x58] = _DAT_006cc7c0 / (fVar2 - fVar3);
  fVar2 = *(float *)(param_2 + 0x1f8);
  fVar3 = *(float *)(param_2 + 0x1f0);
  param_1[0x5e] = param_2 + 0x248;
  param_1[0x5b] = fVar3;
  param_1[0x5a] = 3;
  param_1[0x5c] = fVar2;
  param_1[0x5d] = _DAT_006ccc00 / (fVar2 - fVar3);
  fVar2 = *(float *)(param_2 + 500);
  fVar3 = *(float *)(param_2 + 0x1f0);
  param_1[0x5f] = 9;
  param_1[0x60] = fVar3;
  param_1[99] = &DAT_006fff34;
  param_1[0x61] = fVar2;
  param_1[0x62] = _DAT_006cc7c0 / (fVar2 - fVar3);
  param_1[0x78] = 0;
  param_1[6] = param_2;
  FUN_0046d1c0(param_2 + 0x1b0,param_1 + 0x66);
  uVar6 = (uint)(_DAT_006cc960 <= *(float *)(param_2 + 0x1c0));
  if (_DAT_006cc95c < *(float *)(param_2 + 0x1c0)) {
    uVar6 = 2;
  }
  fVar2 = *(float *)(&DAT_006f101c + uVar6 * 0x6c);
  param_1[8] = param_5;
  param_1[7] = param_4;
  pcVar1 = (char *)(param_1 + 3);
  param_1[0x67] = fVar2 * (float)param_1[0x67];
  param_1[5] = param_3;
  param_1[0x49] = 2;
  param_1[0x4e] = 0x3f800000;
  param_1[100] = 0x411ccccd;
  param_1[0x65] = 0;
  *pcVar1 = 'M';
  pcVar5 = pcVar1;
  do {
    cVar4 = pcVar5[(int)("Melov8r" + (1 - (int)pcVar1))];
    pcVar5 = pcVar5 + 1;
    *pcVar5 = cVar4;
  } while (cVar4 != '\0');
  param_1[0x78] = 0;
  ExceptionList = local_c;
  return param_1;
}

