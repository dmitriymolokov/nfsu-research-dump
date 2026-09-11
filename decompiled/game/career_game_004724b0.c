/* spd-match: far pct=10.09 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004724B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004724b0(undefined4 * obj, undefined4 param_1, undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *obj = *param_2;
  obj[1] = uVar1;
  obj[2] = uVar2;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  obj[4] = param_2[4];
  obj[5] = uVar1;
  obj[6] = uVar2;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  obj[8] = param_2[8];
  obj[9] = uVar1;
  obj[10] = uVar2;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  obj[0xc] = param_2[0xc];
  obj[0xd] = uVar1;
  obj[0xe] = uVar2;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  obj[0x10] = param_2[0x10];
  obj[0x11] = uVar1;
  obj[0x12] = uVar2;
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x16];
  obj[0x14] = param_2[0x14];
  obj[0x15] = uVar1;
  obj[0x16] = uVar2;
  uVar1 = param_2[0x19];
  uVar2 = param_2[0x1a];
  obj[0x18] = param_2[0x18];
  obj[0x19] = uVar1;
  obj[0x1a] = uVar2;
  uVar1 = param_2[0x1d];
  uVar2 = param_2[0x1e];
  obj[0x1c] = param_2[0x1c];
  obj[0x1d] = uVar1;
  obj[0x1e] = uVar2;
  uVar1 = param_2[0x21];
  uVar2 = param_2[0x22];
  obj[0x20] = param_2[0x20];
  obj[0x21] = uVar1;
  obj[0x22] = uVar2;
  uVar1 = param_2[0x25];
  uVar2 = param_2[0x26];
  obj[0x24] = param_2[0x24];
  obj[0x25] = uVar1;
  obj[0x26] = uVar2;
  uVar1 = param_2[0x29];
  uVar2 = param_2[0x2a];
  obj[0x28] = param_2[0x28];
  obj[0x29] = uVar1;
  obj[0x2a] = uVar2;
  puVar4 = param_2 + 0x2c;
  puVar5 = obj + 0x2c;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2 + 0x31;
  puVar5 = obj + 0x31;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  obj[0x36] = param_2[0x36];
  return;
}
