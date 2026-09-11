/* Decompiled from Speed.exe @ 00644080 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00644080(float *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar1 = (float10)func_0x00644800(param_1);
  fVar1 = (float10)_DAT_006cc7bc / fVar1;
  fStack_c = (float)(fVar1 * (float10)*param_1);
  fStack_8 = (float)(fVar1 * (float10)param_1[1]);
  fStack_4 = (float)(fVar1 * (float10)param_1[2]);
  func_0x00644890(1,&fStack_c,param_2,param_3);
  return;
}

