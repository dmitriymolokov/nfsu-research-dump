/* Decompiled from Speed.exe @ 006442a0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void fn_006442A0(float *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fStack_8;
  float fStack_4;
  
  fn_00644150(&param_2,&fStack_4,&fStack_8);
  fVar1 = *param_1;
  *param_3 = fVar1 * fStack_8 + fStack_4 * param_1[2];
  param_3[1] = param_1[1];
  param_3[2] = fStack_8 * param_1[2] - fVar1 * fStack_4;
  param_3[3] = param_1[3];
  fVar1 = param_1[4];
  param_3[4] = fVar1 * fStack_8 + fStack_4 * param_1[6];
  param_3[5] = param_1[5];
  param_3[6] = fStack_8 * param_1[6] - fVar1 * fStack_4;
  param_3[7] = param_1[7];
  fVar1 = param_1[8];
  param_3[8] = fVar1 * fStack_8 + fStack_4 * param_1[10];
  param_3[9] = param_1[9];
  param_3[10] = fStack_8 * param_1[10] - fVar1 * fStack_4;
  param_3[0xb] = param_1[0xb];
  fVar1 = param_1[0xc];
  param_3[0xc] = fVar1 * fStack_8 + fStack_4 * param_1[0xe];
  param_3[0xd] = param_1[0xd];
  param_3[0xe] = fStack_8 * param_1[0xe] - fVar1 * fStack_4;
  param_3[0xf] = param_1[0xf];
  return;
}

