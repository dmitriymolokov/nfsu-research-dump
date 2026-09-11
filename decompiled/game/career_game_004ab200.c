/* spd-match: far pct=5.29 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AB200 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004ab200(int obj, int param_1, int param_2)

{

  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = (undefined4 *)(obj + param_1);
  if ((undefined4 *)(obj + 8U) <= puVar6) {
    *(undefined4 *)(param_2 + 0x210) = *(undefined4 *)(obj + 4);
  }
  puVar1 = (undefined4 *)(obj + 8U);
  puVar5 = (undefined4 *)(param_2 + 0x364);
  for (iVar2 = 0x18b4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar1 = (undefined4 *)(obj + 0x62d8);
  uVar3 = (int)puVar6 - (int)puVar1;
  if (0x88b4 < (int)uVar3) {
    uVar3 = 0x88b4;
  }
  puVar5 = puVar1;
  puVar7 = (undefined4 *)(param_2 + 0x6634);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  puVar1 = (undefined4 *)((int)puVar1 + uVar3);
  if (puVar1 + 1 <= puVar6) {
    *(undefined4 *)(param_2 + 0xeee8) = *puVar1;
  }
  if (puVar1 + 0x295 <= puVar6) {
    puVar5 = puVar1 + 1;
    puVar7 = (undefined4 *)(param_2 + 0xeef4);
    for (iVar2 = 0x294; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  if (puVar1 + 0x2b5 <= puVar6) {
    puVar6 = puVar1 + 0x295;
    puVar1 = (undefined4 *)(param_2 + 0x214);
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}
