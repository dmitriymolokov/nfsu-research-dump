/* Decompiled from Speed.exe @ 006067f6 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __thiscall
FUN_006067f6(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,int param_7
            )

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_10 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = *(int *)(param_2 + local_10 * 4);
      if ((iVar1 != 0) && (local_c = 0, *(int *)(iVar1 + 4) != 0)) {
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0x14) +
                            *(int *)(*(int *)(iVar1 + 8) + local_c * 4) * 4);
          if ((*piVar2 == *(int *)(param_1 + 0x58)) &&
             (((piVar2[8] != 0 && ((piVar2[0x14] & 0xffU) == param_4)) &&
              (param_5 == *(byte *)((int)piVar2 + 0x51))))) {
            local_8 = 0;
            if (param_6 != 0) {
              do {
                if (piVar2[3] ==
                    *(int *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)(param_7 + local_8 * 4) * 4
                                     ) + 0xc)) {
                  iVar4 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0,piVar2[3],0);
                  if (iVar4 == -1) {
                    return 0x8007000e;
                  }
                  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 * 4);
                  *(int *)(iVar3 + 0x20) = piVar2[8];
                  *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_7 + local_8 * 4);
                  *(int *)(*(int *)(iVar1 + 8) + local_c * 4) = iVar4;
                  break;
                }
                local_8 = local_8 + 1;
              } while (local_8 < param_6);
            }
            if (local_8 == param_6) {
              FUN_005fbec8(param_1,0,0x12c2,"internal error: InputRemap component matchup failed");
              return 0x80004005;
            }
          }
          local_c = local_c + 1;
        } while (local_c < *(uint *)(iVar1 + 4));
      }
      local_10 = local_10 + 1;
    } while (local_10 < param_3);
  }
  return 0;
}

