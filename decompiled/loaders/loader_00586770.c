/* spd-match: far pct=6.52 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00586770 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00586770(undefined4 * obj, int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar2 = obj[3];
  uVar1 = obj[2];
  uVar3 = *obj;
  *(undefined4 *)(param_1 + 0x74) = obj[1];
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar2 = obj[7];
  uVar1 = obj[6];
  uVar3 = obj[4];
  *(undefined4 *)(param_1 + 0x84) = obj[5];
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  uVar2 = obj[0xb];
  uVar1 = obj[10];
  uVar3 = obj[8];
  *(undefined4 *)(param_1 + 0x94) = obj[9];
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  uVar2 = obj[0xf];
  uVar1 = obj[0xe];
  uVar3 = obj[0xc];
  *(undefined4 *)(param_1 + 0xa4) = obj[0xd];
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  return;
}
