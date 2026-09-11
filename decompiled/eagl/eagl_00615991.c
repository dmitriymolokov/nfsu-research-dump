/* Decompiled from Speed.exe @ 00615991 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __thiscall FUN_00615991(int param_1,int param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  pvVar1 = _malloc(0x38);
  if (pvVar1 == (void *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_005f7709();
  }
  if (local_8 == 0) {
    iVar4 = -0x7ff8fff2;
  }
  else {
    local_c = 0;
    if (param_4 != 0) {
      piVar2 = *(int **)(*(int *)(param_1 + 0x98) + 0x10);
      uVar3 = param_4;
      do {
        if (*(int *)(param_2 + *(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar2 * 4) + 0xc) * 4)
            != -1) {
          local_c = local_c + 1;
        }
        piVar2 = piVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    iVar4 = FUN_005f7760(**(uint **)(param_1 + 0x98) & 0xff000000 | local_c,local_c * param_3,
                         local_c,0);
    if ((-1 < iVar4) && (iVar4 = FUN_005f7a42(*(undefined4 *)(param_1 + 0x98)), -1 < iVar4)) {
      local_10 = 0;
      if (param_3 != 0) {
        do {
          uVar3 = 0;
          local_14 = 0;
          if (param_4 != 0) {
            do {
              if (*(int *)(param_2 +
                          *(int *)(*(int *)(*(int *)(param_1 + 0x14) +
                                           *(int *)(*(int *)(*(int *)(param_1 + 0x98) + 0x10) +
                                                   uVar3 * 4) * 4) + 0xc) * 4) != -1) {
                *(undefined4 *)(*(int *)(local_8 + 8) + (local_10 * local_c + local_14) * 4) =
                     *(undefined4 *)
                      (*(int *)(*(int *)(param_1 + 0x98) + 8) + (local_10 * param_4 + uVar3) * 4);
                if (local_10 == 0) {
                  *(undefined4 *)(*(int *)(local_8 + 0x10) + local_14 * 4) =
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x98) + 0x10) + uVar3 * 4);
                }
                local_14 = local_14 + 1;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < param_4);
          }
          local_10 = local_10 + 1;
        } while (local_10 < param_3);
      }
      iVar4 = FUN_005f73c0(local_8);
      if (-1 < iVar4) {
        local_8 = 0;
        iVar4 = 0;
      }
    }
    if (local_8 != 0) {
      FUN_005f7186(1);
    }
  }
  return iVar4;
}

