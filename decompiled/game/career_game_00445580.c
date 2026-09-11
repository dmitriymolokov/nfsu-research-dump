/* spd-match: far pct=5.71 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00445580 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc994;
void __fastcall FUN_00445580(float * obj, int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;

  sVar1 = *(short *)(param_1 + 0x20);
  sVar2 = *(short *)(param_1 + 0x1c);
  fVar4 = (float)(int)*(short *)(param_1 + 0x1e) * _DAT_006cc994;
  obj[3] = 0.0;
  fVar5 = (float)(int)sVar1 * _DAT_006cc994;
  *obj = (float)(int)sVar2 * _DAT_006cc994;
  obj[1] = fVar4;
  obj[2] = fVar5;
  sVar1 = *(short *)(param_1 + 0x24);
  sVar2 = *(short *)(param_1 + 0x26);
  sVar3 = *(short *)(param_1 + 0x22);
  obj[7] = 0.0;
  fVar4 = (float)(int)sVar1 * _DAT_006cc994;
  fVar5 = (float)(int)sVar2 * _DAT_006cc994;
  obj[4] = (float)(int)sVar3 * _DAT_006cc994;
  obj[5] = fVar4;
  obj[6] = fVar5;
  sVar1 = *(short *)(param_1 + 0x2a);
  sVar2 = *(short *)(param_1 + 0x2c);
  sVar3 = *(short *)(param_1 + 0x28);
  obj[0xb] = 0.0;
  fVar4 = (float)(int)sVar1 * _DAT_006cc994;
  fVar5 = (float)(int)sVar2 * _DAT_006cc994;
  obj[8] = (float)(int)sVar3 * _DAT_006cc994;
  obj[9] = fVar4;
  obj[10] = fVar5;
  return;
}
