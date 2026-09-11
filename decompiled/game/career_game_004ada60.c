/* Decompiled from Speed.exe @ 004ada60 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ada60(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined *puVar14;
  uint *puVar15;
  int iVar16;
  byte *pbVar17;
  uint *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  byte local_a0;
  byte local_9f [127];
  uint *local_20;
  int *local_1c;
  uint *local_18;
  int local_14;
  uint *local_10;
  undefined4 *local_c;
  int local_8;
  
  if (param_1[6] == 0) {
    FUN_005715d0(0xbe43edbb);
    FUN_005715d0(0x72923c81);
    uVar9 = DAT_006fb03c;
    param_1[3] = DAT_006fb03c;
    pcVar10 = (char *)(param_1 + 9);
    param_1[6] = 1;
    param_1[5] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = uVar9;
    *param_1 = 0x43480000;
    iVar13 = 0x1f;
    iVar16 = (int)"MiniWorld_DynamicLights" - (int)pcVar10;
    do {
      cVar3 = pcVar10[iVar16];
      iVar13 = iVar13 + -1;
      *pcVar10 = cVar3;
      if (cVar3 == '\0') break;
      pcVar10 = pcVar10 + 1;
    } while (iVar13 != 0);
    *(undefined1 *)((int)param_1 + 0x43) = 0;
    param_1[0x11] = 1;
    puVar20 = param_1 + 0x12;
    puVar12 = param_1 + 0x2f;
    local_8 = 4;
    do {
      puVar5 = (undefined4 *)param_1[0x13];
      puVar1 = puVar12 + -0x1b;
      *puVar5 = puVar1;
      param_1[0x13] = puVar1;
      *puVar1 = puVar20;
      puVar12[-0x1a] = puVar5;
      puVar5 = (undefined4 *)param_1[0x13];
      puVar1 = puVar12 + -1;
      *puVar5 = puVar1;
      param_1[0x13] = puVar1;
      *puVar1 = puVar20;
      *puVar12 = puVar5;
      puVar5 = (undefined4 *)param_1[0x13];
      puVar1 = puVar12 + 0x19;
      *puVar5 = puVar1;
      param_1[0x13] = puVar1;
      *puVar1 = puVar20;
      puVar12[0x1a] = puVar5;
      puVar5 = (undefined4 *)param_1[0x13];
      puVar1 = puVar12 + 0x33;
      *puVar5 = puVar1;
      param_1[0x13] = puVar1;
      *puVar1 = puVar20;
      puVar12[0x34] = puVar5;
      puVar5 = (undefined4 *)param_1[0x13];
      puVar1 = puVar12 + 0x4d;
      *puVar5 = puVar1;
      param_1[0x13] = puVar1;
      *puVar1 = puVar20;
      puVar12[0x4e] = puVar5;
      puVar5 = (undefined4 *)param_1[0x13];
      puVar1 = puVar12 + 0x67;
      *puVar5 = puVar1;
      param_1[0x13] = puVar1;
      *puVar1 = puVar20;
      puVar12[0x68] = puVar5;
      puVar5 = (undefined4 *)param_1[0x13];
      puVar1 = puVar12 + 0x81;
      *puVar5 = puVar1;
      param_1[0x13] = puVar1;
      *puVar1 = puVar20;
      puVar12[0x82] = puVar5;
      puVar5 = (undefined4 *)param_1[0x13];
      puVar1 = puVar12 + 0x9b;
      *puVar5 = puVar1;
      param_1[0x13] = puVar1;
      *puVar1 = puVar20;
      puVar12[0x9c] = puVar5;
      puVar12 = puVar12 + 0xd0;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    puVar20 = param_1 + 7;
    if (puVar20 != (undefined4 *)0x0) {
      *DAT_00743c14 = puVar20;
      puVar12 = puVar20;
      param_1[8] = DAT_00743c14;
      DAT_00743c14 = puVar12;
      *puVar20 = &DAT_00743c10;
    }
    local_c = param_1 + 0x354;
    local_14 = 2;
    do {
      puVar20 = local_c;
      for (iVar13 = 0xb4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar20 = 0;
        puVar20 = puVar20 + 1;
      }
      local_8 = 0;
      do {
        if (local_8 == 0) {
          FUN_00565da0("TRFE_ROAD02");
        }
        else {
          FUN_00565da0("TRFE_ROAD02_%02d",local_8);
        }
        pbVar17 = &local_a0;
        local_18 = (uint *)0xffffffff;
        local_18 = (uint *)0xffffffff;
        bVar4 = local_a0;
        while (bVar4 != 0) {
          local_18 = (uint *)((int)local_18 * 0x21 + (uint)bVar4);
          pbVar2 = pbVar17 + 1;
          pbVar17 = pbVar17 + 1;
          bVar4 = *pbVar2;
        }
        puVar14 = &DAT_006c63f8;
        uVar11 = 0x5f;
        puVar18 = local_18;
        do {
          puVar18 = (uint *)((int)puVar18 * 0x21 + uVar11);
          pbVar17 = puVar14 + 1;
          uVar11 = (uint)*pbVar17;
          puVar14 = puVar14 + 1;
        } while (*pbVar17 != 0);
        puVar14 = &DAT_006c63f4;
        uVar11 = 0x5f;
        local_20 = local_18;
        do {
          local_20 = (uint *)((int)local_20 * 0x21 + uVar11);
          pbVar17 = puVar14 + 1;
          uVar11 = (uint)*pbVar17;
          puVar14 = puVar14 + 1;
        } while (*pbVar17 != 0);
        puVar14 = &DAT_006c63f0;
        uVar11 = 0x5f;
        local_10 = local_18;
        do {
          local_10 = (uint *)((int)local_10 * 0x21 + uVar11);
          pbVar17 = puVar14 + 1;
          uVar11 = (uint)*pbVar17;
          puVar14 = puVar14 + 1;
        } while (*pbVar17 != 0);
        piVar19 = local_c + local_8 * 0x12;
        piVar19[2] = (int)puVar18;
        piVar19[4] = 0;
        piVar19[5] = 0;
        if (puVar18 != (uint *)0x0) {
          *DAT_00743c74 = (int)piVar19;
          piVar6 = piVar19;
          piVar19[1] = (int)DAT_00743c74;
          DAT_00743c74 = piVar6;
          *piVar19 = (int)&DAT_00743c70;
        }
        local_1c = piVar19;
        if (((piVar19[2] != 0) && (iVar13 = FUN_00540680(), piVar19[2] != 0)) &&
           (iVar13 != piVar19[3])) {
          iVar16 = *piVar19;
          piVar6 = (int *)piVar19[1];
          *piVar6 = iVar16;
          *(int **)(iVar16 + 4) = piVar6;
          if (iVar13 == 0) {
            *DAT_00743c74 = (int)piVar19;
            piVar6 = piVar19;
            piVar19[1] = (int)DAT_00743c74;
            DAT_00743c74 = piVar6;
            *piVar19 = (int)&DAT_00743c70;
          }
          else {
            puVar20 = *(undefined4 **)(iVar13 + 0x8c);
            *puVar20 = piVar19;
            *(int **)(iVar13 + 0x8c) = piVar19;
            piVar19[1] = (int)puVar20;
            *piVar19 = iVar13 + 0x88;
          }
          piVar19[3] = iVar13;
        }
        piVar6 = piVar19 + 6;
        piVar19[8] = (int)local_20;
        piVar19[10] = 0;
        piVar19[0xb] = 0;
        if (local_20 != (uint *)0x0) {
          *DAT_00743c74 = (int)piVar6;
          piVar7 = piVar6;
          piVar19[7] = (int)DAT_00743c74;
          DAT_00743c74 = piVar7;
          *piVar6 = (int)&DAT_00743c70;
        }
        if (((piVar19[8] != 0) && (iVar13 = FUN_00540680(), piVar19[8] != 0)) &&
           (iVar13 != piVar19[9])) {
          iVar16 = *piVar6;
          piVar7 = (int *)piVar19[7];
          *piVar7 = iVar16;
          *(int **)(iVar16 + 4) = piVar7;
          if (iVar13 == 0) {
            *DAT_00743c74 = (int)piVar6;
            piVar7 = piVar6;
            piVar19[7] = (int)DAT_00743c74;
            DAT_00743c74 = piVar7;
            *piVar6 = (int)&DAT_00743c70;
          }
          else {
            puVar20 = *(undefined4 **)(iVar13 + 0x8c);
            *puVar20 = piVar6;
            *(int **)(iVar13 + 0x8c) = piVar6;
            piVar19[7] = (int)puVar20;
            *piVar6 = iVar13 + 0x88;
          }
          piVar19[9] = iVar13;
        }
        piVar6 = piVar19 + 0xc;
        piVar19[0xe] = (int)local_10;
        piVar19[0x10] = 0;
        piVar19[0x11] = 0;
        if (local_10 != (uint *)0x0) {
          *DAT_00743c74 = (int)piVar6;
          piVar7 = piVar6;
          piVar19[0xd] = (int)DAT_00743c74;
          DAT_00743c74 = piVar7;
          *piVar6 = (int)&DAT_00743c70;
        }
        if (((piVar19[0xe] != 0) && (iVar13 = FUN_00540680(), piVar19[0xe] != 0)) &&
           (iVar13 != piVar19[0xf])) {
          iVar16 = *piVar6;
          piVar7 = (int *)piVar19[0xd];
          *piVar7 = iVar16;
          *(int **)(iVar16 + 4) = piVar7;
          if (iVar13 == 0) {
            *DAT_00743c74 = (int)piVar6;
            piVar7 = piVar6;
            piVar19[0xd] = (int)DAT_00743c74;
            DAT_00743c74 = piVar7;
            *piVar6 = (int)&DAT_00743c70;
          }
          else {
            puVar20 = *(undefined4 **)(iVar13 + 0x8c);
            *puVar20 = piVar6;
            *(int **)(iVar13 + 0x8c) = piVar6;
            piVar19[0xd] = (int)puVar20;
            *piVar6 = iVar13 + 0x88;
          }
          piVar19[0xf] = iVar13;
        }
        if (piVar19[3] != 0) {
          puVar15 = (uint *)0x0;
          pcVar10 = "_FLARE";
          uVar11 = 0x5f;
          puVar18 = local_18;
          do {
            puVar18 = (uint *)((int)puVar18 * 0x21 + uVar11);
            pbVar17 = (byte *)(pcVar10 + 1);
            uVar11 = (uint)*pbVar17;
            pcVar10 = pcVar10 + 1;
          } while (*pbVar17 != 0);
          while (iVar13 = local_1c[3], iVar13 != 0) {
            puVar8 = *(uint **)(iVar13 + 0x80);
            if ((puVar8 == (uint *)0x0) || (*(char *)(iVar13 + 0x1b) == 0)) {
LAB_004adea0:
              puVar8 = (uint *)0x0;
            }
            else if (puVar15 != (uint *)0x0) {
              if ((puVar15 < puVar8) ||
                 (puVar8 + (*(char *)(iVar13 + 0x1b) * 5 + -5) * 4 <= puVar15)) goto LAB_004adea0;
              puVar8 = puVar15 + 0x14;
            }
            puVar15 = puVar8;
            local_10 = puVar15;
            if (puVar15 == (uint *)0x0) break;
            if ((uint *)*puVar15 == puVar18) {
              puVar12 = _malloc(0x50);
              puVar12[2] = puVar18;
              *(undefined1 *)(puVar12 + 3) = 1;
              *(undefined1 *)((int)puVar12 + 0xd) = 9;
              *(undefined2 *)((int)puVar12 + 0xe) = 0;
              puVar12[4] = puVar15[0x10];
              puVar12[5] = puVar15[0x11];
              puVar12[6] = puVar15[0x12];
              puVar12[7] = -(float)puVar15[0x12];
              puVar12[8] = puVar15[0xc];
              puVar12[9] = puVar15[0xd];
              puVar12[10] = puVar15[0xe];
              *(undefined2 *)(puVar12 + 0xb) = 0;
              *(undefined1 *)((int)puVar12 + 0x2e) = 0;
              puVar20 = (undefined4 *)local_c[0xb5];
              *puVar20 = puVar12;
              local_c[0xb5] = puVar12;
              puVar12[1] = puVar20;
              *puVar12 = local_c + 0xb4;
              puVar12 = _malloc(0x68);
              puVar12[2] = puVar18;
              *(undefined1 *)(puVar12 + 3) = 2;
              *(undefined1 *)((int)puVar12 + 0xd) = 2;
              *(undefined1 *)((int)puVar12 + 0xe) = 0;
              *(undefined1 *)((int)puVar12 + 0xf) = 1;
              puVar12[4] = 0;
              puVar12[5] = 0xff00ff;
              puVar12[6] = puVar15[0x10];
              puVar12[7] = puVar15[0x11];
              puVar12[8] = puVar15[0x12];
              puVar12[9] = 0;
              puVar12[10] = puVar15[0xc];
              puVar12[0xb] = puVar15[0xd];
              puVar12[0xc] = puVar15[0xe];
              puVar12[0xd] = 0;
              puVar12[0xe] = 0;
              puVar12[0xf] = 0;
              puVar12[0x10] = 0;
              *(undefined2 *)(puVar12 + 0x11) = 0;
              puVar20 = (undefined4 *)local_c[0xb7];
              *puVar20 = puVar12;
              local_c[0xb7] = puVar12;
              puVar12[1] = puVar20;
              *puVar12 = local_c + 0xb6;
            }
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 < 10);
      local_c = local_c + 0xb8;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    pcVar10 = "MARKER_GOLDRING";
    iVar13 = -1;
    uVar11 = 0x4d;
    do {
      iVar13 = iVar13 * 0x21 + uVar11;
      pbVar17 = (byte *)(pcVar10 + 1);
      uVar11 = (uint)*pbVar17;
      pcVar10 = pcVar10 + 1;
    } while (*pbVar17 != 0);
    piVar19 = param_1 + 0x4c4;
    param_1[0x4c6] = iVar13;
    param_1[0x4c8] = 0;
    param_1[0x4c9] = 0;
    if (iVar13 != 0) {
      *DAT_00743c74 = (int)piVar19;
      piVar6 = piVar19;
      param_1[0x4c5] = DAT_00743c74;
      DAT_00743c74 = piVar6;
      *piVar19 = (int)&DAT_00743c70;
    }
    if (((param_1[0x4c6] != 0) && (iVar13 = FUN_00540680(), param_1[0x4c6] != 0)) &&
       (iVar13 != param_1[0x4c7])) {
      iVar16 = *piVar19;
      piVar6 = (int *)param_1[0x4c5];
      *piVar6 = iVar16;
      *(int **)(iVar16 + 4) = piVar6;
      if (iVar13 != 0) {
        puVar20 = *(undefined4 **)(iVar13 + 0x8c);
        *puVar20 = piVar19;
        *(int **)(iVar13 + 0x8c) = piVar19;
        param_1[0x4c5] = puVar20;
        *piVar19 = iVar13 + 0x88;
        param_1[0x4c7] = iVar13;
        return;
      }
      *DAT_00743c74 = (int)piVar19;
      piVar6 = piVar19;
      param_1[0x4c5] = DAT_00743c74;
      DAT_00743c74 = piVar6;
      *piVar19 = (int)&DAT_00743c70;
      param_1[0x4c7] = 0;
    }
  }
  return;
}

