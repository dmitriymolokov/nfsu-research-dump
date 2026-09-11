/* spd-match: far pct=9.29 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_00401c60();
int __cdecl FUN_00401c80();
int __cdecl FUN_00405610();
int __cdecl FUN_0046cfc0();
extern int DAT_006cc7a4;
extern int DAT_0073ad34;
extern int _DAT_006b7218;
extern int _DAT_006b721c;
extern int _DAT_006b7220;
extern int _DAT_006b7224;
extern int _DAT_006b7228;
extern int _DAT_006b722c;
extern int _DAT_006b7230;
extern int _DAT_006b7234;
extern int _DAT_006cc7b0;
extern int _DAT_006cca38;
extern int _DAT_006ccb78;
extern int _DAT_006ccc20;
int unaff_ESI;

void FUN_0046ccc0(void)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int unaff_ESI;
  float10 fVar8;
  
  if (*(float *)(unaff_ESI + 0xa8) < DAT_006cc7a4 == (*(float *)(unaff_ESI + 0xa8) == DAT_006cc7a4))
  {
    fVar3 = (float)(unsigned int)(DAT_0073ad34) * _DAT_006cca38 - *(float *)(unaff_ESI + 0xbc);
    if (_DAT_006cc7b0 < fVar3) {
      *(float *)(unaff_ESI + 0xbc) = (float)(unsigned int)(DAT_0073ad34) * _DAT_006cca38;
      iVar1 = *(int *)(unaff_ESI + 0xac);
      fVar4 = *(float *)(unaff_ESI + 0x14) * _DAT_006ccb78;
      fVar5 = *(float *)(unaff_ESI + 0xa8) / _DAT_006b7218;
      fVar6 = -(_DAT_006b721c * fVar5);
      if (iVar1 == 0) {
        fVar8 = (float10)FUN_0046cfc0();
        if (fVar8 < (float10)(unsigned int)(_DAT_006b7220)) {
          pfVar2 = *(float **)(unaff_ESI + 0x18);
          fVar3 = (fVar4 - *pfVar2) / (pfVar2[2] - *pfVar2);
          fVar8 = (float10)FUN_00401c60(0x3f800000,fVar3 + fVar3);
          *(float *)(unaff_ESI + 0xa4) = (float)(fVar8 * (float10)fVar6);
          return;
        }
        *(undefined4 *)(unaff_ESI + 0xac) = 1;
        return;
      }
      if (iVar1 == 1) {
        fVar8 = (float10)FUN_0046cfc0();
        if ((float10)(unsigned int)(_DAT_006b7220) <= fVar8) {
          pfVar2 = *(float **)(unaff_ESI + 0x18);
          fVar8 = (float10)FUN_0046cfc0();
          fVar8 = (float10)FUN_00401c60(0x3f800000,(float)fVar8);
          fVar8 = (float10)FUN_00401c60(fVar5,(float)((((float10)fVar4 - (float10)*pfVar2) /
                                                      ((float10)pfVar2[2] - (float10)*pfVar2)) *
                                                      fVar8 * (float10)(unsigned int)(_DAT_006b7224) *
                                                      (float10)fVar3 +
                                                     (float10)*(float *)(unaff_ESI + 0xa4)));
          *(float *)(unaff_ESI + 0xa4) = (float)fVar8;
          return;
        }
        if (*(float *)(unaff_ESI + 0x9c) == DAT_006cc7a4) {
          *(undefined4 *)(unaff_ESI + 0xac) = 2;
          *(float *)(unaff_ESI + 0xb4) = fVar3;
          *(undefined4 *)(unaff_ESI + 0xb0) = *(undefined4 *)(unaff_ESI + 0xa4);
          return;
        }
      }
      else if (iVar1 == 2) {
        fVar4 = *(float *)(unaff_ESI + 0xb4) + _DAT_006ccc20;
        fVar4 = fVar4 * fVar4;
        bVar7 = false;
        fVar8 = (float10)FUN_00405610(fVar4 * fVar4 * _DAT_006b7234,fVar6 + fVar6,
                                      *(undefined4 *)(unaff_ESI + 0xb0));
        fVar8 = (float10)FUN_00401c80((float)((((float10)*(float *)(unaff_ESI + 0xb0) /
                                               (float10)fVar5) /
                                              (float10)*(float *)(unaff_ESI + 0xb4)) * fVar8 *
                                              (float10)(unsigned int)(_DAT_006b7230) + (float10)fVar6));
        if (*(float *)(unaff_ESI + 0xb8) == DAT_006cc7a4) {
          *(float *)(unaff_ESI + 0xb8) = (float)fVar8;
        }
        else if ((((float10)*(float *)(unaff_ESI + 0xa4) < fVar8) &&
                 (fVar8 < (float10)*(float *)(unaff_ESI + 0xb8))) ||
                ((fVar8 < (float10)*(float *)(unaff_ESI + 0xa4) &&
                 ((float10)*(float *)(unaff_ESI + 0xb8) < fVar8)))) {
          if (_DAT_006b7228 <= ABS(*(float *)(unaff_ESI + 0xa4) - *(float *)(unaff_ESI + 0xb8))) {
            *(undefined4 *)(unaff_ESI + 0xb8) = *(undefined4 *)(unaff_ESI + 0xa4);
          }
          else {
            bVar7 = true;
          }
        }
        fVar3 = fVar3 + *(float *)(unaff_ESI + 0xb4);
        *(float *)(unaff_ESI + 0xb4) = fVar3;
        *(float *)(unaff_ESI + 0xa4) = (float)fVar8;
        if ((bVar7) || (_DAT_006b722c < fVar3)) {
          *(undefined4 *)(unaff_ESI + 0xac) = 0;
          *(undefined4 *)(unaff_ESI + 0xb8) = 0;
          return;
        }
      }
    }
  }
  return;
}
