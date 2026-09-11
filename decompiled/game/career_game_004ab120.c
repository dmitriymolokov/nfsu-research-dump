/* spd-match: far pct=5.09 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AB120 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004ab120(undefined4 * obj, int param_1, int param_2)

{

  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar7 = (undefined4 *)((int)obj + param_2);
  if (obj + 1 <= puVar7) {
    *obj = 0;
    obj = obj + 1;
  }
  if (obj + 1 <= puVar7) {
    *obj = *(undefined4 *)(param_1 + 0x210);
    obj = obj + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x364);
  puVar2 = obj;
  for (iVar3 = 0x18b4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar1 = obj + 0x18b4;
  uVar5 = 0x88b4;
  if ((int)puVar7 - (int)puVar1 < 0x88b5) {
    uVar5 = (int)puVar7 - (int)puVar1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x6634);
  puVar6 = puVar1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar1 = (undefined4 *)((int)puVar1 + uVar5);
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if (puVar1 + 1 <= puVar7) {
    *puVar1 = *(undefined4 *)(param_1 + 0xeee8);
    puVar1 = puVar1 + 1;
  }
  puVar2 = puVar1;
  if (puVar1 + 0x294 <= puVar7) {
    puVar6 = (undefined4 *)(param_1 + 0xeef4);
    puVar8 = puVar1;
    for (iVar3 = 0x294; puVar2 = puVar1 + 0x294, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  if (puVar2 + 0x20 <= puVar7) {
    puVar7 = (undefined4 *)(param_1 + 0x214);
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}
