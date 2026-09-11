/* Decompiled from Speed.exe @ 0066bb50 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_0066bb50(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x98) == *(int *)(param_1 + 0x94)) {
    FUN_0066b710(0,0,param_1);
  }
  if (*(int *)(param_1 + 0x98) == *(int *)(param_1 + 0x94)) {
    return 0xfffffff9;
  }
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x98));
  uVar1 = puVar3[1] - 1;
  if ((int)uVar1 < (int)param_3) {
    param_3 = uVar1;
  }
  puVar4 = (undefined4 *)((int)puVar3 + 9);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *puVar3;
  }
  return uVar1;
}

