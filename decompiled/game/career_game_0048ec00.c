/* spd-match: far pct=8.79 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0048EC00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7bc;
void __fastcall FUN_0048ec00(int obj, undefined4 param_1, float *param_2)

{
  float fVar1;
  float fVar2;

  float *pfVar3;
  byte bVar4;
  
  if (*(byte *)(obj + 6) < *(byte *)(obj + 5)) {
    *(byte *)(obj + 6) = *(byte *)(obj + 6) + 1;
  }
  pfVar3 = (float *)((uint)*(byte *)(obj + 7) * 0x10 + *(int *)(obj + 8));
  fVar1 = pfVar3[1];
  fVar2 = pfVar3[2];
  *(float *)(obj + 0x10) = *(float *)(obj + 0x10) - *pfVar3;
  *(float *)(obj + 0x14) = *(float *)(obj + 0x14) - fVar1;
  *(float *)(obj + 0x18) = *(float *)(obj + 0x18) - fVar2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *(float *)(obj + 0x10) = *param_2 + *(float *)(obj + 0x10);
  *(float *)(obj + 0x14) = fVar1 + *(float *)(obj + 0x14);
  *(float *)(obj + 0x18) = fVar2 + *(float *)(obj + 0x18);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  pfVar3 = (float *)((uint)*(byte *)(obj + 7) * 0x10 + *(int *)(obj + 8));
  *pfVar3 = *param_2;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar2;
  fVar1 = _DAT_006cc7bc / (float)*(byte *)(obj + 6);
  *(float *)(obj + 0x20) = fVar1 * *(float *)(obj + 0x10);
  *(float *)(obj + 0x24) = *(float *)(obj + 0x14) * fVar1;
  *(float *)(obj + 0x28) = *(float *)(obj + 0x18) * fVar1;
  bVar4 = *(char *)(obj + 7) + 1;
  *(byte *)(obj + 7) = bVar4;
  if (*(byte *)(obj + 5) <= bVar4) {
    *(undefined1 *)(obj + 7) = 0;
  }
  return;
}
