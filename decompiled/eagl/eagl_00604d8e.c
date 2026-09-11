/* Decompiled from Speed.exe @ 00604d8e */
/* Module: EAGL */
/* Ghidra DecompileModule */


int __fastcall FUN_00604d8e(int param_1)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_10;
  uint local_8;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  pvVar3 = _malloc(0x38);
  uVar8 = 0;
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_005f7709();
  }
  if (iVar4 == 0) {
    iVar5 = -0x7ff8fff2;
  }
  else {
    iVar5 = FUN_005f7760(0x10000004,4,4,0);
    if (-1 < iVar5) {
      do {
        uVar6 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0,uVar8,0);
        *(undefined4 *)(*(int *)(iVar4 + 8) + uVar8 * 4) = uVar6;
        iVar5 = *(int *)(*(int *)(iVar4 + 8) + uVar8 * 4);
        if (iVar5 == -1) {
          iVar5 = -0x7ff8fff2;
          goto LAB_00604e43;
        }
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar5 * 4) + 0x20) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 4);
      uVar8 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0x14) + uVar8 * 4);
          if (*piVar2 == *(int *)(param_1 + 0x5c)) {
            *(uint *)(*(int *)(iVar4 + 0x10) + piVar2[3] * 4) = uVar8;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 8));
      }
      iVar5 = FUN_005f73c0();
      if (-1 < iVar5) {
        local_10 = 0;
        if (uVar1 != 0) {
          do {
            iVar5 = *(int *)(*(int *)(param_1 + 0x18) + local_10 * 4);
            if ((((iVar5 != 0) && (uVar8 = *(uint *)(iVar5 + 0xc), uVar8 != 0)) &&
                (**(int **)(*(int *)(param_1 + 0x14) + **(int **)(iVar5 + 0x10) * 4) ==
                 *(int *)(param_1 + 0x5c))) && (local_8 = 0, uVar8 != 0)) {
              do {
                uVar7 = 0;
                do {
                  piVar2 = (int *)(*(int *)(iVar5 + 0x10) + local_8 * 4);
                  if (*piVar2 == *(int *)(uVar7 + *(int *)(iVar4 + 0x10))) {
                    *piVar2 = *(int *)(uVar7 + *(int *)(iVar4 + 8));
                  }
                  uVar7 = uVar7 + 4;
                } while (uVar7 < 0x10);
                local_8 = local_8 + 1;
              } while (local_8 < uVar8);
            }
            local_10 = local_10 + 1;
          } while (local_10 < uVar1);
        }
        return 0;
      }
    }
LAB_00604e43:
    FUN_005f7186();
  }
  return iVar5;
}

