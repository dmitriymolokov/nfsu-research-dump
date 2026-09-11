/* Decompiled from Speed.exe @ 0060691c */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __thiscall FUN_0060691c(int param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + local_8 * 4);
      if ((puVar1 != (uint *)0x0) && (*puVar1 != 0)) {
        bVar3 = false;
        local_10 = 0;
        if (puVar1[3] != 0) {
          do {
            local_c = 0;
            if (param_3 != 0) {
              do {
                iVar4 = *(int *)(param_2 + local_c * 4);
                piVar6 = *(int **)(*(int *)(param_1 + 0x14) + iVar4 * 4);
                if ((*piVar6 == *(int *)(param_1 + 0x58)) && ((char)piVar6[0x14] != '\x03')) {
                  pcVar9 = 
                  "cannot perform dependent texture read which in any way is based on color inputs";
                  uVar8 = 0x11a1;
                  goto LAB_00606ace;
                }
                iVar2 = *(int *)(puVar1[4] + local_10 * 4);
                if ((iVar2 == iVar4) || (iVar2 == piVar6[9])) {
                  uVar5 = puVar1[1];
                  uVar7 = *puVar1 & 0xffffff;
                  local_18 = 0;
                  if (uVar5 / uVar7 != 0) {
                    local_14 = 0;
                    do {
                      iVar4 = FUN_0060691c(puVar1[2] + local_14,uVar7,param_4,param_5);
                      if (iVar4 < 0) {
                        return iVar4;
                      }
                      local_18 = local_18 + 1;
                      local_14 = local_14 + uVar7 * 4;
                      bVar3 = true;
                    } while (local_18 < uVar5 / uVar7);
                  }
                }
                local_c = local_c + 1;
              } while (local_c < param_3);
            }
            local_10 = local_10 + 1;
          } while (local_10 < puVar1[3]);
          if (bVar3) {
            uVar5 = *puVar1 & 0xff000000;
            if ((((uVar5 == 0x40000000) || (uVar5 == 0x44000000)) || (uVar5 == 0x48000000)) ||
               (((uVar5 == 0x4c000000 || (uVar5 == 0xee000000)) ||
                ((uVar5 == 0xef000000 || (uVar5 == 0x34000000)))))) {
              uVar7 = *puVar1 & 0xffffff;
              uVar5 = uVar7 * 2;
              if (uVar7 < uVar5) {
                piVar6 = (int *)(puVar1[2] + uVar7 * 4);
                do {
                  if (**(int **)(*(int *)(param_1 + 0x14) + *piVar6 * 4) == *(int *)(param_1 + 0x60)
                     ) {
                    pcVar9 = "cannot perform double dependent texture read in ps_1_x";
                    uVar8 = 0x11b6;
LAB_00606ace:
                    FUN_005fbec8(param_1,puVar1[0xd],uVar8,pcVar9);
                    return -0x7fffbffb;
                  }
                  uVar7 = uVar7 + 1;
                  piVar6 = piVar6 + 1;
                } while (uVar7 < uVar5);
              }
            }
            *(uint **)(param_4 + *param_5 * 4) = puVar1;
            *(undefined4 *)(*(int *)(param_1 + 0x18) + local_8 * 4) = 0;
            *param_5 = *param_5 + 1;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0xc));
  }
  return 0;
}

