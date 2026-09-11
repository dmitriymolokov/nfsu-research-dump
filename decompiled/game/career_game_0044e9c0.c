/* spd-match: far pct=4.08 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_004556d0();
int __cdecl FUN_004650d0();
int __cdecl FUN_00564b10();
int __cdecl FUN_005672b0();
extern int DAT_006b75f4;
extern int DAT_006cc7a4;
extern int _DAT_006b75ec;
extern int _DAT_006b75f0;
extern int _DAT_006b75f8;
extern int _DAT_006cc798;
extern int _DAT_006cc7bc;
extern int _DAT_006cc8bc;
int unaff_EDI;

undefined4 __fastcall FUN_0044e9c0(undefined4 param_1,int param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float *pfVar7;
  float *extraout_EDX;
  int unaff_EDI;
  float10 fVar8;
  float10 fVar9;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = *(float *)(unaff_EDI + 0x60);
  local_4 = *(float *)(unaff_EDI + 100);
  pfVar7 = *(float **)(param_2 + 4);
  if (ABS(*(float *)(unaff_EDI + 0x3d4)) <= _DAT_006cc7bc) {
    fVar8 = (float10)FUN_00564b10();
    fVar9 = (float10)FUN_00564b10();
    fVar3 = (local_8 - *extraout_EDX) * extraout_EDX[4] -
            (local_4 - extraout_EDX[1]) * extraout_EDX[3];
    fVar8 = (((float10)(float)fVar8 + (float10)(float)fVar8 + (float10)local_8) -
            (float10)*extraout_EDX) * (float10)extraout_EDX[4] -
            ((fVar9 + fVar9 + (float10)local_4) - (float10)extraout_EDX[1]) *
            (float10)extraout_EDX[3];
    local_8 = fVar3 + extraout_EDX[9];
    fVar1 = (float)((float10)extraout_EDX[10] - fVar8);
    fVar2 = (float)(fVar8 + (float10)extraout_EDX[9]);
    if ((DAT_006cc7a4 <= fVar1) || (DAT_006cc7a4 <= fVar1 - (extraout_EDX[10] - fVar3))) {
      if (DAT_006cc7a4 <= fVar2) {
        return 0;
      }
      if (DAT_006cc7a4 <= fVar2 - local_8) {
        return 0;
      }
    }
  }
  else {
    fVar1 = (local_8 - *pfVar7) * pfVar7[4] - (local_4 - pfVar7[1]) * pfVar7[3];
    fVar3 = ((_DAT_006b75ec * *(float *)(unaff_EDI + 0x70) + local_8) - *pfVar7) * pfVar7[4] -
            ((_DAT_006b75ec * *(float *)(unaff_EDI + 0x74) + local_4) - pfVar7[1]) * pfVar7[3];
    fVar2 = pfVar7[10] - fVar1;
    fVar1 = fVar1 + pfVar7[9];
    local_8 = pfVar7[10] - fVar3;
    fVar3 = fVar3 + pfVar7[9];
    fVar4 = (fVar3 - fVar1) / _DAT_006b75ec;
    if (((fVar4 <= _DAT_006cc8bc) || (fVar2 <= DAT_006cc7a4)) || (fVar1 <= DAT_006cc7a4)) {
      fVar5 = _DAT_006cc798;
      if (((_DAT_006cc8bc < fVar4) && (DAT_006cc7a4 < fVar1)) && (DAT_006cc7a4 < fVar2)) {
        fVar5 = fVar1 / fVar4;
      }
    }
    else {
      fVar5 = fVar2 / fVar4;
    }
    if ((fVar5 < _DAT_006b75f0 == (fVar5 == _DAT_006b75f0)) &&
       ((DAT_006cc7a4 <= fVar2 || (fVar2 <= local_8)))) {
      if (DAT_006cc7a4 <= fVar1) {
        return 0;
      }
      if (fVar1 <= fVar3) {
        return 0;
      }
    }
    if (*(float *)(unaff_EDI + 0x3d0) <= DAT_006cc7a4) {
      FUN_005672b0();
      FUN_005672b0();
      if (local_8 * fVar3 + local_4 * local_c <= _DAT_006b75f8) {
        return 2;
      }
      return 0;
    }
  }
  if (param_3 != '\0') {
    pfVar7 = (**(float * (**)())(**(int **)(unaff_EDI + 0x30) + 0x7c))();
    local_8 = *pfVar7;
    local_4 = pfVar7[1];
    FUN_004650d0(&local_8);
    (**(code **)(**(int **)(unaff_EDI + 0x30) + 0x7c))(DAT_006b75f4);
    cVar6 = FUN_004556d0();
    if (cVar6 != '\0') {
      return 0;
    }
  }
  return 1;
}
