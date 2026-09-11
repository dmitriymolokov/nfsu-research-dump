/* spd-match: far pct=14.18 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004723A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004723a0(undefined4 * obj, undefined4 param_1, int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 4;
  puVar3 = (undefined4 *)(param_2 + 8);
  puVar5 = obj;
  do {
    uVar1 = puVar3[-1];
    uVar2 = *puVar3;
    iVar4 = iVar4 + -1;
    *puVar5 = puVar3[-2];
    puVar5[1] = uVar1;
    *(undefined4 *)(((int)obj - param_2) + -0x10 + (int)(puVar3 + 4)) = uVar2;
    puVar3 = puVar3 + 4;
    puVar5 = puVar5 + 4;
  } while (iVar4 != 0);
  iVar4 = 4;
  puVar3 = (undefined4 *)((int)(obj + 0x10) + param_2 + (8 - (int)obj));
  puVar5 = obj + 0x10;
  do {
    uVar1 = puVar3[-1];
    uVar2 = *puVar3;
    iVar4 = iVar4 + -1;
    *puVar5 = puVar3[-2];
    puVar5[1] = uVar1;
    *(undefined4 *)((int)puVar3 + ((int)obj - param_2)) = uVar2;
    puVar3 = puVar3 + 4;
    puVar5 = puVar5 + 4;
  } while (iVar4 != 0);
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  obj[0x20] = *(undefined4 *)(param_2 + 0x80);
  obj[0x21] = uVar1;
  obj[0x22] = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  obj[0x24] = *(undefined4 *)(param_2 + 0x90);
  obj[0x25] = uVar1;
  obj[0x26] = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  obj[0x28] = *(undefined4 *)(param_2 + 0xa0);
  obj[0x29] = uVar1;
  obj[0x2a] = uVar2;
  puVar3 = (undefined4 *)(param_2 + 0xb0);
  puVar5 = obj + 0x2c;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 0xc4);
  puVar5 = obj + 0x31;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  obj[0x36] = *(undefined4 *)(param_2 + 0xd8);
  return;
}
