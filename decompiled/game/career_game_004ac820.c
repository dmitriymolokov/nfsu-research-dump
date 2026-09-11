/* Decompiled from Speed.exe @ 004ac820 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ac820(int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  undefined *puVar14;
  int iVar15;
  int local_40;
  float local_3c;
  int local_34;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar2 = (&DAT_006fb730)[*(char *)(param_1 + 0xa6)];
    iVar9 = FUN_0057ce10(uVar2,(int)*(char *)(param_1 + 0x2e),*(int *)(param_1 + 0x178),0,0xffffffff
                        );
    if (iVar9 != 0) {
      puVar14 = &DAT_006c7a38;
      iVar12 = -1;
      uVar10 = 0x52;
      do {
        iVar12 = iVar12 * 0x21 + uVar10;
        pbVar1 = puVar14 + 1;
        uVar10 = (uint)*pbVar1;
        puVar14 = puVar14 + 1;
      } while (*pbVar1 != 0);
      iVar15 = (int)*(short *)(iVar9 + 0x1c);
      piVar11 = *(int **)(iVar9 + 0x14);
      piVar8 = piVar11;
      if (piVar11 != (int *)0x0) {
        for (; piVar8 < piVar11 + iVar15 * 2; piVar8 = piVar8 + 2) {
          if ((iVar12 == 0) || (*piVar8 == iVar12)) {
            if (piVar8 != (int *)0x0) {
              local_40 = piVar8[1];
              goto LAB_004ac8bb;
            }
            break;
          }
        }
      }
      local_40 = 0;
LAB_004ac8bb:
      fVar3 = (float)local_40;
      pcVar13 = "GREEN";
      uVar10 = 0x47;
      iVar9 = -1;
      do {
        iVar9 = iVar9 * 0x21 + uVar10;
        pbVar1 = (byte *)(pcVar13 + 1);
        uVar10 = (uint)*pbVar1;
        pcVar13 = pcVar13 + 1;
      } while (*pbVar1 != 0);
      piVar8 = piVar11;
      if (piVar11 != (int *)0x0) {
        for (; piVar8 < piVar11 + iVar15 * 2; piVar8 = piVar8 + 2) {
          if ((iVar9 == 0) || (*piVar8 == iVar9)) {
            if (piVar8 != (int *)0x0) {
              local_40 = piVar8[1];
              goto LAB_004ac90b;
            }
            break;
          }
        }
      }
      local_40 = 0;
LAB_004ac90b:
      fVar4 = (float)local_40;
      puVar14 = &DAT_006c7a28;
      uVar10 = 0x42;
      iVar9 = -1;
      do {
        iVar9 = iVar9 * 0x21 + uVar10;
        pbVar1 = puVar14 + 1;
        uVar10 = (uint)*pbVar1;
        puVar14 = puVar14 + 1;
      } while (*pbVar1 != 0);
      piVar8 = piVar11 + iVar15 * 2;
      if (piVar11 != (int *)0x0) {
        for (; piVar11 < piVar8; piVar11 = piVar11 + 2) {
          if ((iVar9 == 0) || (*piVar11 == iVar9)) {
            if (piVar11 != (int *)0x0) {
              local_40 = piVar11[1];
              goto LAB_004ac95b;
            }
            break;
          }
        }
      }
      local_40 = 0;
LAB_004ac95b:
      fVar5 = (float)local_40;
      local_3c = 0.0;
      local_34 = 0;
      iVar9 = FUN_0057ce10(uVar2,0x1e,0,0,0xffffffff);
      if (iVar9 != 0) {
        do {
          puVar14 = &DAT_006c7a38;
          iVar12 = -1;
          uVar10 = 0x52;
          do {
            iVar12 = iVar12 * 0x21 + uVar10;
            pbVar1 = puVar14 + 1;
            uVar10 = (uint)*pbVar1;
            puVar14 = puVar14 + 1;
          } while (*pbVar1 != 0);
          iVar15 = (int)*(short *)(iVar9 + 0x1c);
          piVar11 = *(int **)(iVar9 + 0x14);
          piVar8 = piVar11;
          if (piVar11 != (int *)0x0) {
            for (; piVar8 < piVar11 + iVar15 * 2; piVar8 = piVar8 + 2) {
              if ((iVar12 == 0) || (*piVar8 == iVar12)) {
                if (piVar8 != (int *)0x0) {
                  local_40 = piVar8[1];
                  goto LAB_004ac9e6;
                }
                break;
              }
            }
          }
          local_40 = 0;
LAB_004ac9e6:
          fVar6 = (float)local_40;
          pcVar13 = "GREEN";
          iVar12 = -1;
          uVar10 = 0x47;
          do {
            iVar12 = iVar12 * 0x21 + uVar10;
            pbVar1 = (byte *)(pcVar13 + 1);
            uVar10 = (uint)*pbVar1;
            pcVar13 = pcVar13 + 1;
          } while (*pbVar1 != 0);
          piVar8 = piVar11;
          if (piVar11 != (int *)0x0) {
            for (; piVar8 < piVar11 + iVar15 * 2; piVar8 = piVar8 + 2) {
              if ((iVar12 == 0) || (*piVar8 == iVar12)) {
                if (piVar8 != (int *)0x0) {
                  local_40 = piVar8[1];
                  goto LAB_004aca34;
                }
                break;
              }
            }
          }
          local_40 = 0;
LAB_004aca34:
          fVar7 = (float)local_40;
          puVar14 = &DAT_006c7a28;
          iVar12 = -1;
          uVar10 = 0x42;
          do {
            iVar12 = iVar12 * 0x21 + uVar10;
            pbVar1 = puVar14 + 1;
            uVar10 = (uint)*pbVar1;
            puVar14 = puVar14 + 1;
          } while (*pbVar1 != 0);
          piVar8 = piVar11 + iVar15 * 2;
          if (piVar11 != (int *)0x0) {
            for (; piVar11 < piVar8; piVar11 = piVar11 + 2) {
              if ((iVar12 == 0) || (*piVar11 == iVar12)) {
                if (piVar11 != (int *)0x0) {
                  local_40 = piVar11[1];
                  goto LAB_004aca82;
                }
                break;
              }
            }
          }
          local_40 = 0;
LAB_004aca82:
          fVar6 = SQRT((fVar6 - fVar3) * (fVar6 - fVar3) +
                       ((float)local_40 - fVar5) * ((float)local_40 - fVar5) +
                       (fVar7 - fVar4) * (fVar7 - fVar4));
          if (local_3c < fVar6) {
            local_3c = fVar6;
            local_34 = iVar9;
          }
          iVar9 = FUN_0057ce10(uVar2,0x1e,0,iVar9,0xffffffff);
        } while (iVar9 != 0);
        if (local_34 != 0) {
          FUN_004ac550();
        }
      }
    }
  }
  return;
}

