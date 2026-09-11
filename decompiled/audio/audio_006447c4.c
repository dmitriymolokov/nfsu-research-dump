/* Decompiled from Speed.exe @ 006447c4 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall fn_006447C4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  fn_00643FF0(param_1,auStack_c);
  fn_00643FF0(param_3,auStack_18);
  fn_00644020(auStack_c,auStack_18);
  fVar1 = (float10)FUN_00672e20();
  return fVar1 * (float10)_UNK_006a92bc;
}

