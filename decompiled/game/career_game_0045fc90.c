/* spd-match: far pct=5.34 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_float */
#include "ghidra_compat.h"

int __cdecl FUN_00460100();
int __cdecl FUN_00465430();
int __cdecl FUN_00465530();
int __cdecl FUN_00583ea0();
extern int DAT_006cc7a4;
extern int DAT_00700524;
extern unsigned char *DAT_00700528;
extern unsigned char *DAT_00700544;
extern unsigned char *DAT_00700560;
extern unsigned char *DAT_0070057c;
extern unsigned char *DAT_00700598;
extern unsigned char *DAT_007005b4;
extern int _DAT_006b746c;
extern int _DAT_006b7470;
extern int _DAT_006b7474;
extern int _DAT_006b7478;
extern int _DAT_006b747c;
extern int _DAT_006b7480;
extern int _DAT_006b74a4;
extern int _DAT_006b74a8;
extern int _DAT_006cc7bc;
extern int _DAT_006ffff0;
extern int _DAT_007003f8;
extern void LAB_0045ffb0(void);
int unaff_EDI;

void __fastcall FUN_0045fc90(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  char cVar9;
  int unaff_EDI;
  float10 fVar10;
  float10 fVar11;
  float local_c;
  float local_8;
  
  pfVar8 = param_3;
  if ((*(char *)(unaff_EDI + 0x220) != '\0') ||
     (fVar6 = ABS(*(float *)(unsigned int)((unaff_EDI + 0x200))), _DAT_006b74a4 <= fVar6)) {
    iVar4 = *(int *)(unaff_EDI + 0x23c);
    fVar6 = DAT_006cc7a4;
    if (*(byte *)(iVar4 + 0x2e) != 0) {
      fVar6 = (*(float *)(unsigned int)((iVar4 + 0x30)) * (float)*(byte *)(iVar4 + 0x2e)) /
              (*(float *)(unsigned int)((iVar4 + 8)) * *(float *)(unsigned int)((iVar4 + 0x78)));
    }
    fVar7 = -DAT_00700524;
    if (-DAT_00700524 < *(float *)(unsigned int)((iVar4 + 0x5c))) {
      fVar7 = *(float *)(unsigned int)((iVar4 + 0x5c));
    }
    if (DAT_00700524 < fVar7) {
      fVar7 = DAT_00700524;
    }
    if (ABS(*(float *)(unsigned int)((unaff_EDI + 0x200))) + _DAT_006b74a8 <=
        *(float *)(unsigned int)((*(int *)(unaff_EDI + 0x1f0) + 0x3d4))) {
      fVar1 = *(float *)(unsigned int)((&DAT_0070057c + param_2 * 4));
      local_8 = 0.0;
      fVar2 = *(float *)(unsigned int)((&DAT_00700598 + param_2 * 4));
      fVar3 = *(float *)(unsigned int)((&DAT_007005b4 + param_2 * 4));
      local_c = -_DAT_007003f8;
    }
    else {
      fVar1 = *(float *)(unsigned int)((&DAT_00700528 + param_2 * 4));
      local_c = 0.0;
      fVar2 = *(float *)(unsigned int)((&DAT_00700544 + param_2 * 4));
      fVar3 = *(float *)(unsigned int)((&DAT_00700560 + param_2 * 4));
      local_8 = *(float *)(unsigned int)((unaff_EDI + 0x1fc));
    }
    fVar6 = fVar1 * *(float *)(unsigned int)((iVar4 + 0x7c)) + fVar2 * fVar6 + fVar7 * fVar3;
    fVar10 = (float10)FUN_00583ea0(ABS(*(float *)(unsigned int)((*(int *)(unaff_EDI + 0x1f0) + 0x3d4))));
    fVar11 = -fVar10;
    if (fVar11 < (float10)fVar6) {
      fVar11 = (float10)fVar6;
    }
    if ((float10)(float)fVar10 < fVar11) {
      fVar11 = (float10)(float)fVar10;
    }
    fVar11 = ((float10)*(float *)(unsigned int)((unaff_EDI + 0x1dc)) - (float10)*(float *)(unsigned int)((unaff_EDI + 0x1e4))) +
             fVar11;
    if (fVar11 <= (float10)(unsigned int)(local_c)) {
      fVar11 = (float10)(unsigned int)(local_c);
    }
    if (fVar11 <= (float10)(unsigned int)(local_8)) {
      param_3 = (float *)(unsigned int)((float)fVar11);
    }
    else {
      param_3 = (float *)(unsigned int)(local_8);
    }
    local_c = 1.0;
    cVar9 = FUN_00460100();
    if (cVar9 != '\0') {
      iVar4 = *(int *)(unaff_EDI + 0x240);
      fVar6 = DAT_006cc7a4;
      if (*(byte *)(iVar4 + 0x2e) != 0) {
        fVar6 = (*(float *)(unsigned int)((iVar4 + 0x30)) * (float)*(byte *)(iVar4 + 0x2e)) /
                (*(float *)(unsigned int)((iVar4 + 8)) * *(float *)(unsigned int)((iVar4 + 0x78)));
      }
      fVar7 = _DAT_006b7480;
      fVar1 = _DAT_006b747c;
      fVar3 = _DAT_006b7478;
      if ((float)(unsigned int)(param_3) < DAT_006cc7a4) {
        fVar7 = _DAT_006b7474;
        fVar1 = _DAT_006b7470;
        fVar3 = _DAT_006b746c;
      }
      local_c = fVar3 * *(float *)(unsigned int)((iVar4 + 0x7c)) + fVar1 * fVar6 + fVar7 * *(float *)(unsigned int)((iVar4 + 0x5c))
                + _DAT_006cc7bc;
    }
    if ((float)(unsigned int)(param_3) < DAT_006cc7a4) {
      param_3 = (float *)(unsigned int)(-(float)(unsigned int)(param_3));
      cVar9 = FUN_00460100();
      if ((cVar9 != '\0') && (local_c <= (float)(unsigned int)(param_3))) {
        param_3 = (float *)(unsigned int)(local_c);
      }
      *pfVar8 = 0.0;
      *param_4 = (float)(unsigned int)(param_3);
      goto LAB_0045ffb0;
    }
    cVar9 = FUN_00460100();
    if ((cVar9 != '\0') && (local_c <= (float)(unsigned int)(param_3))) {
      param_3 = (float *)(unsigned int)(local_c);
    }
    *pfVar8 = (float)(unsigned int)(param_3);
  }
  else {
    fVar7 = ABS(fVar6 - *(float *)(unsigned int)((*(int *)(unaff_EDI + 0x1f0) + 0x3d4)));
    if (fVar7 < _DAT_006cc7bc == (fVar7 == _DAT_006cc7bc)) {
      if (fVar6 <= *(float *)(unsigned int)((*(int *)(unaff_EDI + 0x1f0) + 0x3d4))) {
        *param_3 = 0.0;
        *param_4 = 1.0;
      }
      else {
        *param_3 = 1.0;
        *param_4 = 0.0;
      }
      goto LAB_0045ffb0;
    }
    *param_3 = 0.0;
  }
  *param_4 = 0.0;
LAB_0045ffb0:
  iVar4 = *(int *)(unaff_EDI + 0x1f0);
  if ((*(int *)(iVar4 + 0x28) == 1) &&
     (piVar5 = *(int **)(iVar4 + 0x2c),
     _DAT_006ffff0 <= *(float *)(unsigned int)((*(int *)(*(int *)(iVar4 + 0x34) + 0x48) + 0x8c)))) {
    *pfVar8 = 0.0;
    cVar9 = FUN_00465430();
    if (cVar9 != '\0') {
      FUN_00465530();
      (**(code **)(*piVar5 + 0x80))();
    }
  }
  fVar6 = *pfVar8;
  if (*pfVar8 <= DAT_006cc7a4) {
    fVar6 = DAT_006cc7a4;
  }
  if (*(float *)(unsigned int)((unaff_EDI + 0x1fc)) < fVar6) {
    fVar6 = *(float *)(unsigned int)((unaff_EDI + 0x1fc));
  }
  *pfVar8 = fVar6;
  fVar6 = *param_4;
  fVar7 = DAT_006cc7a4;
  if ((DAT_006cc7a4 < fVar6) && (fVar7 = fVar6, _DAT_006cc7bc < fVar6)) {
    *param_4 = 1.0;
    return;
  }
  *param_4 = fVar7;
  return;
}
