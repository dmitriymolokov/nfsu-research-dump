/* spd-match: far pct=5.84 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004607a0();
int __cdecl FUN_00464ed0();
int __cdecl FUN_00580240();
int __cdecl FUN_00583ea0();
int __cdecl FUN_00583f20();
extern int DAT_006cc7a4;
extern int DAT_00736514;
extern int DAT_0073ad34;
extern int _DAT_006b72dc;
extern int _DAT_006b7384;
extern int _DAT_006b7388;
extern int _DAT_006b738c;
extern int _DAT_006b7394;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc948;
extern int _DAT_006cc9f4;
extern int _DAT_006cca04;
extern int _DAT_006cca38;
extern int _DAT_006ccc98;
extern int _DAT_0070013c;
extern int _DAT_00700140;
extern int _DAT_00700148;
extern int _DAT_0070014c;
extern unsigned char *PTR_DAT_00705fe0;
extern void LAB_00460dac(void);
int unaff_EDI;

float10 FUN_00460a80(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  char cVar11;
  int *unaff_EDI;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_14;
  float local_10;
  float local_c;
  
  if (DAT_00736514 == '\0') {
    fVar12 = (float10)FUN_00583ea0(*(undefined4 *)(*unaff_EDI + 0x3d0));
    iVar1 = *(int *)(*unaff_EDI + 0x30);
    fVar2 = *(float *)(iVar1 + 0x1dc);
    fVar3 = *(float *)(iVar1 + 0x1e4);
    fVar4 = *(float *)(iVar1 + 0x1e0);
    fVar13 = (float10)FUN_00583ea0(*(undefined4 *)(*unaff_EDI + 0x3d0));
    fVar5 = (float10)(unsigned int)(_DAT_006cc7bc);
    fVar7 = (float10)(unsigned int)(_DAT_006cc7dc);
    fVar8 = (float10)(unsigned int)(_DAT_006cc7dc);
    fVar10 = (float10)(unsigned int)(_DAT_006cc7bc);
    fVar9 = (float10)(unsigned int)(_DAT_006b7384);
    fVar6 = (float10)(unsigned int)(_DAT_006cc7bc);
    fVar14 = (float10)FUN_00583ea0(ABS((float)unaff_EDI[5]));
    fVar14 = fVar14 * (float10)(float)(((fVar10 - (((float10)fVar2 + fVar5) -
                                                  ((float10)fVar4 + (float10)fVar3) * fVar7) * fVar8
                                        ) * fVar13 * fVar9 + fVar6) * (float10)(float)fVar12);
  }
  else {
    fVar14 = (float10)FUN_00583ea0(*(undefined4 *)(*unaff_EDI + 0x3d0));
  }
  local_14 = (float)fVar14;
  local_10 = 0.0;
  if (DAT_00736514 == '\0') {
    iVar1 = *(int *)(*(int *)(*unaff_EDI + 0x3c) + 0x14c);
    if (((iVar1 != 0) && (iVar1 != 0x7fffffff)) &&
       (fVar2 = (float)(unsigned int)(DAT_0073ad34 - iVar1) * _DAT_006cca38, fVar2 < _DAT_006b7394)) {
      fVar3 = *(float *)(*unaff_EDI + 0x3d0);
      fVar14 = (float10)FUN_00580240();
      fVar14 = (float10)fVar3 / (fVar14 * (float10)(unsigned int)(_DAT_006cca04));
      if (fVar14 <= (float10)(unsigned int)(_DAT_006cc7bc)) {
        local_c = (float)fVar14;
      }
      else {
        local_c = 1.0;
      }
      fVar14 = (float10)FUN_00583f20(&PTR_DAT_00705fe0,fVar2);
      local_10 = (float)fVar14;
      local_14 = ((_DAT_006cc7bc - local_10) * (_DAT_006cc7bc - local_c) + local_10) * local_14;
    }
  }
  cVar11 = (unsigned int)(DAT_00736514);
  if (_DAT_006b72dc <= *(float *)(*unaff_EDI + 0x3d0)) {
    fVar14 = (float10)FUN_00464ed0();
  }
  else {
    fVar14 = (float10)(unsigned int)(DAT_006cc7a4);
  }
  fVar6 = (float10)(unsigned int)(_DAT_006cc9f4);
  iVar1 = *unaff_EDI;
  fVar2 = (float)ABS(fVar14 * fVar6);
  fVar3 = SQRT(*(float *)(iVar1 + 0x78) * *(float *)(iVar1 + 0x78) +
               *(float *)(iVar1 + 0x74) * *(float *)(iVar1 + 0x74) +
               *(float *)(iVar1 + 0x70) * *(float *)(iVar1 + 0x70));
  fVar5 = (float10)(unsigned int)(DAT_006cc7a4);
  if ((char)unaff_EDI[1] == '\0') {
    if ((_DAT_0070013c < fVar2) && (_DAT_00700148 <= fVar3)) {
      *(undefined1 *)(unaff_EDI + 1) = 1;
    }
  }
  else if ((fVar2 < _DAT_00700140) || (fVar3 < _DAT_0070014c)) {
    *(undefined1 *)(unaff_EDI + 1) = 0;
  }
  fVar3 = local_14;
  if (fVar5 <= (float10)param_1 * fVar14 * fVar6) {
    if (((cVar11 != '\0') || (ABS((float)unaff_EDI[5]) < _DAT_006b7388)) ||
       (fVar3 = (float)unaff_EDI[0x1d] - _DAT_006b738c * param_2, local_14 <= fVar3))
    goto LAB_00460dac;
  }
  else {
    if (((char)unaff_EDI[1] == '\0') && (fVar2 <= local_14)) goto LAB_00460dac;
    if (cVar11 == '\0') {
      FUN_004607a0();
      fVar14 = (float10)FUN_00583ea0(ABS(param_1));
    }
    else {
      fVar14 = (float10)(unsigned int)(_DAT_006cc7bc);
    }
    local_14 = (float)(((float10)local_10 * (float10)(unsigned int)(_DAT_006ccc98) + (float10)(unsigned int)(_DAT_006cc7bc)) *
                       fVar14 * (float10)fVar2);
    if (fVar14 * (float10)(unsigned int)(_DAT_006cc948) < (float10)local_14) {
      fVar3 = (float)(fVar14 * (float10)(unsigned int)(_DAT_006cc948));
      goto LAB_00460dac;
    }
  }
  fVar3 = local_14;
LAB_00460dac:
  local_14 = fVar3;
  if (_DAT_006cc948 <= local_14) {
    local_14 = 45.0;
  }
  unaff_EDI[0x1d] = (int)local_14;
  return (float10)local_14;
}
