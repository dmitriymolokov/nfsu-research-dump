/* Decompiled from Speed.exe @ 005fbe30 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005fbe30(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + uVar5 * 4);
      iVar3 = *(int *)(iVar2 + 4);
      if (iVar3 != -1) {
        *(undefined4 *)(iVar2 + 4) =
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x1c);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      piVar4 = *(int **)(*(int *)(param_1 + 0x18) + local_8 * 4);
      if (*piVar4 != 0) {
        uVar5 = 0;
        if (piVar4[1] != 0) {
          do {
            piVar1 = (int *)(piVar4[2] + uVar5 * 4);
            uVar5 = uVar5 + 1;
            *piVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar1 * 4) + 0x1c);
          } while (uVar5 < (uint)piVar4[1]);
        }
        uVar5 = 0;
        if (piVar4[3] != 0) {
          do {
            piVar1 = (int *)(piVar4[4] + uVar5 * 4);
            uVar5 = uVar5 + 1;
            *piVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar1 * 4) + 0x1c);
          } while (uVar5 < (uint)piVar4[3]);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0xc));
  }
  return 0;
}

