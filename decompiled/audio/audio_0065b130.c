/* Decompiled from Speed.exe @ 0065b130 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0065b130(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_4;
  
  iVar1 = param_1;
  param_1 = FUN_0065afe0(&param_2,&param_4);
  if ((param_2 != 0) && (local_4 = 0, 0 < (int)param_2)) {
    do {
      iVar3 = *(int *)(iVar1 + 0x2c);
      if (*(int *)(iVar1 + 0x30) < iVar3) break;
      if (*(int *)(iVar1 + 0x30) < iVar3 * 2) {
        local_4 = 0;
      }
      else {
        local_4 = FUN_0065ada0(iVar3,*(undefined4 *)(iVar1 + 0x24));
      }
      FUN_0065aeb0(&param_3,local_4);
      uVar4 = *(uint *)(iVar1 + 0x38);
      if ((int)param_2 <= (int)*(uint *)(iVar1 + 0x38)) {
        uVar4 = param_2;
      }
      puVar5 = (undefined4 *)(iVar1 + 0x838 + *(int *)(iVar1 + 0x3c) * 4);
      puVar6 = param_4;
      for (uVar2 = uVar4 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      param_4 = param_4 + uVar4;
      *(uint *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) + uVar4;
      param_2 = param_2 - uVar4;
      param_1 = param_1 + uVar4;
      *(uint *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) - uVar4;
    } while (0 < (int)param_2);
    if (0 < local_4) {
      puVar5 = param_3;
      puVar6 = (undefined4 *)(iVar1 + 0x40);
      for (uVar4 = *(uint *)(iVar1 + 0x2c) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x2c);
      param_3 = param_3 + *(int *)(iVar1 + 0x2c);
    }
    if (0 < (int)param_2) {
      uVar4 = *(uint *)(iVar1 + 0x30);
      uVar2 = uVar4;
      if ((int)param_2 <= (int)uVar4) {
        uVar4 = param_2;
        uVar2 = param_2;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_4 = *param_3;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      }
      param_1 = param_1 + uVar2;
      *(uint *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) - uVar2;
    }
  }
  return param_1;
}

