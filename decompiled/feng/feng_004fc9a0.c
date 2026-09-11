/* spd-match: far pct=7.14 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FC9A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fcc70();
extern void LAB_004fca01(void);
void __fastcall FUN_004fc9a0(int obj, int param_1, undefined4 *param_2)

{
  byte bVar1;

  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  bVar1 = *(byte *)(obj + 1);
  if ((*(int *)(obj + 4) << 8) >> 8 < param_1) {
    iVar2 = FUN_004fcc70();
    iVar4 = *(int *)(iVar2 + 4);
    if ((iVar4 == 0) || (param_1 <= *(int *)(iVar2 + 0xc))) goto LAB_004fca01;
  }
  else {
    iVar2 = FUN_004fcc70();
    iVar4 = *(int *)(iVar2 + 8);
    if ((iVar4 == 0) || (*(int *)(iVar2 + 0xc) <= param_1)) {
LAB_004fca01:
      puVar5 = (undefined4 *)(iVar2 + 0x10);
      for (uVar3 = (uint)(bVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_2 = *puVar5;
        puVar5 = puVar5 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar3 = bVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
      return;
    }
  }
  puVar5 = (undefined4 *)(iVar4 + 0x10);
  for (uVar3 = (uint)(bVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *puVar5;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar3 = bVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}
