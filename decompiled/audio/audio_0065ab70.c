/* spd-match: far pct=3.76 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0065AB70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006cc8a8;
void __fastcall FUN_0065ab70(int obj, int param_1, int param_2, int param_3, int param_4)

{
  float fVar1;
  float fVar2;

  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  
  if (obj < 1) {
    obj = -obj;
    fVar2 = _DAT_006cc7bc / (float)param_4;
    fVar1 = DAT_006cc7a4;
  }
  else {
    fVar2 = _DAT_006cc8a8 / (float)param_4;
    fVar1 = _DAT_006cc7bc;
  }
  iVar5 = param_4 - obj;
  iVar8 = obj;
  if (3 < iVar5) {
    iVar7 = obj + 3;
    pfVar3 = (float *)(param_3 + 4);
    pfVar4 = (float *)(param_1 + 8 + obj * 4);
    pfVar6 = (float *)(param_1 + 0xc);
    do {
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 4;
      pfVar3[-1] = fVar1 * pfVar4[-2] + (_DAT_006cc7bc - fVar1) * pfVar6[-3];
      fVar1 = fVar1 + fVar2;
      *pfVar3 = fVar1 * pfVar4[-1] +
                (_DAT_006cc7bc - fVar1) *
                *(float *)((param_1 - param_3) + -0x10 + (int)(pfVar3 + 4));
      fVar1 = fVar1 + fVar2;
      pfVar3[1] = fVar1 * *pfVar4 + (_DAT_006cc7bc - fVar1) * pfVar6[-1];
      fVar1 = fVar1 + fVar2;
      pfVar3[2] = fVar1 * pfVar4[1] + (_DAT_006cc7bc - fVar1) * *pfVar6;
      fVar1 = fVar1 + fVar2;
      pfVar3 = pfVar3 + 4;
      pfVar4 = pfVar4 + 4;
      pfVar6 = pfVar6 + 4;
    } while (iVar7 < param_4);
  }
  if (iVar8 < param_4) {
    pfVar3 = (float *)(param_3 + (iVar8 - obj) * 4);
    do {
      iVar8 = iVar8 + 1;
      *pfVar3 = fVar1 * *(float *)(param_1 + -4 + iVar8 * 4) +
                (_DAT_006cc7bc - fVar1) * *(float *)((int)pfVar3 + (param_1 - param_3));
      fVar1 = fVar1 + fVar2;
      pfVar3 = pfVar3 + 1;
    } while (iVar8 < param_4);
  }
  iVar8 = 0;
  if (3 < obj) {
    iVar7 = 3;
    pfVar3 = (float *)(param_3 + 4 + iVar5 * 4);
    pfVar4 = (float *)(param_2 + 8);
    pfVar6 = (float *)(param_1 + 0xc + iVar5 * 4);
    do {
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 4;
      pfVar3[-1] = fVar1 * pfVar4[-2] + (_DAT_006cc7bc - fVar1) * pfVar6[-3];
      fVar1 = fVar1 + fVar2;
      *pfVar3 = fVar1 * pfVar4[-1] +
                (_DAT_006cc7bc - fVar1) * *(float *)((int)pfVar3 + (param_1 - param_3));
      fVar1 = fVar1 + fVar2;
      pfVar3[1] = fVar1 * *pfVar4 + (_DAT_006cc7bc - fVar1) * pfVar6[-1];
      fVar1 = fVar1 + fVar2;
      pfVar3[2] = fVar1 * pfVar4[1] + (_DAT_006cc7bc - fVar1) * *pfVar6;
      fVar1 = fVar1 + fVar2;
      pfVar3 = pfVar3 + 4;
      pfVar4 = pfVar4 + 4;
      pfVar6 = pfVar6 + 4;
    } while (iVar7 < obj);
  }
  if (iVar8 < obj) {
    pfVar3 = (float *)(param_3 + ((iVar8 - obj) + param_4) * 4);
    do {
      iVar8 = iVar8 + 1;
      *pfVar3 = fVar1 * *(float *)(param_2 + -4 + iVar8 * 4) +
                (_DAT_006cc7bc - fVar1) * *(float *)((int)pfVar3 + (param_1 - param_3));
      fVar1 = fVar1 + fVar2;
      pfVar3 = pfVar3 + 1;
    } while (iVar8 < obj);
  }
  return;
}
