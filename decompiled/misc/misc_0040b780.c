/* spd-match: far pct=7.88 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51/va_0040B780 */
#include "ghidra_compat.h"

int __cdecl FUN_00567370();
void __cdecl thunk_FUN_005ac68f(void);
int unaff_EDI;
int unaff_ESI;

void __fastcall FUN_0040b780(float * obj, float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  float *unaff_ESI;
  float *unaff_EDI;
  
  fVar1 = *obj - *unaff_EDI;
  fVar2 = obj[1] - unaff_EDI[1];
  fVar3 = obj[2] - unaff_EDI[2];
  FUN_00567370();
  fVar5 = fVar3 * -param_1[1] - -param_1[2] * fVar2;
  fVar6 = -param_1[2] * fVar1 - fVar3 * -*param_1;
  fVar4 = fVar2 * -*param_1 - -param_1[1] * fVar1;
  FUN_00567370();
  FUN_00567370();
  *unaff_ESI = fVar5;
  unaff_ESI[1] = fVar4 * fVar2 - fVar3 * fVar6;
  unaff_ESI[2] = fVar1;
  unaff_ESI[4] = fVar6;
  unaff_ESI[5] = fVar3 * fVar5 - fVar4 * fVar1;
  unaff_ESI[6] = fVar2;
  unaff_ESI[8] = fVar4;
  unaff_ESI[3] = 0.0;
  unaff_ESI[7] = 0.0;
  unaff_ESI[0xb] = 0.0;
  unaff_ESI[0xc] = 0.0;
  unaff_ESI[0xd] = 0.0;
  unaff_ESI[0xe] = 0.0;
  unaff_ESI[9] = fVar6 * fVar1 - fVar2 * fVar5;
  unaff_ESI[10] = fVar3;
  unaff_ESI[0xf] = 1.0;
  thunk_FUN_005ac68f();
  return;
}
