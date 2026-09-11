/* spd-match: far pct=18.38 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00549460();
int __cdecl FUN_00668cc0();
extern void LAB_00663f60(void);

int * FUN_00663fe0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)FUN_00549460(0x1cc);
  piVar4 = piVar1;
  for (iVar3 = 0x73; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  *piVar1 = param_1;
  piVar1[1] = param_2;
  if (param_3 < 0x1000) {
    param_3 = 0x1000;
  }
  iVar3 = FUN_00549460(param_3);
  piVar1[0x61] = iVar3;
  piVar1[99] = param_3;
  piVar1[7] = 0;
  piVar1[8] = 0;
  iVar3 = (**(code **)(param_1 + 0x28))(param_1);
  piVar1[0xd] = iVar3;
  piVar1[0x14] = iVar3;
  piVar1[0x15] = iVar3;
  piVar1[0x11] = iVar3;
  piVar1[0x10] = iVar3;
  piVar1[0x19] = iVar3;
  *(undefined1 *)(piVar1 + 0x1a) = 0;
  *(undefined1 *)((int)piVar1 + 0x69) = 0;
  puVar2 = (undefined2 *)((int)piVar1 + 0x76);
  iVar3 = 0x20;
  do {
    puVar2[-1] = 200;
    *puVar2 = 200;
    puVar2[1] = 200;
    puVar2[2] = 1;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00668cc0(piVar1 + 100);
  *(int **)(param_1 + 0x44) = piVar1;
  (**(code **)(param_1 + 0x20))(param_1,&LAB_00663f60);
  piVar1[0x72] = 1;
  return piVar1;
}
