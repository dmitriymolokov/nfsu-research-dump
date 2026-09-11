/* spd-match: far pct=6.15 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00440450 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00440200();
extern int DAT_006cc7a4;
int unaff_ESI;
undefined4 __fastcall FUN_00440450(int obj, float *param_1, float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;

  float *unaff_ESI;
  
  fVar10 = (*param_1 - *(float *)(obj + 0x30)) * *(float *)(obj + 0x70) +
           (param_1[2] - *(float *)(obj + 0x38)) * *(float *)(obj + 0x78) +
           (param_1[1] - *(float *)(obj + 0x34)) * *(float *)(obj + 0x74);
  fVar7 = (*param_2 - *(float *)(obj + 0x30)) * *(float *)(obj + 0x70) +
          (param_2[2] - *(float *)(obj + 0x38)) * *(float *)(obj + 0x78) +
          (param_2[1] - *(float *)(obj + 0x34)) * *(float *)(obj + 0x74);
  if (fVar7 * fVar10 < DAT_006cc7a4) {
    fVar1 = *param_2;
    fVar2 = *param_1;
    fVar3 = param_2[1];
    fVar4 = param_1[1];
    fVar5 = param_2[2];
    fVar6 = param_1[2];
    fVar10 = ABS(fVar10);
    fVar10 = fVar10 / (ABS(fVar7) + fVar10);
    fVar7 = *param_1;
    fVar8 = param_1[1];
    fVar9 = param_1[2];
    cVar11 = FUN_00440200(0);
    if (cVar11 != '\0') {
      if (unaff_ESI != (float *)0x0) {
        *unaff_ESI = (fVar1 - fVar2) * fVar10 + fVar7;
        unaff_ESI[1] = (fVar3 - fVar4) * fVar10 + fVar8;
        unaff_ESI[2] = (fVar5 - fVar6) * fVar10 + fVar9;
      }
      return 1;
    }
  }
  return 0;
}
