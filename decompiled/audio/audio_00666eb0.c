/* Decompiled from Speed.exe @ 00666eb0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00666eb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = *(int **)(param_1 + 0x40);
    do {
      if ((undefined4 *)*piVar4 == param_2) break;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  if (iVar3 != iVar1) {
    if (iVar3 < *(int *)(param_1 + 0x14)) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
    *(int *)(param_1 + 0x18) = iVar1 + -1;
    if (iVar3 < iVar1 + -1) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x40) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x40) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x18));
    }
    uVar2 = *param_2;
    *param_2 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 **)(param_1 + 0x38) = param_2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return uVar2;
  }
  return 0;
}

