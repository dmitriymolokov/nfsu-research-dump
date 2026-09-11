/* Decompiled from Speed.exe @ 0059dd90 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0059dd90(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  if (*param_1 != -0x7ffc5000) {
    return 0;
  }
  piVar2 = param_1 + 2;
  if (piVar2 < (int *)((int)param_1 + param_1[1] + 8)) {
    do {
      uVar1 = (int)piVar2 + piVar2[3] + 0x27 & 0xfffffff0;
      uVar3 = (int)piVar2 + 0x1fU & 0xfffffff0;
      *(uint *)(uVar3 + 0x20) = uVar1;
      *(uint *)(uVar3 + 0x24) = uVar1 + 0x10;
      *(undefined1 *)(uVar3 + 0x18) = 0;
      *(undefined4 *)(uVar3 + 0x28) = 0;
      if (*(int *)(uVar3 + 8) == 0) {
        *(undefined **)(uVar3 + 0x28) = &DAT_007376b0;
      }
      FUN_0059c850();
      FUN_004a9900(uVar3);
      FUN_0059db60();
      piVar2 = (int *)((int)piVar2 + piVar2[1] + 8);
    } while (piVar2 < (int *)((int)param_1 + param_1[1] + 8));
  }
  return 1;
}

