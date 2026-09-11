/* Decompiled from Speed.exe @ 0059c600 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_0059c600(undefined4 param_1,int param_2,int param_3,char *param_4,float param_5,float param_6,
            int param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float local_3c;
  float local_38;
  int local_34;
  int local_28;
  undefined1 local_20 [28];
  
  local_3c = param_6;
  fVar2 = *(float *)(*(int *)(param_3 + 4) + 0x3d4);
  iVar7 = *(int *)(*(int *)(param_3 + 4) + 0x3c);
  iVar6 = *(int *)(param_3 + 0x44);
  fVar3 = (*(float *)(iVar7 + 0x104) - *(float *)(iVar7 + 0xf4)) * _DAT_006cc7dc;
  local_34 = param_2 * 4 + 8;
  iVar7 = *(int *)(local_34 + iVar6);
  local_28 = param_2;
  if (param_2 < *(int *)(iVar6 + 4)) {
    do {
      if ('\x13' < *param_4) {
        return;
      }
      pfVar1 = (float *)(iVar7 + 0x58);
      iVar7 = *(int *)(local_34 + iVar6);
      fVar4 = (*(float *)(iVar7 + 0x58) - *pfVar1) / fVar2;
      fVar5 = _DAT_006b5a1c * fVar4;
      if (local_3c <= DAT_006cc7a4) {
        param_5 = fVar5 + param_5;
      }
      else {
        param_5 = param_5 - fVar5;
      }
      fVar4 = fVar4 * param_5 + local_3c;
      if ((param_7 < 0) || (4 < param_7)) {
        if ((param_7 < 0xb) || (0x10 < param_7)) {
          local_38 = 0.0;
        }
        else {
          local_38 = *(float *)(iVar7 + 0x14 + param_7 * 4);
        }
      }
      else {
        local_38 = *(float *)(iVar7 + 0x3c);
      }
      if ((param_7 < 0) || (4 < param_7)) {
        local_3c = DAT_006cc7a4;
        if ((10 < param_7) && (param_7 < 0x11)) {
          local_3c = *(float *)(iVar7 + -8 + param_7 * 4);
        }
      }
      else {
        local_3c = *(float *)(iVar7 + 0x20);
      }
      local_38 = local_38 - fVar3;
      local_3c = local_3c + fVar3;
      if (local_3c < fVar4) {
        local_3c = fVar4;
      }
      if (local_38 < local_3c) {
        local_3c = local_38;
      }
      FUN_005a7270(local_20,*(undefined4 *)(iVar7 + 0x58),local_3c,param_7);
      FUN_004594d0(*(undefined1 *)(iVar7 + 0x5c),*(undefined2 *)(iVar7 + 0x5e),param_7,1);
      iVar6 = *(int *)(param_3 + 0x44);
      local_28 = local_28 + 1;
      local_34 = local_34 + 4;
    } while (local_28 < *(int *)(iVar6 + 4));
  }
  return;
}

