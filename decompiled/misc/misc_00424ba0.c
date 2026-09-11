/* spd-match: far pct=11.21 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424BA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00424ba0(undefined4 * obj, undefined4 *param_1, undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar2 = param_1[3];
  uVar1 = param_1[2];
  uVar3 = *param_1;
  obj[1] = param_1[1];
  *obj = uVar3;
  obj[2] = uVar1;
  obj[3] = uVar2;
  uVar2 = param_1[7];
  uVar1 = param_1[6];
  uVar3 = param_1[4];
  obj[5] = param_1[5];
  obj[4] = uVar3;
  obj[6] = uVar1;
  obj[7] = uVar2;
  uVar2 = param_1[0xb];
  uVar1 = param_1[10];
  uVar3 = param_1[8];
  obj[9] = param_1[9];
  obj[8] = uVar3;
  obj[10] = uVar1;
  obj[0xb] = uVar2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  obj[0xc] = *param_2;
  obj[0xd] = uVar1;
  obj[0xf] = 0x3f800000;
  obj[0xe] = uVar2;
  return;
}
