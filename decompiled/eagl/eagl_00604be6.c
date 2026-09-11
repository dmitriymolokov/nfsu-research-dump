/* Decompiled from Speed.exe @ 00604be6 */
/* Module: EAGL */
/* Ghidra DecompileModule */


int __fastcall FUN_00604be6(int param_1)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_14;
  int local_10;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      puVar1 = *(uint **)(*(int *)(param_1 + 0x144) + local_8 * 4);
      if (puVar1 != (uint *)0x0) {
        uVar2 = *puVar1 & 0xff000000;
        if ((uVar2 != 0xe1000000) && (uVar2 != 0)) {
          uVar6 = *puVar1 & 0xffffff;
          local_10 = (-(uint)(uVar2 != 0x34000000) & uVar6) * 4;
          if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) +
                                 **(int **)(*(int *)(param_1 + 0x14) +
                                           *(int *)(local_10 + puVar1[2]) * 4) * 4) + 5) & 1) != 0)
          {
            pvVar3 = _malloc(0x38);
            if (pvVar3 == (void *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_005f7709();
            }
            if (iVar4 == 0) {
              return -0x7ff8fff2;
            }
            iVar5 = FUN_005f7760(uVar6 | 0x10000000,uVar6,uVar6,0);
            if ((iVar5 < 0) || (iVar5 = FUN_005f7a42(), iVar5 < 0)) {
LAB_00604d81:
              FUN_005f7186();
              return iVar5;
            }
            local_14 = 0;
            if (uVar6 != 0) {
              do {
                iVar5 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0,local_14,0);
                *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar5 * 4) + 0x20) = 0;
                *(int *)(*(int *)(iVar4 + 0x10) + local_14 * 4) = iVar5;
                *(undefined4 *)(*(int *)(iVar4 + 8) + local_14 * 4) =
                     *(undefined4 *)
                      (local_10 + *(int *)(*(int *)(*(int *)(param_1 + 0x144) + local_8 * 4) + 8));
                local_14 = local_14 + 1;
                *(int *)(local_10 + *(int *)(*(int *)(*(int *)(param_1 + 0x144) + local_8 * 4) + 8))
                     = iVar5;
                local_10 = local_10 + 4;
              } while (local_14 < uVar6);
            }
            puVar1 = (uint *)(param_1 + 0x134);
            if (0x1ff < *puVar1) {
              iVar5 = -0x7ff8fff2;
              goto LAB_00604d81;
            }
            *(int *)(*(int *)(param_1 + 0x140) + *puVar1 * 4) = iVar4;
            *puVar1 = *puVar1 + 1;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0x88));
  }
  return 0;
}

