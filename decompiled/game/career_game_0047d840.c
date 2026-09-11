/* spd-match: far pct=5.53 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047D840 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0047d840(undefined4 * obj, int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  uVar1 = *obj;
  uVar2 = obj[1];
  uVar3 = obj[3];
  *(undefined4 *)(param_1 + 0x78) = obj[2];
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar1 = obj[4];
  uVar2 = obj[5];
  uVar3 = obj[7];
  *(undefined4 *)(param_1 + 0x98) = obj[6];
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  fVar8 = (float)obj[0x10] * (float)obj[0x11];
  fVar7 = (float)obj[0x10] * (float)obj[0x12];
  fVar4 = (float)obj[8];
  fVar5 = (float)obj[9];
  fVar6 = (float)obj[0xb];
  *(float *)(param_1 + 0x88) = fVar7 * (float)obj[10];
  *(float *)(param_1 + 0x80) = fVar8 * fVar4;
  *(float *)(param_1 + 0x8c) = fVar8 * fVar6;
  *(float *)(param_1 + 0x84) = fVar7 * fVar5;
  fVar4 = (float)obj[0xc];
  fVar5 = (float)obj[0xd];
  fVar6 = (float)obj[0xf];
  *(float *)(param_1 + 0xa8) = fVar7 * (float)obj[0xe];
  *(float *)(param_1 + 0xa0) = fVar8 * fVar4;
  *(float *)(param_1 + 0xac) = fVar8 * fVar6;
  *(float *)(param_1 + 0xa4) = fVar7 * fVar5;
  return;
}
