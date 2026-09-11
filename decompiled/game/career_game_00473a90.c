/* Decompiled from Speed.exe @ 00473a90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473a90(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int in_stack_0000001c;
  float local_18;
  float *local_14;
  
  iVar3 = *(int *)(param_1 + 0x14);
  local_18 = -9.16e+36;
  local_14 = (float *)0x0;
  if ((DAT_006cc7a4 < *(float *)(param_1 + 0x1d4)) && (*(char *)(param_1 + 0x1d0) == '\0')) {
    iVar3 = iVar3 / 2;
  }
  iVar7 = 0;
  pfVar6 = (float *)0x0;
  if (3 < iVar3) {
    iVar5 = 3;
    pfVar4 = (float *)(param_1 + 0x34);
    do {
      fVar1 = param_2[1] * *pfVar4 + pfVar4[1] * param_2[2] + pfVar4[-1] * *param_2;
      if ((local_18 < fVar1) || (local_18 == _DAT_006ccc18)) {
        local_14 = pfVar4 + -5;
        local_18 = fVar1;
      }
      fVar1 = pfVar4[0xb] * *param_2 + pfVar4[0xd] * param_2[2] + pfVar4[0xc] * param_2[1];
      if ((local_18 < fVar1) || (local_18 == _DAT_006ccc18)) {
        local_14 = pfVar4 + 7;
        local_18 = fVar1;
      }
      fVar1 = pfVar4[0x17] * *param_2 + pfVar4[0x19] * param_2[2] + pfVar4[0x18] * param_2[1];
      if ((local_18 < fVar1) || (local_18 == _DAT_006ccc18)) {
        local_14 = pfVar4 + 0x13;
        local_18 = fVar1;
      }
      fVar1 = pfVar4[0x23] * *param_2 + pfVar4[0x25] * param_2[2] + pfVar4[0x24] * param_2[1];
      if ((local_18 < fVar1) || (local_18 == _DAT_006ccc18)) {
        local_14 = pfVar4 + 0x1f;
        local_18 = fVar1;
      }
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + 4;
      pfVar4 = pfVar4 + 0x30;
      pfVar6 = local_14;
    } while (iVar5 < iVar3);
  }
  if (iVar7 < iVar3) {
    pfVar4 = (float *)(iVar7 * 0x30 + 0x34 + param_1);
    iVar3 = iVar3 - iVar7;
    do {
      fVar1 = *pfVar4 * param_2[1] + pfVar4[1] * param_2[2] + pfVar4[-1] * *param_2;
      if ((local_18 < fVar1) || (local_18 == _DAT_006ccc18)) {
        pfVar6 = pfVar4 + -5;
        local_18 = fVar1;
      }
      pfVar4 = pfVar4 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (pfVar6 != (float *)0x0) {
    fVar1 = pfVar6[5];
    fVar2 = pfVar6[6];
    *(float *)(in_stack_0000001c + 0x10) = pfVar6[4];
    *(undefined4 *)(in_stack_0000001c + 0x1c) = 0;
    *(float *)(in_stack_0000001c + 0x14) = fVar1;
    *(float *)(in_stack_0000001c + 0x18) = fVar2;
    *(undefined2 *)(in_stack_0000001c + 0xc) = *(undefined2 *)(pfVar6 + 3);
  }
  return;
}

