/* spd-match: far pct=2.08 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004859F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004859f0(undefined4 * obj, undefined4 param_1, undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_2;
  puVar5 = obj;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  obj[8] = param_2[8];
  obj[9] = param_2[9];
  obj[10] = param_2[10];
  obj[0xb] = param_2[0xb];
  iVar3 = 0x20;
  puVar4 = (undefined4 *)((int)(obj + 0xc) + (8 - (int)obj) + (int)param_2);
  puVar5 = obj + 0xc;
  do {
    uVar1 = puVar4[-1];
    uVar2 = *puVar4;
    iVar3 = iVar3 + -1;
    *puVar5 = puVar4[-2];
    puVar5[1] = uVar1;
    *(undefined4 *)((int)obj + (-0x10 - (int)param_2) + (int)(puVar4 + 4)) = uVar2;
    puVar4 = puVar4 + 4;
    puVar5 = puVar5 + 4;
  } while (iVar3 != 0);
  return;
}
