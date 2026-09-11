/* Decompiled from Speed.exe @ 005b6bd0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b6bd0(uint param_1,int param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar3 = 0;
  if (param_4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x14);
    param_1 = 4;
    if (uVar1 < 5) {
      param_1 = uVar1;
    }
    puVar4 = param_3;
    for (iVar2 = (param_4 & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    do {
      uVar5 = 0;
      puVar4 = param_3;
      if (param_1 != 0) {
        do {
          iVar3 = FUN_005b5e0c(param_2,puVar4);
          if (iVar3 < 0) {
            return iVar3;
          }
          param_2 = *(int *)(param_2 + 0xc);
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar5 < param_1);
      }
      if (uVar5 < uVar1) {
        iVar2 = uVar1 - uVar5;
        do {
          iVar2 = iVar2 + -1;
          param_2 = *(int *)(param_2 + 0xc);
        } while (iVar2 != 0);
      }
      param_4 = param_4 - 1;
      param_3 = param_3 + 4;
    } while (param_4 != 0);
  }
  return iVar3;
}

