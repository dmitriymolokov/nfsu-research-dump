/* spd-match: far pct=5.52 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A6B00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005a7690();
extern int _DAT_006cc7bc;
float10 __fastcall FUN_005a6b00(int obj, float param_1)

{
  int iVar1;
  float fVar2;

  int iVar3;
  undefined4 unaff_EBX;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar3 = 0;
  if (0 < *(int *)(obj + 4)) {
    piVar4 = (int *)(obj + 8);
    while (*(float *)(*piVar4 + 0x58) <= param_1) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (*(int *)(obj + 4) <= iVar3) {
        fVar5 = (float10)FUN_005a7690();
        return fVar5;
      }
    }
    if (iVar3 == 0) {
      fVar5 = (float10)FUN_005a7690();
      return fVar5;
    }
    if (iVar3 != -1) {
      iVar1 = *(int *)(obj + 8 + iVar3 * 4);
      fVar2 = (*(float *)(iVar1 + 0x58) - param_1) /
              (*(float *)(iVar1 + 0x58) - *(float *)(*(int *)(obj + 4 + iVar3 * 4) + 0x58));
      fVar5 = (float10)FUN_005a7690(unaff_EBX);
      fVar6 = (float10)_DAT_006cc7bc;
      fVar7 = (float10)FUN_005a7690(unaff_EBX);
      return fVar7 * (float10)fVar2 + (float10)(float)((fVar6 - (float10)fVar2) * fVar5);
    }
  }
  fVar5 = (float10)FUN_005a7690();
  return fVar5;
}
