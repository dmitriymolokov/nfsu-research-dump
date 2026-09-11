/* Decompiled from Speed.exe @ 0040ed50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ed50(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *local_c;
  undefined4 *local_8;
  
  DAT_0071b1dc = DAT_0071b1dc + 1;
  piVar7 = &DAT_0078a4e8;
  puVar4 = DAT_0073640c;
  do {
    local_8 = &DAT_0071abd0;
    do {
      puVar5 = local_8;
      if ((int *)*piVar7 != piVar7) {
        local_c = piVar7;
        if (local_8 + -6 != puVar4) {
          if (puVar4 != (undefined4 *)0x0) {
            (**(code **)(*(int *)puVar4[6] + 0x108))((int *)puVar4[6]);
            (*(code *)DAT_0073640c[0x37])();
          }
          DAT_0073640c = puVar5 + -6;
          (*(code *)puVar5[0x30])();
          (**(code **)(*DAT_0073636c + 0x15c))(DAT_0073636c,puVar5[-5]);
          (**(code **)(*(int *)*puVar5 + 0x100))((int *)*puVar5,&local_c,0);
          _DAT_0071b204 = _DAT_0071b204 + 1;
          puVar4 = DAT_0073640c;
        }
        piVar6 = (int *)*piVar7;
        if (piVar6 != piVar7) {
          do {
            piVar1 = (int *)piVar6[1];
            iVar3 = *piVar6;
            *piVar1 = iVar3;
            *(int **)(iVar3 + 4) = piVar1;
            DAT_0071b1d8 = DAT_0071b1d8 + 1;
            FUN_0040f3d0(piVar6[4]);
            if ((int *)piVar6[6] != piVar6 + 6) {
              do {
                piVar7 = (int *)piVar6[6];
                iVar3 = *piVar7;
                piVar1 = (int *)piVar7[1];
                *piVar1 = iVar3;
                *(int **)(iVar3 + 4) = piVar1;
                FUN_00410400(piVar7[9]);
                if (*(int *)(piVar7[6] + 0x44) != 0) {
                  FUN_004100a0();
                }
                if (piVar7[7] != 0) {
                  FUN_0040f7c0(piVar7[9]);
                }
                if (piVar7[8] != 0) {
                  FUN_0040fae0();
                }
                if (piVar7[3] == 0) {
                  iVar3 = piVar7[2];
                  if ((piVar7[10] != 0) && ((*(byte *)(piVar7 + 5) & 1) != 0)) {
                    FUN_004102f0(piVar7[10]);
                  }
                  iVar2 = *(int *)piVar7[4];
                  if (*(int *)(iVar2 + 0x2c) != DAT_007363e8) {
                    (**(code **)(*DAT_0073636c + 400))
                              (DAT_0073636c,0,*(int *)(iVar2 + 0x2c),0,DAT_0073640c[2]);
                    DAT_007363e8 = *(int *)(iVar2 + 0x2c);
                    _DAT_0071b1e8 = _DAT_0071b1e8 + 1;
                  }
                  if (*(int *)(iVar2 + 0x20) != DAT_007363ec) {
                    (**(code **)(*DAT_0073636c + 0x1a0))(DAT_0073636c,*(int *)(iVar2 + 0x20));
                    DAT_007363ec = *(int *)(iVar2 + 0x20);
                    _DAT_0071b1ec = _DAT_0071b1ec + 1;
                  }
                  if ((*(int *)(iVar3 + 0xc) != 0) && (*(uint *)(iVar2 + 0x34) < 0xffff)) {
                    iVar3 = piVar7[6];
                    uVar8 = 0;
                    if (*(int *)(iVar3 + 0x14) != 0) {
                      do {
                        (**(code **)(**(int **)(iVar3 + 0x18) + 0x104))
                                  (*(int **)(iVar3 + 0x18),uVar8);
                        (**(code **)(*DAT_0073636c + 0x148))
                                  (DAT_0073636c,4,0,0,*(undefined4 *)(iVar2 + 0x34),
                                   *(int *)(unaff_EBX + 0x34) - *(int *)(iVar2 + 0x18) >> 1,
                                   *(uint *)(unaff_EBX + 0xc) / 3);
                        iVar3 = piVar7[6];
                        uVar8 = uVar8 + 1;
                      } while (uVar8 < *(uint *)(iVar3 + 0x14));
                    }
                    _DAT_0071b1e0 = _DAT_0071b1e0 + 1;
                    DAT_0071b1f0 = DAT_0071b1f0 + *(uint *)(iVar2 + 0x34) / 3;
                  }
                }
                else {
                  piVar1 = (int *)piVar7[2];
                  uVar8 = 0;
                  (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,0);
                  iVar3 = piVar7[6];
                  DAT_007363e8 = 0;
                  if (*(int *)(iVar3 + 0x14) != 0) {
                    do {
                      (**(code **)(**(int **)(iVar3 + 0x18) + 0x104))(*(int **)(iVar3 + 0x18),uVar8)
                      ;
                      (**(code **)(*DAT_0073636c + 0x14c))
                                (DAT_0073636c,5,*piVar1 + -2,piVar1 + 1,0x18);
                      iVar3 = piVar7[6];
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < *(uint *)(iVar3 + 0x14));
                  }
                  (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,1);
                  iVar2 = DAT_007363b8;
                  _DAT_0071b1e4 = _DAT_0071b1e4 + 1;
                  iVar3 = *(int *)(DAT_007363b8 + 0x18);
                  *piVar1 = *(int *)(DAT_007363b8 + 0x10);
                  *(int *)(iVar2 + 0x18) = iVar3 + -1;
                  *(int **)(iVar2 + 0x10) = piVar1;
                }
                iVar2 = DAT_007363d8;
                iVar3 = *(int *)(DAT_007363d8 + 0x18);
                *piVar7 = *(int *)(DAT_007363d8 + 0x10);
                *(int *)(iVar2 + 0x18) = iVar3 + -1;
                *(int **)(iVar2 + 0x10) = piVar7;
                puVar5 = local_8;
                piVar7 = local_c;
              } while ((int *)piVar6[6] != piVar6 + 6);
            }
            *(undefined4 *)(*(int *)piVar6[4] + 0x1c) = 0;
            FUN_0040ed10();
            iVar2 = DAT_007363d4;
            iVar3 = *(int *)(DAT_007363d4 + 0x18);
            *piVar6 = *(int *)(DAT_007363d4 + 0x10);
            *(int *)(iVar2 + 0x18) = iVar3 + -1;
            *(int **)(iVar2 + 0x10) = piVar6;
            piVar6 = (int *)*piVar7;
            puVar4 = DAT_0073640c;
          } while (piVar6 != piVar7);
        }
      }
      local_8 = puVar5 + 0x38;
      piVar7 = piVar7 + 2;
    } while ((int)local_8 < 0x71b1f0);
  } while ((int)piVar7 < 0x78a868);
  _DAT_007363fc = 0;
  return;
}

