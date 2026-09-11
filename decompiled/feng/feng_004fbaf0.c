/* Decompiled from Speed.exe @ 004fbaf0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fbaf0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 != *param_1) {
    if (param_2 == 0) {
      if ((void *)param_1[1] != (void *)0x0) {
        _free((void *)param_1[1]);
      }
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    puVar1 = _malloc(param_2 * 0xc);
    if (param_2 < *param_1) {
      puVar4 = (undefined4 *)param_1[1];
      puVar5 = puVar1;
      for (uVar2 = param_2 * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    else {
      puVar4 = (undefined4 *)param_1[1];
      puVar5 = puVar1;
      for (uVar2 = *param_1 * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar4 = puVar1 + *param_1 * 3;
      for (uVar2 = (param_2 - *param_1) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    _free((void *)param_1[1]);
    param_1[1] = (int)puVar1;
    *param_1 = param_2;
  }
  return;
}

