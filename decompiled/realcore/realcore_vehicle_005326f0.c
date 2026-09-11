/* Decompiled from Speed.exe @ 005326f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005326f0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if ((*(char *)(param_1 + 0x1e) == '\0') && (param_1[0x1b] != 0.0)) {
    fVar2 = param_1[0x1c];
    param_2 = param_2 + *param_1;
    *param_1 = param_2;
    if (param_2 <= param_1[(int)fVar2 + 1]) {
      fVar1 = param_1[(int)fVar2 + 0x15];
      if (fVar1 != 1.4013e-45) {
        if (fVar1 != 2.8026e-45) {
          if (fVar1 == 4.2039e-45) {
            fVar1 = (_DAT_006cc7bc / param_1[(int)fVar2 + 1]) * param_2 - _DAT_006cc7bc;
            param_1[0x1d] =
                 (param_1[(int)fVar2 + 0xd] - param_1[(int)fVar2 + 7]) *
                 (_DAT_006cc7bc - fVar1 * fVar1) + param_1[(int)fVar2 + 7];
            return;
          }
          param_1[0x1d] =
               (param_2 / param_1[(int)fVar2 + 1]) *
               (param_1[(int)fVar2 + 0xd] - param_1[(int)fVar2 + 7]) + param_1[(int)fVar2 + 7];
          return;
        }
        param_1[0x1d] =
             (param_1[(int)fVar2 + 0xd] - param_1[(int)fVar2 + 7]) *
             (param_2 / param_1[(int)fVar2 + 1]) * (param_2 / param_1[(int)fVar2 + 1]) +
             param_1[(int)fVar2 + 7];
      }
    }
    else {
      param_1[0x1d] = param_1[(int)fVar2 + 0xd];
      if ((int)param_1[0x1b] + -1 <= (int)fVar2) {
        *(undefined1 *)(param_1 + 0x1e) = 1;
        return;
      }
      fVar1 = param_1[(int)fVar2 + 1];
      param_1[0x1c] = (float)((int)fVar2 + 1);
      *param_1 = param_2 - fVar1;
      if (*(char *)((int)fVar2 + 0x4d + (int)param_1) != '\0') {
        param_1[(int)fVar2 + 8] = param_1[(int)fVar2 + 0xd];
        return;
      }
    }
  }
  return;
}

