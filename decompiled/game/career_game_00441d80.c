/* spd-match: far pct=6.63 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00441D80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004387e0();
int __cdecl FUN_00674898();
extern unsigned char *DAT_006ef2e8;
extern unsigned char *DAT_006ef2ec;
extern unsigned char *DAT_007009d8;
extern int _DAT_006cc7bc;
float10 __fastcall FUN_00441d80(float * obj, float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 extraout_ST0;
  
  iVar8 = (int)param_1 * 0x94;
  fVar5 = *(float *)(&DAT_006ef2e8 + iVar8) * *obj;
  fVar3 = obj[1];
  fVar4 = *(float *)(&DAT_006ef2e8 + iVar8);
  fVar9 = (float10)FUN_004387e0(fVar5);
  param_1 = (float)fVar9;
  if ((float10)fVar5 < fVar9) {
    param_1 = param_1 - _DAT_006cc7bc;
  }
  FUN_004387e0(fVar3 * fVar4);
  iVar6 = FUN_00674898();
  iVar7 = FUN_00674898();
  fVar5 = fVar5 - param_1;
  fVar9 = (float10)(fVar3 * fVar4) - extraout_ST0;
  iVar1 = iVar6 + 1;
  iVar2 = iVar7 + 1;
  return ((float10)*(float *)(&DAT_007009d8 +
                             (iVar1 * iVar2 * -5 + (iVar6 + 2) * (iVar7 + 2) * -3 & 0xfU) * 4) *
          fVar9 * (float10)fVar5 +
         (float10)*(float *)(&DAT_007009d8 +
                            (iVar2 * iVar6 * -5 + (iVar7 + 2) * iVar1 * -3 & 0xfU) * 4) *
         ((float10)_DAT_006cc7bc - (float10)fVar5) * fVar9 +
         (float10)*(float *)(&DAT_007009d8 +
                            (iVar1 * iVar7 * -5 + (iVar6 + 2) * iVar2 * -3 & 0xfU) * 4) *
         ((float10)_DAT_006cc7bc - fVar9) * (float10)fVar5 +
         (float10)*(float *)(&DAT_007009d8 +
                            (iVar7 * iVar6 * -5 + (iVar7 + 1) * iVar1 * -3 & 0xfU) * 4) *
         ((float10)_DAT_006cc7bc - (float10)fVar5) * ((float10)_DAT_006cc7bc - fVar9)) *
         (float10)*(float *)(&DAT_006ef2ec + iVar8);
}
