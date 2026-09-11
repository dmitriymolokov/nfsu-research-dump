/* spd-match: far pct=7.97 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0047d940 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


void FUN_0047d940(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int unaff_ESI;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fVar1 = *(float *)(unaff_ESI + 0x70);
  fVar2 = *(float *)(unaff_ESI + 0x74);
  fVar3 = *(float *)(unaff_ESI + 0x78);
  FUN_0047d780(*(float *)(unaff_ESI + 0x7c) * param_1);
  FUN_0047d780(fVar3 * param_1);
  fVar7 = (float10)FUN_0047d780(fVar2 * param_1);
  fVar8 = (float10)FUN_0047d780(fVar1 * param_1);
  fVar1 = *(float *)(unaff_ESI + 0x80);
  fVar2 = *(float *)(unaff_ESI + 0x84);
  fVar3 = *(float *)(unaff_ESI + 0x90);
  fVar4 = *(float *)(unaff_ESI + 0x94);
  fVar5 = *(float *)(unaff_ESI + 0x98);
  FUN_0047d780(*(float *)(unaff_ESI + 0x9c) * param_1);
  FUN_0047d780(fVar5 * param_1);
  fVar9 = (float10)FUN_0047d780(fVar4 * param_1);
  fVar10 = (float10)FUN_0047d780(fVar3 * param_1);
  local_50 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x3f800000;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_20 = (float)(fVar10 * (float10)*(float *)(unaff_ESI + 0xa0) +
                    (float10)(float)(fVar8 * (float10)fVar1)) * param_2;
  local_1c = ((float)fVar9 * *(float *)(unaff_ESI + 0xa4) + (float)fVar7 * fVar2) * param_2;
  iVar6 = FUN_00674898();
  FUN_0047d7f0(iVar6 / 0x168);
  FUN_0040b990(&local_50,&local_50);
  iVar6 = FUN_00674898();
  FUN_0047d7f0(iVar6 / 0x168);
  FUN_0040ba40(&local_50,&local_50);
  FUN_005ac68f();
  return;
}

