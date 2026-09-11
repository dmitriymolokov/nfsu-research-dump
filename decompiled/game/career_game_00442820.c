/* Decompiled from Speed.exe @ 00442820 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00442820(float param_1,float param_2,float param_3)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int unaff_EDI;
  float10 fVar5;
  int local_8;
  
  sVar2 = *(short *)((int)param_1 + 0x10);
  iVar4 = 0;
  local_8 = 0;
  param_1 = 999999.0;
  iVar3 = 0;
  if (0 < sVar2) {
    do {
      if (unaff_EDI == 0) {
        fVar5 = (float10)FUN_00442460(param_2);
        iVar3 = extraout_EDX_00;
      }
      else {
        fVar5 = (float10)FUN_004423b0(param_2);
        iVar3 = extraout_EDX;
      }
      fVar5 = fVar5 - (float10)param_3;
      fVar1 = *(float *)(iVar3 + 0x38);
      if (DAT_007372b4 != 0) {
        fVar1 = DAT_007372b0 - fVar1;
      }
      fVar1 = fVar1 - param_2;
      if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
        if (DAT_007372b0 * _DAT_006cc920 <= fVar1) {
          if (DAT_007372b0 * _DAT_006cc7dc < fVar1) {
            fVar1 = fVar1 - DAT_007372b0;
          }
        }
        else {
          fVar1 = fVar1 + DAT_007372b0;
        }
      }
      if ((((float10)DAT_006cc7a4 <= fVar5) && (fVar5 < (float10)param_1)) && (DAT_006cc7a4 < fVar1)
         ) {
        param_1 = (float)fVar5;
        local_8 = iVar3;
      }
      iVar3 = FUN_00674898();
      if (0 < -2 - iVar3) {
        iVar4 = iVar4 + (-2 - iVar3);
      }
      iVar4 = iVar4 + 1;
      iVar3 = local_8;
    } while (iVar4 < sVar2);
  }
  return iVar3;
}

