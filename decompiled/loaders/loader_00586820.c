/* spd-match: far pct=8.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00586820 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00586820(undefined4 * obj, int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar2 = obj[3];
  uVar1 = obj[2];
  uVar3 = *obj;
  *(undefined4 *)(param_1 + 0xb4) = obj[1];
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar2 = obj[7];
  uVar1 = obj[6];
  uVar3 = obj[4];
  *(undefined4 *)(param_1 + 0xc4) = obj[5];
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  uVar2 = obj[0xb];
  uVar1 = obj[10];
  uVar3 = obj[8];
  *(undefined4 *)(param_1 + 0xd4) = obj[9];
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  uVar2 = obj[0xf];
  uVar1 = obj[0xe];
  uVar3 = obj[0xc];
  *(undefined4 *)(param_1 + 0xe4) = obj[0xd];
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  return;
}
