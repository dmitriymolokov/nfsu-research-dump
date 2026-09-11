/* Decompiled from Speed.exe @ 00624470 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_00624470(int param_1,int param_2,float *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  
  param_1 = param_1 * 0x10;
  fVar2 = *(float *)(param_4 + param_1);
  uVar4 = *(uint *)(param_4 + 4 + param_1);
  fVar3 = *(float *)(param_4 + 4 + param_1);
  iVar5 = (*(uint *)(param_4 + param_1) & 0xff) * 0x40;
  iVar1 = iVar5 + param_2;
  *param_3 = fVar2 * *(float *)(iVar5 + param_2);
  pfVar6 = (float *)((uVar4 & 0xff) * 0x40 + param_2);
  *param_3 = fVar3 * *pfVar6 + *param_3;
  param_3[4] = fVar2 * *(float *)(iVar1 + 0x10);
  param_3[4] = fVar3 * pfVar6[4] + param_3[4];
  param_3[8] = fVar2 * *(float *)(iVar1 + 0x20);
  param_3[8] = fVar3 * pfVar6[8] + param_3[8];
  param_3[0xc] = fVar2 * *(float *)(iVar1 + 0x30);
  param_3[0xc] = fVar3 * pfVar6[0xc] + param_3[0xc];
  param_3[1] = fVar2 * *(float *)(iVar1 + 4);
  param_3[1] = fVar3 * pfVar6[1] + param_3[1];
  param_3[5] = fVar2 * *(float *)(iVar1 + 0x14);
  param_3[5] = fVar3 * pfVar6[5] + param_3[5];
  param_3[9] = fVar2 * *(float *)(iVar1 + 0x24);
  param_3[9] = fVar3 * pfVar6[9] + param_3[9];
  param_3[0xd] = fVar2 * *(float *)(iVar1 + 0x34);
  param_3[0xd] = fVar3 * pfVar6[0xd] + param_3[0xd];
  param_3[2] = fVar2 * *(float *)(iVar1 + 8);
  param_3[2] = fVar3 * pfVar6[2] + param_3[2];
  param_3[6] = fVar2 * *(float *)(iVar1 + 0x18);
  param_3[6] = fVar3 * pfVar6[6] + param_3[6];
  param_3[10] = fVar2 * *(float *)(iVar1 + 0x28);
  param_3[10] = fVar3 * pfVar6[10] + param_3[10];
  param_3[0xe] = fVar2 * *(float *)(iVar1 + 0x38);
  param_3[0xe] = fVar3 * pfVar6[0xe] + param_3[0xe];
  param_3[3] = fVar2 * *(float *)(iVar1 + 0xc);
  param_3[3] = fVar3 * pfVar6[3] + param_3[3];
  param_3[7] = fVar2 * *(float *)(iVar1 + 0x1c);
  param_3[7] = fVar3 * pfVar6[7] + param_3[7];
  param_3[0xb] = fVar2 * *(float *)(iVar1 + 0x2c);
  param_3[0xb] = fVar3 * pfVar6[0xb] + param_3[0xb];
  param_3[0xf] = fVar2 * *(float *)(iVar1 + 0x3c);
  param_3[0xf] = fVar3 * pfVar6[0xf] + param_3[0xf];
  return;
}

