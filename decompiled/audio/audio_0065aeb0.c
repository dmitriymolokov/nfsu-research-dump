/* Decompiled from Speed.exe @ 0065aeb0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0065aeb0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(unaff_EBX + 0x34) < 1) {
    puVar1 = (undefined4 *)*param_1;
    puVar4 = puVar1 + *(int *)(unaff_EBX + 0x2c);
  }
  else {
    puVar4 = (undefined4 *)*param_1;
    puVar1 = (undefined4 *)(unaff_EBX + 0x40);
  }
  if (param_2 == 0) {
    puVar5 = (undefined4 *)(unaff_EBX + 0x838);
    for (uVar2 = *(uint *)(unaff_EBX + 0x2c) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar1;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)(unaff_EBX + 0x30) = *(int *)(unaff_EBX + 0x30) - *(int *)(unaff_EBX + 0x2c);
    *(int *)(unaff_EBX + 0x38) = *(int *)(unaff_EBX + 0x2c);
    *param_1 = (int)puVar4;
    *(undefined4 *)(unaff_EBX + 0x34) = 0;
    *(undefined4 *)(unaff_EBX + 0x3c) = 0;
    return;
  }
  if (0 < param_2) {
    puVar5 = puVar1;
    puVar6 = (undefined4 *)(unaff_EBX + 0x838);
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_0065ab70(puVar1,puVar4,unaff_EBX + 0x838 + param_2 * 4,*(undefined4 *)(unaff_EBX + 0x2c));
    *(int *)(unaff_EBX + 0x38) = *(int *)(unaff_EBX + 0x2c) + param_2;
    *(int *)(unaff_EBX + 0x30) = *(int *)(unaff_EBX + 0x30) - *(int *)(unaff_EBX + 0x2c);
    *param_1 = (int)puVar4;
    *(undefined4 *)(unaff_EBX + 0x34) = 0;
    *(undefined4 *)(unaff_EBX + 0x3c) = 0;
    return;
  }
  FUN_0065ab70(puVar1,puVar4,unaff_EBX + 0x838,*(undefined4 *)(unaff_EBX + 0x2c));
  puVar1 = puVar4 + -param_2;
  puVar5 = (undefined4 *)(unaff_EBX + 0x838 + *(int *)(unaff_EBX + 0x2c) * 4);
  for (uVar2 = *(int *)(unaff_EBX + 0x2c) + param_2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  iVar3 = *(int *)(unaff_EBX + 0x2c);
  *(int *)(unaff_EBX + 0x38) = iVar3 * 2 + param_2;
  *(int *)(unaff_EBX + 0x30) = *(int *)(unaff_EBX + 0x30) + iVar3 * -2;
  *param_1 = (int)(puVar4 + iVar3);
  *(undefined4 *)(unaff_EBX + 0x34) = 0;
  *(undefined4 *)(unaff_EBX + 0x3c) = 0;
  return;
}

