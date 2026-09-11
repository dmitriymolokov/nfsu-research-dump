/* spd-match: far pct=2.76 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_float */
#include "ghidra_compat.h"

int __cdecl FUN_004584f0();
int __cdecl FUN_004586a0();
extern int DAT_006cc7a4;
extern int _DAT_006cc798;
int unaff_EDI;

float10 FUN_00458750(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int unaff_EDI;
  float10 fVar21;
  undefined4 local_4;
  
  pfVar15 = param_3;
  fVar7 = *(float *)(unsigned int)((param_1 + 0x44));
  fVar11 = *(float *)(unsigned int)((unaff_EDI + 0x14)) * *(float *)(unsigned int)((param_1 + 0x14)) +
           *(float *)(unsigned int)((param_1 + 0x10)) * *(float *)(unsigned int)((unaff_EDI + 0x10));
  fVar8 = *(float *)(unsigned int)((param_1 + 0x40));
  fVar12 = *(float *)(unsigned int)((param_1 + 0x10)) * *(float *)(unsigned int)((unaff_EDI + 0x20)) +
           *(float *)(unsigned int)((unaff_EDI + 0x24)) * *(float *)(unsigned int)((param_1 + 0x14));
  fVar13 = *(float *)(unsigned int)((param_1 + 0x20)) * *(float *)(unsigned int)((unaff_EDI + 0x10)) +
           *(float *)(unsigned int)((unaff_EDI + 0x14)) * *(float *)(unsigned int)((param_1 + 0x24));
  fVar14 = *(float *)(unsigned int)((unaff_EDI + 0x20)) * *(float *)(unsigned int)((param_1 + 0x20)) +
           *(float *)(unsigned int)((unaff_EDI + 0x24)) * *(float *)(unsigned int)((param_1 + 0x24));
  fVar18 = ABS(fVar13 * *(float *)(unsigned int)((unaff_EDI + 0x40)));
  fVar17 = ABS(fVar14 * *(float *)(unsigned int)((unaff_EDI + 0x44)));
  fVar2 = *(float *)(unsigned int)((unaff_EDI + 0x40));
  fVar3 = *(float *)(unsigned int)((unaff_EDI + 0x44));
  fVar9 = *(float *)(unsigned int)((unaff_EDI + 0x44));
  fVar4 = *(float *)(unsigned int)((param_1 + 0x44));
  fVar10 = *(float *)(unsigned int)((unaff_EDI + 0x40));
  fVar19 = ABS(fVar12 * *(float *)(unsigned int)((param_1 + 0x40)));
  fVar20 = ABS(fVar11 * *(float *)(unsigned int)((param_1 + 0x40)));
  fVar5 = *(float *)(unsigned int)((param_1 + 0x44));
  pfVar1 = param_3 + 1;
  fVar6 = *param_3;
  param_3 = (float *)(unsigned int)(fVar17);
  FUN_004586a0(fVar6 * *(float *)(unsigned int)((param_1 + 0x20)) + *pfVar1 * *(float *)(unsigned int)((param_1 + 0x24)),
               *param_2 * *(float *)(unsigned int)((param_1 + 0x20)) + param_2[1] * *(float *)(unsigned int)((param_1 + 0x24)),
               fVar17 + fVar18 + ABS(fVar7));
  FUN_004586a0(*(float *)(unsigned int)((param_1 + 0x10)) * *pfVar15 + pfVar15[1] * *(float *)(unsigned int)((param_1 + 0x14)),
               *(float *)(unsigned int)((param_1 + 0x10)) * *param_2 + param_2[1] * *(float *)(unsigned int)((param_1 + 0x14)),
               ABS(fVar12 * fVar3) + ABS(fVar11 * fVar2) + ABS(fVar8));
  pfVar1 = param_2;
  FUN_004586a0(*(float *)(unsigned int)((unaff_EDI + 0x20)) * *pfVar15 + *(float *)(unsigned int)((unaff_EDI + 0x24)) * pfVar15[1],
               *(float *)(unsigned int)((unaff_EDI + 0x20)) * *param_2 + *(float *)(unsigned int)((unaff_EDI + 0x24)) * param_2[1],
               ABS(fVar14 * fVar4) + fVar19 + ABS(fVar9));
  FUN_004586a0(*pfVar15 * *(float *)(unsigned int)((unaff_EDI + 0x10)) + pfVar15[1] * *(float *)(unsigned int)((unaff_EDI + 0x14)),
               *pfVar1 * *(float *)(unsigned int)((unaff_EDI + 0x10)) + pfVar1[1] * *(float *)(unsigned int)((unaff_EDI + 0x14)),
               ABS(fVar13 * fVar5) + fVar20 + ABS(fVar10));
  iVar16 = FUN_004584f0(local_4,ABS(fVar7),fVar18,param_3,&param_2,&param_3);
  if (iVar16 != 0) {
    iVar16 = FUN_004584f0(param_2,param_3,fVar19,ABS(fVar9),&param_2,&param_3);
    if (iVar16 != 0) {
      iVar16 = FUN_004584f0(param_2,param_3,fVar20,ABS(fVar10),&param_2,&param_3);
      if (iVar16 != 0) {
        fVar21 = (float10)(float)(unsigned int)(param_2);
        if (fVar21 <= (float10)(unsigned int)(DAT_006cc7a4)) {
          if ((fVar21 < (float10)(unsigned int)(DAT_006cc7a4)) && (DAT_006cc7a4 < (float)(unsigned int)(param_3))) {
            return (float10)(unsigned int)(DAT_006cc7a4);
          }
          fVar21 = (float10)(unsigned int)(_DAT_006cc798);
        }
        return fVar21;
      }
    }
  }
  return (float10)(unsigned int)(_DAT_006cc798);
}
