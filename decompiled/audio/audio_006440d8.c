/* Decompiled from Speed.exe @ 006440d8 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
fn_006440D8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           float *param_5)

{
  float10 fVar1;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  FUN_0064476e(param_2,param_1,&fStack_c);
  fVar1 = (float10)fn_00644800(&fStack_c);
  fVar1 = (float10)_DAT_006cc7bc / fVar1;
  *param_5 = (float)((float10)fStack_c * fVar1);
  param_5[1] = (float)((float10)fStack_8 * fVar1);
  param_5[2] = (float)((float10)fStack_4 * fVar1);
  return;
}

