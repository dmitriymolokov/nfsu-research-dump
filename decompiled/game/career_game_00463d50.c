/* spd-match: far pct=9.93 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00463D50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004645d0();
int __cdecl FUN_00464660();
extern int DAT_006cc7a4;
extern int _DAT_006cc7b8;
extern int _DAT_006cc7dc;
extern int _DAT_007000ac;
float10 __fastcall FUN_00463d50(int obj, float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  int local_4c;
  float local_48;
  float local_40;
  float local_28;
  float local_18;
  
  iVar1 = *(int *)(*(int *)(obj + 8) + 0x20);
  fVar3 = ((*(float *)(obj + 0x20) / *(float *)(obj + 0x10)) *
           (*(float *)(iVar1 + 0x268) + *(float *)(iVar1 + 0x264)) * _DAT_006cc7dc) /
          *(float *)(iVar1 + 0x110) + _DAT_007000ac;
  FUN_004645d0(*(undefined4 *)(obj + 0xc));
  FUN_00464660(*(undefined4 *)(obj + 0xc));
  local_48 = 0.0;
  local_40 = 0.0;
  local_4c = 1;
  do {
    fVar4 = (float)local_4c * param_1 * _DAT_006cc7b8;
    fVar2 = fVar4 + *(float *)(obj + 0xc);
    FUN_004645d0(fVar2);
    fVar5 = (((fVar4 - local_40) * -fVar3 + local_18) * (fVar4 - local_40) + local_28) - local_28;
    if (fVar5 <= DAT_006cc7a4) {
      FUN_00464660(fVar2);
      local_40 = fVar4;
    }
    else if (local_48 <= fVar5) {
      local_48 = fVar5;
    }
    local_4c = local_4c + 1;
  } while (local_4c < 10);
  return (float10)local_48;
}
