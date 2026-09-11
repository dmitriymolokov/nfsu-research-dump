/* Decompiled from Speed.exe @ 00609c31 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __thiscall FUN_00609c31(int param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  int *piVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_50 [5];
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = 0;
  if (param_3 != 0) {
    local_c = param_2;
    do {
      puVar2 = (uint *)*local_c;
      if (puVar2 != (uint *)0x0) {
        local_24 = *puVar2;
        uVar10 = local_24 & 0xffffff;
        local_1c = uVar10;
        FUN_00609ad2(param_4,4,puVar2,&local_18,&local_28,&local_14,1,1);
        if (local_14 == 0) {
          if (uVar10 == 2) {
            uVar10 = puVar2[2];
            local_20 = FUN_006099dc(*(undefined4 *)(param_1 + 0x140),
                                    *(undefined4 *)(param_1 + 0x134),uVar10 + 8,1,0);
            local_30 = FUN_006099dc(*(undefined4 *)(param_1 + 0x140),
                                    *(undefined4 *)(param_1 + 0x134),uVar10 + 0xc,1,0);
            if ((((local_20 != 0) && (local_30 != 0)) &&
                (FUN_00609ad2(param_4,4,local_20,&local_18,&local_28,&local_2c,1,1), local_2c != 0))
               && (FUN_00609ad2(param_4,4,local_30,&local_18,&local_28,&local_14,1,1),
                  uVar10 = local_1c, local_2c == local_14)) goto LAB_00609d52;
          }
        }
        else if (uVar10 != 2) {
LAB_00609d52:
          if (local_14 != 0) {
            uVar9 = 0;
            local_8 = 0;
            if (uVar10 == 3) {
              if (((local_24 & 0xff000000) == 0x4c000000) || ((local_24 & 0xff000000) == 0x48000000)
                 ) {
                local_28 = 1;
                piVar6 = (int *)(puVar2[2] + 0xc);
                do {
                  iVar8 = *(int *)(*(int *)(param_1 + 0x14) + *piVar6 * 4);
                  if (*(uint *)(iVar8 + 0xc) != uVar9) {
                    local_28 = 0;
                  }
                  iVar8 = *(int *)(iVar8 + 0x20);
                  if ((iVar8 != 0) && (iVar8 != 0x60000)) {
                    pcVar5 = 
                    "cannot match to texreg2rgb instruction because can only have input modifier _bx2"
                    ;
                    goto LAB_0060a0cb;
                  }
                  uVar9 = uVar9 + 1;
                  piVar6 = piVar6 + 1;
                } while (uVar9 < 3);
                if (local_28 != 0) {
                  if ((*(uint *)(param_1 + 0x30) & 0xffff) < 0x102) {
                    FUN_005fbec8(param_1,*(undefined4 *)(param_2[local_10] + 0x34),0x11b8,
                                 "expression can only be map to texreg2rgb, but this instruction is not supported on 1_%i"
                                 ,*(uint *)(param_1 + 0x30) & 0xff);
                    return -0x7fffbffb;
                  }
                  pvVar7 = _malloc(0x38);
                  if (pvVar7 == (void *)0x0) {
                    local_8 = 0;
                  }
                  else {
                    local_8 = FUN_005f7709();
                  }
                  if (local_8 == 0) {
LAB_0060a0ec:
                    iVar8 = -0x7ff8fff2;
                  }
                  else {
                    iVar8 = FUN_005f7760(0xe6000003,6,4,0);
                    if (-1 < iVar8) goto LAB_00609ef0;
                  }
                  goto LAB_0060a07e;
                }
              }
            }
            else if ((uVar10 == 2) && ((local_24 & 0xff000000) == 0x44000000)) {
              uVar10 = 0;
              bVar4 = true;
              local_50[2] = 3;
              local_50[3] = 0;
              local_50[0] = 1;
              local_50[1] = 2;
              local_28 = 1;
              do {
                iVar8 = local_20;
                if (uVar10 != 0) {
                  iVar8 = local_30;
                }
                iVar8 = *(int *)(*(int *)(param_1 + 0x14) + **(int **)(iVar8 + 8) * 4);
                iVar3 = *(int *)(iVar8 + 0xc);
                if (iVar3 != local_50[uVar10 + 2]) {
                  local_28 = 0;
                }
                if (iVar3 != local_50[uVar10]) {
                  bVar4 = false;
                }
                if (*(int *)(iVar8 + 0x20) != 0) {
                  pcVar5 = 
                  "cannot match to texreg2ar or texreg2gb instruction because cannot have input modifiers"
                  ;
LAB_0060a0cb:
                  FUN_005fbec8(param_1,*(undefined4 *)(param_2[local_10] + 0x34),0x11b7,pcVar5);
                  return -0x7fffbffb;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < 2);
              if ((local_28 != 0) || (bVar4)) {
                pvVar7 = _malloc(0x38);
                if (pvVar7 == (void *)0x0) {
                  local_8 = 0;
                }
                else {
                  local_8 = FUN_005f7709();
                }
                if (local_8 == 0) goto LAB_0060a0ec;
                iVar8 = FUN_005f7760((-(uint)bVar4 & 0x1000000) + 0xe7000002,4,4,0);
                if (iVar8 < 0) goto LAB_0060a07e;
LAB_00609ef0:
                uVar10 = 0;
                do {
                  *(undefined4 *)(uVar10 + *(int *)(local_8 + 0x10)) =
                       *(undefined4 *)(uVar10 + *(int *)(*local_c + 0x10));
                  uVar10 = uVar10 + 4;
                } while (uVar10 < 0x10);
                piVar6 = *(int **)(*(int *)(param_1 + 0x14) + **(int **)(*local_c + 8) * 4);
                local_34 = *(undefined4 *)
                            (*(int *)(param_1 + 0x14) + *(int *)(*(int *)(local_14 + 8) + 0xc) * 4);
                uVar10 = local_18;
                if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar6 * 4) + 5) & 4) == 0) {
                  for (; (uVar10 < 4 && (*(int *)(param_4 + uVar10 * 4) != 0)); uVar10 = uVar10 + 1)
                  {
                  }
                  if (uVar10 == 4) goto LAB_00609f4e;
                  piVar6[2] = uVar10;
                }
                else {
                  uVar10 = piVar6[2];
                  local_28 = uVar10;
                  if ((3 < uVar10) || (*(int *)(param_4 + uVar10 * 4) != 0)) {
LAB_00609f4e:
                    iVar8 = -0x7fffbffb;
                    goto LAB_0060a07e;
                  }
                }
                local_28 = uVar10;
                local_3c = FUN_005f74cf(*(undefined4 *)(param_1 + 0x58),uVar10,0,0);
                if (local_3c == -1) goto LAB_0060a0ec;
                iVar8 = *(int *)(*(int *)(param_1 + 0x14) + local_3c * 4);
                FUN_005f7c63();
                *(uint *)(iVar8 + 0x50) = uVar10 << 8 | 3;
                *(uint *)(iVar8 + 8) = uVar10;
                uVar9 = 0;
                if (local_1c != 0) {
                  local_24 = local_1c << 2;
                  do {
                    local_50[4] = FUN_005f74cf(*(undefined4 *)(param_1 + 0x58),local_18,uVar9,0);
                    if (local_50[4] == -1) goto LAB_0060a0ec;
                    iVar8 = *(int *)(*(int *)(param_1 + 0x14) + local_50[4] * 4);
                    local_38 = *(int *)(*(int *)(param_1 + 0x14) +
                                       *(int *)(local_1c * 4 + *(int *)(*local_c + 8)) * 4);
                    FUN_005f7c63();
                    *(uint *)(iVar8 + 8) = local_18;
                    *(uint *)(iVar8 + 0xc) = uVar9;
                    *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(local_38 + 0x20);
                    *(int *)(*(int *)(local_8 + 8) + uVar9 * 4) = local_3c;
                    uVar1 = local_24 + 4;
                    uVar9 = uVar9 + 1;
                    *(int *)(local_24 + *(int *)(local_8 + 8)) = local_50[4];
                    uVar10 = local_28;
                    local_24 = uVar1;
                  } while (uVar9 < local_1c);
                }
                piVar6 = local_c;
                *(int *)(param_4 + uVar10 * 4) = local_8;
                if (*local_c != 0) {
                  FUN_005f7186();
                }
                *piVar6 = 0;
                local_8 = 0;
              }
            }
          }
        }
      }
      local_10 = local_10 + 1;
      local_c = local_c + 1;
    } while (local_10 < param_3);
  }
  iVar8 = 0;
LAB_0060a07e:
  if (local_8 != 0) {
    FUN_005f7186();
  }
  return iVar8;
}

