/* Decompiled from Speed.exe @ 004020b0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004020b0(void)

{
  float *pfVar1;
  float *extraout_ECX;
  float10 extraout_ST0;
  float10 fVar2;
  
  pfVar1 = (float *)FUN_00401f70();
  fVar2 = (float10)_DAT_006cc7bc / extraout_ST0;
  *extraout_ECX =
       (float)(((float10)pfVar1[5] * (float10)pfVar1[0xf] * (float10)pfVar1[10] +
               ((((float10)pfVar1[9] * (float10)pfVar1[0xe] * (float10)pfVar1[7] +
                 ((float10)pfVar1[0xb] * (float10)pfVar1[0xd] * (float10)pfVar1[6] -
                 (float10)pfVar1[0xd] * (float10)pfVar1[10] * (float10)pfVar1[7])) -
                (float10)pfVar1[5] * (float10)pfVar1[0xb] * (float10)pfVar1[0xe]) -
               (float10)pfVar1[9] * (float10)pfVar1[0xf] * (float10)pfVar1[6])) * fVar2);
  extraout_ECX[1] =
       (float)((((float10)pfVar1[0xb] * (float10)pfVar1[0xe] * (float10)pfVar1[1] +
                (float10)pfVar1[9] * (float10)pfVar1[0xf] * (float10)pfVar1[2] +
                (((float10)pfVar1[0xd] * (float10)pfVar1[10] * (float10)pfVar1[3] -
                 (float10)pfVar1[0xb] * (float10)pfVar1[0xd] * (float10)pfVar1[2]) -
                (float10)pfVar1[9] * (float10)pfVar1[0xe] * (float10)pfVar1[3])) -
               (float10)pfVar1[1] * (float10)pfVar1[0xf] * (float10)pfVar1[10]) * fVar2);
  extraout_ECX[2] =
       (float)(((float10)pfVar1[1] * (float10)pfVar1[0xf] * (float10)pfVar1[6] +
               ((((float10)pfVar1[5] * (float10)pfVar1[0xe] * (float10)pfVar1[3] +
                 ((float10)pfVar1[0xd] * (float10)pfVar1[7] * (float10)pfVar1[2] -
                 (float10)pfVar1[0xd] * (float10)pfVar1[6] * (float10)pfVar1[3])) -
                (float10)pfVar1[0xe] * (float10)pfVar1[1] * (float10)pfVar1[7]) -
               (float10)pfVar1[5] * (float10)pfVar1[0xf] * (float10)pfVar1[2])) * fVar2);
  extraout_ECX[3] =
       (float)((((float10)pfVar1[1] * (float10)pfVar1[10] * (float10)pfVar1[7] +
                (float10)pfVar1[5] * (float10)pfVar1[0xb] * (float10)pfVar1[2] +
                (((float10)pfVar1[9] * (float10)pfVar1[6] * (float10)pfVar1[3] -
                 (float10)pfVar1[9] * (float10)pfVar1[7] * (float10)pfVar1[2]) -
                (float10)pfVar1[5] * (float10)pfVar1[10] * (float10)pfVar1[3])) -
               (float10)pfVar1[0xb] * (float10)pfVar1[1] * (float10)pfVar1[6]) * fVar2);
  extraout_ECX[4] =
       (float)((((float10)pfVar1[8] * (float10)pfVar1[0xf] * (float10)pfVar1[6] +
                (float10)pfVar1[4] * (float10)pfVar1[0xb] * (float10)pfVar1[0xe] +
                (((float10)pfVar1[0xc] * (float10)pfVar1[10] * (float10)pfVar1[7] -
                 (float10)pfVar1[0xc] * (float10)pfVar1[0xb] * (float10)pfVar1[6]) -
                (float10)pfVar1[8] * (float10)pfVar1[0xe] * (float10)pfVar1[7])) -
               (float10)pfVar1[4] * (float10)pfVar1[0xf] * (float10)pfVar1[10]) * fVar2);
  extraout_ECX[5] =
       (float)(((float10)*pfVar1 * (float10)pfVar1[0xf] * (float10)pfVar1[10] +
               ((((float10)pfVar1[8] * (float10)pfVar1[0xe] * (float10)pfVar1[3] +
                 ((float10)pfVar1[0xc] * (float10)pfVar1[0xb] * (float10)pfVar1[2] -
                 (float10)pfVar1[0xc] * (float10)pfVar1[10] * (float10)pfVar1[3])) -
                (float10)pfVar1[0xb] * (float10)pfVar1[0xe] * (float10)*pfVar1) -
               (float10)pfVar1[8] * (float10)pfVar1[0xf] * (float10)pfVar1[2])) * fVar2);
  extraout_ECX[6] =
       (float)((((float10)pfVar1[0xe] * (float10)*pfVar1 * (float10)pfVar1[7] +
                (float10)pfVar1[4] * (float10)pfVar1[0xf] * (float10)pfVar1[2] +
                (((float10)pfVar1[0xc] * (float10)pfVar1[6] * (float10)pfVar1[3] -
                 (float10)pfVar1[0xc] * (float10)pfVar1[7] * (float10)pfVar1[2]) -
                (float10)pfVar1[4] * (float10)pfVar1[0xe] * (float10)pfVar1[3])) -
               (float10)*pfVar1 * (float10)pfVar1[0xf] * (float10)pfVar1[6]) * fVar2);
  extraout_ECX[7] =
       (float)(((float10)pfVar1[0xb] * (float10)*pfVar1 * (float10)pfVar1[6] +
               ((((float10)pfVar1[4] * (float10)pfVar1[10] * (float10)pfVar1[3] +
                 ((float10)pfVar1[8] * (float10)pfVar1[7] * (float10)pfVar1[2] -
                 (float10)pfVar1[8] * (float10)pfVar1[6] * (float10)pfVar1[3])) -
                (float10)*pfVar1 * (float10)pfVar1[10] * (float10)pfVar1[7]) -
               (float10)pfVar1[4] * (float10)pfVar1[0xb] * (float10)pfVar1[2])) * fVar2);
  extraout_ECX[8] =
       (float)(((float10)pfVar1[4] * (float10)pfVar1[9] * (float10)pfVar1[0xf] +
               ((((float10)pfVar1[8] * (float10)pfVar1[0xd] * (float10)pfVar1[7] +
                 ((float10)pfVar1[5] * (float10)pfVar1[0xc] * (float10)pfVar1[0xb] -
                 (float10)pfVar1[0xc] * (float10)pfVar1[9] * (float10)pfVar1[7])) -
                (float10)pfVar1[4] * (float10)pfVar1[0xb] * (float10)pfVar1[0xd]) -
               (float10)pfVar1[5] * (float10)pfVar1[8] * (float10)pfVar1[0xf])) * fVar2);
  extraout_ECX[9] =
       (float)((((float10)pfVar1[8] * (float10)pfVar1[1] * (float10)pfVar1[0xf] +
                (float10)pfVar1[0xb] * (float10)pfVar1[0xd] * (float10)*pfVar1 +
                (((float10)pfVar1[0xc] * (float10)pfVar1[9] * (float10)pfVar1[3] -
                 (float10)pfVar1[0xc] * (float10)pfVar1[0xb] * (float10)pfVar1[1]) -
                (float10)pfVar1[8] * (float10)pfVar1[0xd] * (float10)pfVar1[3])) -
               (float10)pfVar1[9] * (float10)*pfVar1 * (float10)pfVar1[0xf]) * fVar2);
  extraout_ECX[10] =
       (float)(((float10)pfVar1[5] * (float10)*pfVar1 * (float10)pfVar1[0xf] +
               ((((float10)pfVar1[4] * (float10)pfVar1[0xd] * (float10)pfVar1[3] +
                 ((float10)pfVar1[0xc] * (float10)pfVar1[1] * (float10)pfVar1[7] -
                 (float10)pfVar1[5] * (float10)pfVar1[0xc] * (float10)pfVar1[3])) -
                (float10)pfVar1[0xd] * (float10)*pfVar1 * (float10)pfVar1[7]) -
               (float10)pfVar1[4] * (float10)pfVar1[1] * (float10)pfVar1[0xf])) * fVar2);
  extraout_ECX[0xb] =
       (float)((((float10)pfVar1[4] * (float10)pfVar1[0xb] * (float10)pfVar1[1] +
                (float10)pfVar1[9] * (float10)*pfVar1 * (float10)pfVar1[7] +
                (((float10)pfVar1[5] * (float10)pfVar1[8] * (float10)pfVar1[3] -
                 (float10)pfVar1[8] * (float10)pfVar1[1] * (float10)pfVar1[7]) -
                (float10)pfVar1[4] * (float10)pfVar1[9] * (float10)pfVar1[3])) -
               (float10)pfVar1[5] * (float10)pfVar1[0xb] * (float10)*pfVar1) * fVar2);
  extraout_ECX[0xc] =
       (float)((((float10)pfVar1[4] * (float10)pfVar1[0xd] * (float10)pfVar1[10] +
                (float10)pfVar1[5] * (float10)pfVar1[8] * (float10)pfVar1[0xe] +
                (((float10)pfVar1[0xc] * (float10)pfVar1[9] * (float10)pfVar1[6] -
                 (float10)pfVar1[5] * (float10)pfVar1[0xc] * (float10)pfVar1[10]) -
                (float10)pfVar1[8] * (float10)pfVar1[0xd] * (float10)pfVar1[6])) -
               (float10)pfVar1[4] * (float10)pfVar1[9] * (float10)pfVar1[0xe]) * fVar2);
  extraout_ECX[0xd] =
       (float)(((float10)pfVar1[9] * (float10)pfVar1[0xe] * (float10)*pfVar1 +
               ((((float10)pfVar1[8] * (float10)pfVar1[0xd] * (float10)pfVar1[2] +
                 ((float10)pfVar1[0xc] * (float10)pfVar1[1] * (float10)pfVar1[10] -
                 (float10)pfVar1[0xc] * (float10)pfVar1[9] * (float10)pfVar1[2])) -
                (float10)pfVar1[0xd] * (float10)*pfVar1 * (float10)pfVar1[10]) -
               (float10)pfVar1[8] * (float10)pfVar1[0xe] * (float10)pfVar1[1])) * fVar2);
  extraout_ECX[0xe] =
       (float)((((float10)pfVar1[4] * (float10)pfVar1[0xe] * (float10)pfVar1[1] +
                (float10)pfVar1[0xd] * (float10)*pfVar1 * (float10)pfVar1[6] +
                (((float10)pfVar1[5] * (float10)pfVar1[0xc] * (float10)pfVar1[2] -
                 (float10)pfVar1[0xc] * (float10)pfVar1[1] * (float10)pfVar1[6]) -
                (float10)pfVar1[4] * (float10)pfVar1[0xd] * (float10)pfVar1[2])) -
               (float10)pfVar1[5] * (float10)pfVar1[0xe] * (float10)*pfVar1) * fVar2);
  extraout_ECX[0xf] =
       (float)(((float10)pfVar1[5] * (float10)*pfVar1 * (float10)pfVar1[10] +
               ((((float10)pfVar1[4] * (float10)pfVar1[9] * (float10)pfVar1[2] +
                 ((float10)pfVar1[8] * (float10)pfVar1[1] * (float10)pfVar1[6] -
                 (float10)pfVar1[5] * (float10)pfVar1[8] * (float10)pfVar1[2])) -
                (float10)pfVar1[9] * (float10)*pfVar1 * (float10)pfVar1[6]) -
               (float10)pfVar1[4] * (float10)pfVar1[1] * (float10)pfVar1[10])) * fVar2);
  return;
}

