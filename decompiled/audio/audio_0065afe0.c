/* Decompiled from Speed.exe @ 0065afe0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void __fastcall FUN_0065afe0(undefined4 param_1,int param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = *param_3;
  if ((int)*(uint *)(param_2 + 0x38) < (int)*param_3) {
    uVar1 = *(uint *)(param_2 + 0x38);
  }
  puVar4 = (undefined4 *)(param_2 + 0x838 + *(int *)(param_2 + 0x3c) * 4);
  puVar5 = (undefined4 *)*param_4;
  for (uVar2 = uVar1 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(uint *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + uVar1;
  *(uint *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) - uVar1;
  *param_3 = *param_3 - uVar1;
  *param_4 = *param_4 + uVar1 * 4;
  return;
}

