/* Decompiled from Speed.exe @ 004437e0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_004437e0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  short *psVar8;
  int iVar9;
  float *unaff_ESI;
  float local_c;
  float local_4;
  
  pfVar5 = param_1;
  if (unaff_ESI[1] != 0.0) {
    param_2 = *unaff_ESI - param_2;
  }
  fVar1 = unaff_ESI[2];
  param_1 = (float *)0x0;
  local_c = 0.0;
  pfVar7 = (float *)0x0;
  if (0 < (int)fVar1) {
    psVar8 = (short *)((int)unaff_ESI[3] + 4);
    local_4 = fVar1;
    do {
      iVar6 = (int)psVar8[-1];
      if (iVar6 < *psVar8) {
        iVar9 = iVar6 * 0x14;
        iVar6 = *psVar8 - iVar6;
        do {
          if (iVar9 < 0) {
            pfVar7 = (float *)0x0;
          }
          else {
            pfVar7 = (float *)((int)unaff_ESI[5] + iVar9);
          }
          fVar2 = *pfVar7 - *pfVar5;
          fVar3 = pfVar7[1] - pfVar5[1];
          fVar4 = pfVar7[4] - param_2;
          if ((0 < (int)fVar1) && (*(char *)((int)unaff_ESI[3] + 1) != '\0')) {
            if (*unaff_ESI * _DAT_006cc920 <= fVar4) {
              if (*unaff_ESI * _DAT_006cc7dc < fVar4) {
                fVar4 = fVar4 - *unaff_ESI;
              }
            }
            else {
              fVar4 = fVar4 + *unaff_ESI;
            }
          }
          fVar2 = ABS(fVar4 * _DAT_006cc90c) + SQRT(fVar2 * fVar2 + fVar3 * fVar3);
          if ((param_1 == (float *)0x0) || (fVar2 < local_c)) {
            param_1 = pfVar7;
            local_c = fVar2;
          }
          iVar9 = iVar9 + 0x14;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      psVar8 = psVar8 + 0x14;
      local_4 = (float)((int)local_4 + -1);
      pfVar7 = param_1;
    } while (local_4 != 0.0);
  }
  return pfVar7;
}

