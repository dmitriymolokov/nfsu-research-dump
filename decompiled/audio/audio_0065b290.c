/* Decompiled from Speed.exe @ 0065b290 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065b290(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_2 * _DAT_006cc7c8;
  fVar2 = (float)_DAT_006cc850;
  *(float *)(param_1 + 0x24) = fVar1;
  if (fVar1 < fVar2) {
    *(undefined4 *)(param_1 + 0x24) = 0x3f000000;
    return;
  }
  if ((float)_DAT_006cce38 < fVar1) {
    *(undefined4 *)(param_1 + 0x24) = 0x40000000;
  }
  return;
}

