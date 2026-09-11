/* spd-match: far pct=6.67 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();

void FUN_00597730(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*(char *)((int)param_1 + 0x4c2) != '\0') {
    puVar5 = (**(undefined4 * (**)())(*param_1 + 0xc))();
    for (piVar2 = (int *)param_1[0x12e]; piVar2 != param_1 + 0x12e; piVar2 = (int *)*piVar2) {
      iVar3 = piVar2[2];
      FUN_00401cd0();
      uVar1 = puVar5[2];
      uVar4 = *puVar5;
      *(undefined4 *)(iVar3 + 0x74) = puVar5[1];
      *(undefined4 *)(iVar3 + 0x70) = uVar4;
      *(undefined4 *)(iVar3 + 0x7c) = 0;
      *(undefined4 *)(iVar3 + 0x78) = uVar1;
    }
    if ((char)param_1[0x130] == '\x01') {
      for (piVar2 = (int *)param_1[300]; piVar2 != param_1 + 300; piVar2 = (int *)*piVar2) {
        iVar3 = piVar2[2];
        uVar1 = puVar5[2];
        uVar4 = *puVar5;
        *(undefined4 *)(iVar3 + 0x74) = puVar5[1];
        *(undefined4 *)(iVar3 + 0x70) = uVar4;
        *(undefined4 *)(iVar3 + 0x7c) = 0;
        *(undefined4 *)(iVar3 + 0x78) = uVar1;
      }
      *(undefined1 *)(param_1 + 0x130) = 2;
    }
  }
  return;
}
