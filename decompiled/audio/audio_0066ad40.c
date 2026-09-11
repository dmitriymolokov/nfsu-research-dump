/* Decompiled from Speed.exe @ 0066ad40 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0066ad40(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x98) == *(int *)(param_1 + 0x94)) {
    FUN_0066a910(0,0,param_1);
  }
  if (*(int *)(param_1 + 0x98) == *(int *)(param_1 + 0x94)) {
    return -7;
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x98));
  uVar3 = (int)*(short *)(puVar1 + 1);
  if ((int)param_3 <= (int)*(short *)(puVar1 + 1)) {
    uVar3 = param_3;
  }
  puVar4 = (undefined4 *)((int)puVar1 + 6);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *puVar1;
  }
  return (int)*(short *)(puVar1 + 1);
}

