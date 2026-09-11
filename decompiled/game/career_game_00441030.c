/* Decompiled from Speed.exe @ 00441030 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00441030(int param_1,int param_2,undefined4 param_3,float *param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  float *unaff_ESI;
  float local_40;
  int *local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *unaff_ESI;
  local_2c = unaff_ESI[1];
  local_34 = unaff_ESI[2];
  local_28 = local_34;
  local_20 = local_30;
  local_1c = local_2c;
  local_18 = local_34;
  FUN_005677d0(param_5);
  local_40 = 999999.0;
  local_34 = 0.0;
  local_38 = 0.0;
  if (0 < *(int *)(param_1 + 0x2a0)) {
    local_3c = (int *)(param_1 + 0x20);
    do {
      iVar3 = *local_3c;
      cVar5 = FUN_00440560(&local_40,unaff_ESI,param_4,&local_20,&local_30,param_3);
      if (cVar5 != '\0') {
        local_34 = (float)iVar3;
      }
      local_38 = (float)((int)local_38 + 1);
      local_3c = local_3c + 1;
    } while ((int)local_38 < *(int *)(param_1 + 0x2a0));
  }
  local_30 = *param_4 - *unaff_ESI;
  local_2c = param_4[1] - unaff_ESI[1];
  local_28 = param_4[2] - unaff_ESI[2];
  local_38 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c);
  if (local_38 <= local_40) {
    return 0;
  }
  if (param_2 == 0) {
    if ((*(byte *)((int)local_34 + 10) & 2) != 0) {
      local_34 = local_40 - param_5;
      FUN_005673e0(local_34);
      fVar4 = _DAT_006cc7bc - local_34 / local_38;
      fVar1 = unaff_ESI[1];
      fVar2 = unaff_ESI[2];
      *param_4 = local_30 + *unaff_ESI;
      param_4[2] = fVar4 * param_6 + local_28 + fVar2;
      param_4[1] = local_2c + fVar1;
      return 1;
    }
    fVar1 = (_DAT_006cc8a8 / *(float *)((int)local_34 + 0x78)) *
            ((*(float *)((int)local_34 + 0x70) * *param_4 +
             *(float *)((int)local_34 + 0x74) * param_4[1]) - *(float *)((int)local_34 + 0x7c));
    if ((*(byte *)((int)local_34 + 10) & 8) != 0) {
      param_4[2] = fVar1 - param_5;
      return 1;
    }
    param_4[2] = fVar1 + param_5;
  }
  else if (param_2 == 1) {
    FUN_005673e0(local_40 - param_5);
    fVar1 = unaff_ESI[1];
    fVar2 = unaff_ESI[2];
    *param_4 = local_30 + *unaff_ESI;
    param_4[2] = local_28 + fVar2;
    param_4[1] = local_2c + fVar1;
    return 1;
  }
  return 1;
}

