/* spd-match: far pct=6.49 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0049fc90();
int __cdecl FUN_004f7350();
int __cdecl FUN_004f86c0();

int FUN_004f8730(int param_1,int param_2,float param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  piVar2 = _malloc(0x24);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x34);
    piVar2[2] = param_2;
    piVar2[3] = iVar3;
    piVar2[4] = 0;
    *(undefined1 *)(piVar2 + 6) = 0;
    *(undefined1 *)((int)piVar2 + 0x19) = 1;
  }
  *(undefined1 *)(piVar2 + 6) = (*(unsigned char *)&(param_3));
  piVar2[4] = *(int *)(param_1 + 0x1c);
  iVar3 = FUN_0049fc90();
  piVar2[5] = iVar3;
  *(undefined1 *)((int)piVar2 + 0x19) = param_4;
  FUN_004f7350(piVar2 + 7,piVar2 + 8);
  FUN_004f7350(&param_3,&param_4);
  *(float *)(param_1 + 0x1c) = param_3 + *(float *)(param_1 + 0x1c);
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = piVar2;
  *(int **)(param_1 + 8) = piVar2;
  piVar2[1] = (int)puVar1;
  *piVar2 = param_1 + 4;
  uVar4 = FUN_004f86c0();
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  return piVar2[3];
}
