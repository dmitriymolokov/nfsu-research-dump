/* spd-match: far pct=12.35 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00584270 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00584270(int obj, float param_1)

{
  float *pfVar1;
  float fVar2;

  byte bVar3;
  
  if (*(byte *)(obj + 6) < *(byte *)(obj + 5)) {
    *(byte *)(obj + 6) = *(byte *)(obj + 6) + 1;
  }
  fVar2 = param_1 + *(float *)(obj + 8);
  pfVar1 = (float *)(*(int *)(obj + 0x10) + (uint)*(byte *)(obj + 7) * 4);
  *(float *)(obj + 8) = fVar2;
  *(float *)(obj + 8) = fVar2 - *pfVar1;
  *pfVar1 = param_1;
  bVar3 = *(char *)(obj + 7) + 1;
  *(byte *)(obj + 7) = bVar3;
  *(float *)(obj + 0xc) = *(float *)(obj + 8) / (float)*(byte *)(obj + 6);
  if (*(byte *)(obj + 5) <= bVar3) {
    *(undefined1 *)(obj + 7) = 0;
  }
  return;
}
