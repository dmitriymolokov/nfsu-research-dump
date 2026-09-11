/* Decompiled from Speed.exe @ 006245e0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_006245e0(int param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  
  param_1 = param_1 * 0x10;
  fVar1 = *(float *)(param_1 + param_4);
  uVar3 = *(uint *)(param_1 + 4 + param_4);
  fVar2 = *(float *)(param_1 + 4 + param_4);
  puVar6 = (uint *)(param_1 + param_4);
  uVar4 = puVar6[2];
  fVar5 = (float)puVar6[2];
  iVar7 = (*puVar6 & 0xff) * 0x40;
  iVar8 = iVar7 + param_2;
  *param_3 = fVar1 * *(float *)(iVar7 + param_2);
  pfVar9 = (float *)((uVar3 & 0xff) * 0x40 + param_2);
  pfVar10 = (float *)((uVar4 & 0xff) * 0x40 + param_2);
  *param_3 = fVar2 * *pfVar9 + *param_3;
  *param_3 = fVar5 * *pfVar10 + *param_3;
  param_3[4] = fVar1 * *(float *)(iVar8 + 0x10);
  param_3[4] = fVar2 * pfVar9[4] + param_3[4];
  param_3[4] = fVar5 * pfVar10[4] + param_3[4];
  param_3[8] = fVar1 * *(float *)(iVar8 + 0x20);
  param_3[8] = fVar2 * pfVar9[8] + param_3[8];
  param_3[8] = fVar5 * pfVar10[8] + param_3[8];
  param_3[0xc] = fVar1 * *(float *)(iVar8 + 0x30);
  param_3[0xc] = fVar2 * pfVar9[0xc] + param_3[0xc];
  param_3[0xc] = fVar5 * pfVar10[0xc] + param_3[0xc];
  param_3[1] = fVar1 * *(float *)(iVar8 + 4);
  param_3[1] = fVar2 * pfVar9[1] + param_3[1];
  param_3[1] = fVar5 * pfVar10[1] + param_3[1];
  param_3[5] = fVar1 * *(float *)(iVar8 + 0x14);
  param_3[5] = fVar2 * pfVar9[5] + param_3[5];
  param_3[5] = fVar5 * pfVar10[5] + param_3[5];
  param_3[9] = fVar1 * *(float *)(iVar8 + 0x24);
  param_3[9] = fVar2 * pfVar9[9] + param_3[9];
  param_3[9] = fVar5 * pfVar10[9] + param_3[9];
  param_3[0xd] = fVar1 * *(float *)(iVar8 + 0x34);
  param_3[0xd] = fVar2 * pfVar9[0xd] + param_3[0xd];
  param_3[0xd] = fVar5 * pfVar10[0xd] + param_3[0xd];
  param_3[2] = fVar1 * *(float *)(iVar8 + 8);
  param_3[2] = fVar2 * pfVar9[2] + param_3[2];
  param_3[2] = fVar5 * pfVar10[2] + param_3[2];
  param_3[6] = fVar1 * *(float *)(iVar8 + 0x18);
  param_3[6] = fVar2 * pfVar9[6] + param_3[6];
  param_3[6] = fVar5 * pfVar10[6] + param_3[6];
  param_3[10] = fVar1 * *(float *)(iVar8 + 0x28);
  param_3[10] = fVar2 * pfVar9[10] + param_3[10];
  param_3[10] = fVar5 * pfVar10[10] + param_3[10];
  param_3[0xe] = fVar1 * *(float *)(iVar8 + 0x38);
  param_3[0xe] = fVar2 * pfVar9[0xe] + param_3[0xe];
  param_3[0xe] = fVar5 * pfVar10[0xe] + param_3[0xe];
  param_3[3] = fVar1 * *(float *)(iVar8 + 0xc);
  param_3[3] = fVar2 * pfVar9[3] + param_3[3];
  param_3[3] = fVar5 * pfVar10[3] + param_3[3];
  param_3[7] = fVar1 * *(float *)(iVar8 + 0x1c);
  param_3[7] = fVar2 * pfVar9[7] + param_3[7];
  param_3[7] = fVar5 * pfVar10[7] + param_3[7];
  param_3[0xb] = fVar1 * *(float *)(iVar8 + 0x2c);
  param_3[0xb] = fVar2 * pfVar9[0xb] + param_3[0xb];
  param_3[0xb] = fVar5 * pfVar10[0xb] + param_3[0xb];
  param_3[0xf] = fVar1 * *(float *)(iVar8 + 0x3c);
  param_3[0xf] = fVar2 * pfVar9[0xf] + param_3[0xf];
  param_3[0xf] = fVar5 * pfVar10[0xf] + param_3[0xf];
  return;
}

