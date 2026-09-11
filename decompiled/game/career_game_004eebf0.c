/* spd-match: far pct=2.36 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004ee670();
int __cdecl FUN_004eed80();
int __cdecl FUN_004eef40();
int __cdecl FUN_004ef000();
extern void LAB_004eec74(void);

undefined4 FUN_004eebf0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_1 + 0xe4);
  if (puVar7 == (undefined4 *)0x0) {
    return 0;
  }
  while (param_2 != puVar7) {
    puVar7 = (undefined4 *)puVar7[1];
    if (puVar7 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if (*(int **)(param_1 + 0x10c) == (int *)0x0) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = (**(code **)(**(int **)(param_1 + 0x10c) + 0x10))(puVar7);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xe4);
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_004eec74:
      puVar1 = *(undefined4 **)(param_1 + 0x412c);
      while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar3[1];
        if ((undefined4 *)puVar3[7] == param_2) {
          if (puVar3 == *(undefined4 **)(param_1 + 0x412c)) {
            *(undefined4 **)(param_1 + 0x412c) = puVar1;
          }
          if (puVar3 == *(undefined4 **)(param_1 + 0x4130)) {
            *(undefined4 *)(param_1 + 0x4130) = puVar3[2];
          }
          if (puVar3[2] != 0) {
            *(undefined4 *)(puVar3[2] + 4) = puVar3[1];
          }
          if (puVar3[1] != 0) {
            *(undefined4 *)(puVar3[1] + 8) = puVar3[2];
          }
          puVar3[1] = 0xabadcafe;
          puVar3[2] = 0xabadcafe;
          *(int *)(param_1 + 0x4128) = *(int *)(param_1 + 0x4128) + -1;
          (**(code **)*puVar3)(1);
        }
      }
      if (*(char *)((int)puVar7 + 0x15) != '\0') {
        FUN_004eef40();
        return 1;
      }
      for (iVar2 = puVar7[0x1c]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        iVar5 = FUN_004ef000();
        if (iVar5 != 0) {
          iVar6 = *(int *)(iVar5 + 0x18) + -1;
          if (iVar6 < 1) {
            FUN_004eed80();
          }
          else {
            *(int *)(iVar5 + 0x18) = iVar6;
          }
        }
      }
      if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x10c) + 8))(puVar7,puVar7[0x16],puVar7[0x17]);
      }
      if (cVar4 != '\0') {
        (**(code **)*puVar7)(1);
      }
      return 1;
    }
    if (puVar1 == param_2) {
      FUN_004ee670();
      goto LAB_004eec74;
    }
    puVar1 = (undefined4 *)puVar1[1];
  } while( true );
}
