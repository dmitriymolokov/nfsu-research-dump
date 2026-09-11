/* Decompiled from Speed.exe @ 0042ee40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0042ee40(int param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x1dc) != 0) {
    fVar1 = -_DAT_006b7a3c;
    fVar2 = fVar1;
    if (fVar1 < *(float *)(param_1 + 0x1cc)) {
      fVar2 = *(float *)(param_1 + 0x1cc);
    }
    if (_DAT_006b7a3c < fVar2) {
      fVar2 = _DAT_006b7a3c;
    }
    if (fVar2 == *(float *)(param_1 + 0x1cc)) {
      if (fVar1 < *(float *)(param_1 + 0x1d0)) {
        fVar1 = *(float *)(param_1 + 0x1d0);
      }
      if (_DAT_006b7a3c < fVar1) {
        fVar1 = _DAT_006b7a3c;
      }
      if (fVar1 == *(float *)(param_1 + 0x1d0)) {
        return 1;
      }
    }
  }
  return 0;
}

