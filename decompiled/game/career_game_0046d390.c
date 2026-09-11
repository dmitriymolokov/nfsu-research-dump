/* Decompiled from Speed.exe @ 0046d390 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall
FUN_0046d390(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006854b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_3[7] = param_2;
  *param_3 = &PTR_FUN_006c84e4;
  param_3[6] = param_4;
  param_3[0x38] = 3;
  param_3[8] = param_1;
  param_3[9] = *param_5;
  param_3[10] = param_5[1];
  param_3[0xb] = param_5[2];
  param_3[0xc] = param_5[3];
  param_3[0xf] = 1;
  param_3[0xe] = 1;
  param_3[0xd] = param_6;
  param_3[5] = 0;
  param_3[0x11] = 2;
  param_3[0x12] = 0;
  param_3[0x16] = 0;
  param_3[0x18] = 0;
  param_3[0x17] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  local_4 = 0;
  FUN_0046d1c0(param_4,param_3 + 0x20);
  FUN_0046d760();
  uVar4 = DAT_006fff30;
  uVar3 = DAT_006b71f0;
  param_3[0x21] = *(float *)(param_3[7] + 0x5c) * (float)param_3[0x21];
  param_3[0x32] = uVar4;
  param_3[0x33] = _DAT_006b71ec;
  param_3[0x34] = uVar3;
  param_3[0x35] = _DAT_006b71f4;
  param_3[0x36] = 0x3f800000;
  param_3[0x37] = 0x3f800000;
  pcVar1 = (char *)(param_3 + 3);
  param_3[0x39] = *(undefined4 *)(param_3[7] + 0x60);
  *(undefined1 *)(param_3 + 0x1d) = 0;
  *pcVar1 = 'D';
  pcVar5 = pcVar1;
  do {
    cVar2 = pcVar5[(int)("Drvtrn" + (1 - (int)pcVar1))];
    pcVar5 = pcVar5 + 1;
    *pcVar5 = cVar2;
  } while (cVar2 != '\0');
  ExceptionList = local_c;
  return param_3;
}

