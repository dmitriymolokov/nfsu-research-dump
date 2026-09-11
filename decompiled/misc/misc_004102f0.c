/* spd-match: far pct=8.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004102F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_0073640c;
void __fastcall FUN_004102f0(int obj, int param_1)

{

  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_414;
  undefined1 local_410 [64];
  undefined4 local_3d0 [243];
  
  pbVar1 = (byte *)(obj + 0x22);
  puVar3 = local_3d0;
  local_414 = 2;
  do {
    puVar4 = (undefined4 *)((uint)pbVar1[-1] * 0x40 + param_1);
    puVar5 = puVar3 + -0x10;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((uint)*pbVar1 * 0x40 + param_1);
    puVar5 = puVar3;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((uint)pbVar1[1] * 0x40 + param_1);
    puVar5 = puVar3 + 0x10;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((uint)pbVar1[2] * 0x40 + param_1);
    puVar5 = puVar3 + 0x20;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((uint)pbVar1[3] * 0x40 + param_1);
    puVar5 = puVar3 + 0x30;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((uint)pbVar1[4] * 0x40 + param_1);
    puVar5 = puVar3 + 0x40;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((uint)pbVar1[5] * 0x40 + param_1);
    puVar5 = puVar3 + 0x50;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((uint)pbVar1[6] * 0x40 + param_1);
    puVar5 = puVar3 + 0x60;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    pbVar1 = pbVar1 + 8;
    puVar3 = puVar3 + 0x80;
    local_414 = local_414 + -1;
  } while (local_414 != 0);
  (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0xa0))
            (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0x34),local_410,0x10);
  return;
}
