/* Decompiled from Speed.exe @ 005d6e93 */
/* Module: Loader */
/* Ghidra DecompileAll */


float * FUN_005d6e93(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar5 = (float10)*param_2 * (float10)*param_2 + (float10)param_2[1] * (float10)param_2[1] +
          (float10)param_2[2] * (float10)param_2[2];
  fVar1 = (float)fVar5;
  if (fVar1 == 0.0) {
    ffree(fVar5);
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  else if ((uint)ABS((float)(fVar5 - (float10)1)) < 0x3727c5ad) {
    if (param_1 != param_2) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
    }
  }
  else {
    uVar4 = (uint)fVar1 >> 0xc & 0xff8;
    fVar3 = ((float)((uint)fVar1 & 0xffffff | 0x3f000000) * *(float *)(&DAT_006dd610 + uVar4) +
            *(float *)(&DAT_006dd614 + uVar4)) * (float)(0xbeffffffU - (int)fVar1 >> 1 & 0xff800000)
    ;
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    *param_1 = *param_2 * fVar3;
    param_1[1] = fVar1 * fVar3;
    param_1[2] = fVar2 * fVar3;
  }
  return param_1;
}

