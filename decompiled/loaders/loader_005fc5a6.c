/* Decompiled from Speed.exe @ 005fc5a6 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint __fastcall FUN_005fc5a6(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  void *_Memory;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_10;
  uint local_8;
  
  bVar5 = false;
  FUN_005fb8ae();
  _Memory = _malloc(*(int *)(param_1 + 8) << 2);
  if (_Memory == (void *)0x0) {
    uVar6 = 0x8007000e;
  }
  else {
    uVar6 = 0;
    local_8 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x14) + uVar6 * 4);
        piVar2[7] = uVar6;
        uVar9 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar2 * 4) + 4);
        if (((char)uVar9 < '\0') && ((uVar9 & 0x200) == 0)) {
          *(uint *)((int)_Memory + local_8 * 4) = uVar6;
          local_8 = local_8 + 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 8));
    }
    FUN_005f7e20(FUN_005f7d34,_Memory,local_8,param_1);
    local_10 = 1;
    bVar4 = false;
    if (1 < local_8) {
      do {
        bVar5 = bVar4;
        piVar2 = (int *)(local_10 * 4 + (int)_Memory);
        piVar1 = (int *)(local_10 * 4 + -4 + (int)_Memory);
        iVar7 = FUN_005f7d34(*(undefined4 *)
                              (*(int *)(*(int *)(param_1 + 0x14) + *piVar1 * 4) + 0x1c),*piVar2,
                             param_1);
        if (iVar7 == 0) {
          **(undefined4 **)(*(int *)(param_1 + 0x14) + *piVar2 * 4) =
               *(undefined4 *)(param_1 + 0x4c);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar2 * 4) + 0x1c) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar1 * 4) + 0x1c);
          bVar5 = true;
        }
        local_10 = local_10 + 1;
        bVar4 = bVar5;
      } while (local_10 < local_8);
      if (bVar5) {
        FUN_005fbe30();
      }
    }
    uVar6 = 0;
    uVar9 = 0;
    local_8 = 0;
    bVar4 = false;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x14) + uVar6 * 4);
        piVar2[7] = uVar6;
        iVar7 = *piVar2;
        if ((*(int *)(param_1 + 0x4c) != iVar7) &&
           (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + iVar7 * 4) + 4) & 0x20) != 0 ||
            (*(int *)(param_1 + 0x40) != 0)))) {
          *(uint *)((int)_Memory + uVar9 * 4) = uVar6;
          uVar9 = uVar9 + 1;
        }
        uVar6 = uVar6 + 1;
        local_8 = uVar9;
      } while (uVar6 < *(uint *)(param_1 + 8));
    }
    FUN_005f7e20(FUN_005f7d7e,_Memory,local_8,param_1);
    local_10 = 1;
    if (1 < local_8) {
      do {
        iVar7 = *(int *)(local_10 * 4 + (int)_Memory);
        piVar2 = (int *)(local_10 * 4 + -4 + (int)_Memory);
        iVar8 = FUN_005f7d7e(*(undefined4 *)
                              (*(int *)(*(int *)(param_1 + 0x14) + *piVar2 * 4) + 0x1c),iVar7,
                             param_1);
        if (iVar8 == 0) {
          puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x14) + iVar7 * 4);
          *puVar3 = *(undefined4 *)(param_1 + 0x4c);
          iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar2 * 4) + 0x1c);
          puVar3[7] = iVar7;
          iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4);
          if (*(uint *)(iVar7 + 0x44) < (uint)puVar3[0x11]) {
            *(undefined4 *)(iVar7 + 0x44) = puVar3[0x11];
            *(undefined4 *)(iVar7 + 0x48) = puVar3[0x12];
          }
          if ((*(uint *)(iVar7 + 0x18) & 0xe000000) < (puVar3[6] & 0xe000000)) {
            uVar6 = *(uint *)(iVar7 + 0x18) & 0xf1ffffff;
            *(uint *)(iVar7 + 0x18) = uVar6;
            *(uint *)(iVar7 + 0x18) = puVar3[6] & 0xe000000 | uVar6;
          }
          bVar4 = true;
        }
        local_10 = local_10 + 1;
      } while (local_10 < local_8);
      if (bVar4) {
        FUN_005fbe30();
        bVar5 = true;
      }
    }
    _free(_Memory);
    uVar6 = (uint)!bVar5;
  }
  return uVar6;
}

