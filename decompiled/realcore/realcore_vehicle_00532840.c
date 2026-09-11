/* Decompiled from Speed.exe @ 00532840 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00532840(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_006cc7a4;
  fVar1 = (param_1[4] - param_1[2]) / (param_1[3] - param_1[2]);
  if (DAT_006cc7a4 < fVar1) {
    if (_DAT_006cc7bc < fVar1) {
      fVar1 = _DAT_006cc7bc;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[5] = (param_1[1] - *param_1) * fVar1 + *param_1;
    return;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = (param_1[1] - *param_1) * fVar2 + *param_1;
  return;
}

