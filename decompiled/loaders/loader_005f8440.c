/* Decompiled from Speed.exe @ 005f8440 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005f8440(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar4 = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + uVar5 * 4);
      iVar1 = FUN_005f7a96();
      if (iVar1 == 0) {
        *(int *)(*(int *)(param_1 + 0x18) + iVar4 * 4) = iVar3;
        iVar4 = iVar4 + 1;
      }
      else if (iVar3 != 0) {
        FUN_005f7186(1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  if (iVar4 == *(int *)(param_1 + 0xc)) {
    uVar2 = 1;
  }
  else {
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4);
    for (uVar5 = *(int *)(param_1 + 0xc) - iVar4 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)(param_1 + 0xc) = iVar4;
    uVar2 = 0;
  }
  return uVar2;
}

