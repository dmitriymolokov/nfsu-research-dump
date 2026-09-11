/* spd-match: far pct=7.43 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059D740 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567370();
int __cdecl FUN_0059d350();
int __cdecl FUN_0059d540();
extern int DAT_006cc7a4;
float10 __fastcall FUN_0059d740(undefined4 val, undefined4 param_1, float *param_2, undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  float *unaff_ESI;
  float10 fVar9;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar9 = (float10)FUN_0059d540(unaff_ESI,param_1,param_3,val);
  fVar1 = (float)fVar9;
  FUN_0059d350(&local_20,fVar1,0);
  fVar8 = local_18;
  fVar7 = local_1c;
  fVar6 = local_20;
  FUN_0059d350(&local_20,fVar1,1);
  fVar5 = local_18 * DAT_006cc7a4 - local_1c;
  fVar2 = local_20 - local_18 * DAT_006cc7a4;
  fVar4 = local_1c * DAT_006cc7a4;
  fVar3 = local_20 * DAT_006cc7a4;
  local_20 = *unaff_ESI - fVar6;
  local_1c = unaff_ESI[1] - fVar7;
  local_18 = unaff_ESI[2] - fVar8;
  FUN_00567370();
  if (param_2 != (float *)0x0) {
    *param_2 = fVar1;
  }
  return (float10)local_20 * (float10)fVar5 +
         (float10)fVar2 * (float10)local_1c + (float10)(fVar4 - fVar3) * (float10)local_18;
}
