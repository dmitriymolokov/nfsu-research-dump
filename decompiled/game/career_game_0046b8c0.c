/* spd-match: far pct=6.82 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0046B8C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0046b070();
int __cdecl FUN_00567370();
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006ccae0;
void __fastcall FUN_0046b8c0(float * obj, float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;

  float *pfVar8;
  float *pfVar9;
  int unaff_EDI;
  
  iVar5 = *(int *)(unaff_EDI + 0x14);
  fVar1 = *(float *)(iVar5 + 0x24);
  fVar6 = *(float *)(iVar5 + 0x20);
  fVar2 = *(float *)(iVar5 + 0x28);
  fVar7 = *(float *)(iVar5 + 0x30);
  fVar3 = *(float *)(iVar5 + 0x34);
  fVar4 = *(float *)(iVar5 + 0x38);
  *param_1 = (fVar7 + fVar6) * _DAT_006cc7dc;
  param_1[1] = (fVar3 + fVar1) * _DAT_006cc7dc;
  param_1[2] = (fVar4 + fVar2) * _DAT_006cc7dc;
  if (*(char *)(*(int *)(unaff_EDI + 0xc) + 0x16) == '\0') {
    FUN_0046b070(unaff_EDI);
    return;
  }
  if (*(char *)(*(int *)(unaff_EDI + 0x10) + 0x16) == '\0') {
    FUN_0046b070(unaff_EDI);
    obj[2] = -obj[2];
    *obj = -*obj;
    obj[1] = -obj[1];
    return;
  }
  fVar7 = fVar7 - fVar6;
  fVar3 = fVar3 - fVar1;
  fVar4 = fVar4 - fVar2;
  *obj = fVar7;
  obj[1] = fVar3;
  obj[2] = fVar4;
  fVar1 = SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar4 * fVar4);
  if (fVar1 < _DAT_006ccae0) {
    pfVar8 = (**(float * (**)())(**(int **)(unaff_EDI + 0xc) + 8))();
    pfVar9 = (**(float * (**)())(**(int **)(unaff_EDI + 0x10) + 8))();
    fVar1 = pfVar9[1];
    fVar2 = pfVar8[1];
    fVar3 = pfVar9[2];
    fVar4 = pfVar8[2];
    *obj = *pfVar9 - *pfVar8;
    obj[2] = fVar3 - fVar4;
    obj[1] = fVar1 - fVar2;
    FUN_00567370();
    return;
  }
  fVar1 = _DAT_006cc7bc / fVar1;
  *obj = fVar7 * fVar1;
  obj[1] = fVar3 * fVar1;
  obj[2] = fVar4 * fVar1;
  return;
}
