/* Decompiled from Speed.exe @ 00426300 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00426300(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar1 = *(float *)(param_1 + 0x3d4);
  if (_DAT_00706288 <= fVar1) {
    fVar2 = *(float *)(param_1 + 0x60) - *(float *)(param_2 + 0x60);
    fVar3 = *(float *)(param_1 + 100) - *(float *)(param_2 + 100);
    fVar4 = *(float *)(param_1 + 0x68) - *(float *)(param_2 + 0x68);
    fVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
    fVar6 = _DAT_006ccb7c;
    if (_DAT_006ccb7c < fVar5) {
      fVar6 = fVar5;
    }
    if (_DAT_0070629c < fVar6) {
      fVar6 = _DAT_0070629c;
    }
    if (fVar5 == fVar6) {
      FUN_00567370();
      fVar2 = ((fVar2 * local_20 + local_1c * fVar3 + local_18 * fVar4) / fVar5 - _DAT_006b7b50) /
              (_DAT_006cc7bc - _DAT_006b7b50);
      if (DAT_006cc7a4 <= fVar2) {
        fVar7 = (float10)FUN_00583f20(&PTR_DAT_007062b4,fVar1);
        fVar7 = fVar7 * (float10)fVar2;
        if ((float10)_DAT_006ccb7c <= fVar7) {
          fVar7 = (float10)FUN_00401c80((float)((float10)fVar5 / fVar7),0,0x3f800000);
          fVar7 = (float10)FUN_00583ea0((float)fVar7);
          return fVar7;
        }
      }
    }
  }
  return (float10)DAT_006cc7a4;
}

