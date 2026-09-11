/* Decompiled from Speed.exe @ 00442690 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00442690(int param_1,float param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *extraout_EDX;
  float *pfVar4;
  float *unaff_ESI;
  int iVar5;
  float10 fVar6;
  
  uVar2 = (uint)param_3;
  if ((((*(float *)(param_1 + 0x20) - param_2 <= *unaff_ESI) &&
       (*unaff_ESI <= param_2 + *(float *)(param_1 + 0x28))) &&
      (*(float *)(param_1 + 0x24) - param_2 <= unaff_ESI[1])) &&
     (unaff_ESI[1] <= param_2 + *(float *)(param_1 + 0x2c))) {
    iVar5 = 0;
    param_3 = (float *)0x0;
    if (0 < *(short *)(param_1 + 0x10)) {
      do {
        pfVar4 = (float *)(iVar5 * 0x88 + 0x27c + param_1);
        if ((uVar2 & 0x20) == 0) {
          fVar6 = SQRT(((float10)*pfVar4 - (float10)*unaff_ESI) *
                       ((float10)*pfVar4 - (float10)*unaff_ESI) +
                       ((float10)pfVar4[1] - (float10)unaff_ESI[1]) *
                       ((float10)pfVar4[1] - (float10)unaff_ESI[1]));
        }
        else {
          fVar6 = (float10)FUN_004423b0(param_4);
          pfVar4 = extraout_EDX;
        }
        fVar1 = -((*unaff_ESI - *pfVar4) * pfVar4[3] + (unaff_ESI[1] - pfVar4[1]) * pfVar4[4]);
        if ((((((uVar2 & 1) == 0) || (_DAT_006cc7b8 < fVar1)) &&
             (((uVar2 & 2) == 0 || (fVar1 < _DAT_006cc7b8)))) &&
            ((fVar6 < (float10)param_2 && (((uVar2 & 4) == 0 || (((uint)pfVar4[0x21] & 0x40) != 0)))
             ))) && ((((uVar2 & 0x200) == 0 || (((uint)pfVar4[0x21] & 0x2000000) != 0)) &&
                     (((uVar2 & 0x400) == 0 || (((uint)pfVar4[0x21] & 0x8000000) != 0)))))) {
          param_2 = (float)fVar6;
          param_3 = pfVar4;
        }
        iVar3 = FUN_00674898();
        if (0 < -2 - iVar3) {
          iVar5 = iVar5 + (-2 - iVar3);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)(param_1 + 0x10));
    }
    return param_3;
  }
  return (float *)0x0;
}

