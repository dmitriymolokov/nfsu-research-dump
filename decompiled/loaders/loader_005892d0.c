/* spd-match: far pct=8.55 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005892D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7d4;
void __fastcall FUN_005892d0(undefined4 * obj, undefined4 *param_1, float *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  uVar1 = obj[1];
  uVar2 = obj[2];
  cVar3 = *(char *)((int)obj + 0xd);
  fVar5 = (float)(int)*(char *)(obj + 3) * _DAT_006cc7d4;
  cVar4 = *(char *)((int)obj + 0xe);
  *param_1 = *obj;
  fVar6 = (float)(int)cVar3 * _DAT_006cc7d4;
  fVar7 = (float)(int)cVar4 * _DAT_006cc7d4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  if (param_2 != (float *)0x0) {
    *param_2 = fVar5;
    param_2[1] = fVar6;
    param_2[2] = fVar7;
  }
  return;
}
