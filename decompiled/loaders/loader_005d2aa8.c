/* Decompiled from Speed.exe @ 005d2aa8 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d2aa8(uint param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint local_10;
  uint local_c;
  
  if ((param_4 != 0) && (param_3 == 0)) {
    return 0x8876086c;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 4) = 1;
  **(undefined4 **)(param_1 + 0x90) = 3;
  *(uint *)(*(int *)(param_1 + 0x90) + 0x10) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14) = 4;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x18) = 1;
  iVar2 = FUN_005d1d40(param_2,1,1);
  if ((iVar2 != 0) &&
     (iVar5 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar2 + 4) * 4),
     (*(uint *)(iVar5 + 0x20) & 2) == 0)) {
    if (*(int *)(iVar5 + 0x38) == 0) {
      iVar7 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar3 = (int *)(*(int *)(iVar5 + 0x24) + *(int *)(iVar2 + 8) + iVar7);
    if ((((piVar3[4] != 0) && (*(int *)(iVar2 + 0x18) == -1)) && (param_4 <= (uint)piVar3[4])) &&
       (piVar3[1] == 1)) {
      iVar7 = *piVar3;
      uVar1 = piVar3[5];
      if (*(int *)(iVar5 + 0x38) == 0) {
        iVar8 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      puVar10 = (uint *)(*(int *)(iVar5 + 0x28) + *(int *)(iVar2 + 0xc) + iVar8);
      param_1 = 4;
      if (uVar1 < 5) {
        param_1 = uVar1;
      }
      if (iVar7 == 1) {
        if (param_4 != 0) {
          local_c = param_4;
          do {
            if (param_1 != 0) {
              local_10 = param_1;
              puVar4 = puVar10;
              do {
                iVar5 = __ftol();
                *puVar4 = (uint)(iVar5 != 0);
                puVar4 = puVar4 + 1;
                local_10 = local_10 - 1;
              } while (local_10 != 0);
            }
            puVar10 = puVar10 + uVar1;
            local_c = local_c - 1;
          } while (local_c != 0);
        }
      }
      else if (iVar7 == 2) {
        if (param_4 != 0) {
          local_10 = param_4;
          do {
            if (param_1 != 0) {
              local_c = param_1;
              puVar4 = puVar10;
              do {
                uVar9 = __ftol();
                *puVar4 = uVar9;
                puVar4 = puVar4 + 1;
                local_c = local_c - 1;
              } while (local_c != 0);
            }
            puVar10 = puVar10 + uVar1;
            local_10 = local_10 - 1;
          } while (local_10 != 0);
        }
      }
      else {
        if (iVar7 != 3) {
          return 0x8876086c;
        }
        for (; param_4 != 0; param_4 = param_4 - 1) {
          if (param_1 != 0) {
            puVar4 = puVar10;
            uVar9 = param_1;
            do {
              *puVar4 = *(uint *)((param_3 - (int)puVar10) + (int)puVar4);
              puVar4 = puVar4 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          param_3 = param_3 + 0x10;
          puVar10 = puVar10 + uVar1;
        }
      }
      uVar6 = FUN_005d02d7(iVar2);
      return uVar6;
    }
  }
  return 0x8876086c;
}

