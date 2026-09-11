/* spd-match: far pct=3.78 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005146d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005146d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8,undefined4 *param_9,
                 int param_10,int param_11,int param_12)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int iStack_2c0;
  undefined4 *apuStack_2bc [3];
  undefined4 *local_280;
  int local_27c;
  int local_278;
  int local_274;
  int aiStack_268 [6];
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined1 auStack_244 [4];
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 uStack_200;
  int aiStack_1fc [13];
  float local_1c8;
  float local_1c4;
  undefined1 auStack_140 [48];
  float local_110 [20];
  undefined1 auStack_c0 [188];
  
  if (param_12 == 0) {
    apuStack_2bc[2] = (undefined4 *)param_11;
    apuStack_2bc[1] = (undefined4 *)param_10;
    apuStack_2bc[0] = param_9;
    iStack_2c0 = param_8;
    FUN_00514530(param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  local_250 = param_2;
  local_24c = param_3;
  local_248 = param_6;
  local_240 = param_4;
  local_23c = param_3;
  local_238 = param_6;
  local_230 = param_4;
  local_22c = param_5;
  local_228 = param_6;
  local_220 = param_2;
  local_21c = param_5;
  local_218 = param_6;
  local_280 = param_9;
  local_27c = param_10;
  local_278 = param_7;
  local_274 = param_10;
  pbVar8 = (byte *)(param_11 + 2);
  iVar13 = 4;
  pfVar12 = local_110 + 2;
  do {
    bVar1 = pbVar8[-2];
    bVar2 = pbVar8[-1];
    bVar3 = *pbVar8;
    bVar4 = pbVar8[1];
    pbVar8 = pbVar8 + 4;
    local_1c8 = (float)bVar3 * _DAT_006cc970;
    iVar13 = iVar13 + -1;
    *pfVar12 = local_1c8;
    local_1c4 = (float)bVar4 * _DAT_006cc970;
    pfVar12[-2] = (float)bVar1 * _DAT_006cc970;
    pfVar12[1] = local_1c4;
    pfVar12[-1] = (float)bVar2 * _DAT_006cc970;
    pfVar12 = pfVar12 + 4;
  } while (iVar13 != 0);
  iVar13 = param_1 + 0x20;
  apuStack_2bc[1] = &local_250;
  apuStack_2bc[0] = &local_250;
  iStack_2c0 = 0x514853;
  apuStack_2bc[2] = (undefined4 *)iVar13;
  FUN_005abda2();
  iStack_2c0 = iVar13;
  FUN_005abda2(&local_24c,&local_24c);
  FUN_005abda2(&local_248,&local_248,iVar13);
  FUN_005abda2(auStack_244,auStack_244,iVar13);
  if ((*(byte *)(param_12 + 0x50) & 1) == 0) {
    iVar13 = FUN_00514c80(param_1,param_12,&local_280,&iStack_2c0,auStack_140,auStack_c0,&uStack_200
                         );
  }
  else {
    iVar13 = FUN_0051a5f0(param_1,param_12,&local_280,&iStack_2c0,auStack_140,auStack_c0);
  }
  if (iVar13 != 0) {
    puVar14 = (undefined1 *)((int)&uStack_200 + 2);
    iVar17 = iVar13;
    do {
      uVar7 = FUN_00674898();
      puVar14[-2] = uVar7;
      uVar7 = FUN_00674898();
      puVar14[-1] = uVar7;
      uVar7 = FUN_00674898();
      *puVar14 = uVar7;
      uVar7 = FUN_00674898();
      puVar14[1] = uVar7;
      puVar14 = puVar14 + 4;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    uVar9 = iVar17 - 2;
    if (uVar9 != 0) {
      uVar15 = 0;
      iVar13 = DAT_00735708;
      piVar19 = aiStack_268;
      while (*(int *)(iVar13 + 0x18) != *(int *)(iVar13 + 0x2c)) {
        iVar17 = iVar13;
        if (DAT_0073570c == 0) {
          piVar11 = *(int **)(iVar13 + 0x10);
          iVar10 = *(int *)(iVar13 + 0x18) + 1;
          if (piVar11 != (int *)0x0) {
            iVar5 = *piVar11;
            if (*(int *)(iVar13 + 0x1c) < iVar10) {
              *(int *)(iVar13 + 0x1c) = iVar10;
            }
            *(int *)(iVar13 + 0x18) = iVar10;
            *(int *)(iVar13 + 0x10) = iVar5;
          }
        }
        else {
          piVar18 = (int *)(iVar13 + 0x10);
          piVar20 = piVar19;
          if ((*(int *)(iVar13 + 0x10) == 0) && ((*(byte *)(iVar13 + 0x14) & 1) != 0)) {
            FUN_00566e60();
            iVar17 = DAT_00735708;
          }
          piVar11 = (int *)*piVar18;
          iVar10 = *(int *)(iVar13 + 0x18) + 1;
          if (piVar11 != (int *)0x0) {
            iVar5 = *piVar11;
            if (*(int *)(iVar13 + 0x1c) < iVar10) {
              *(int *)(iVar13 + 0x1c) = iVar10;
            }
            *(int *)(iVar13 + 0x18) = iVar10;
            *piVar18 = iVar5;
            if (((*(byte *)(iVar13 + 0x14) & 2) != 0) &&
               (iVar13 = *(int *)(iVar13 + 0x28) >> 2, piVar18 = piVar11, 0 < iVar13)) {
              for (; piVar19 = piVar20, iVar13 != 0; iVar13 = iVar13 + -1) {
                *piVar18 = 0;
                piVar18 = piVar18 + 1;
              }
            }
          }
        }
        if (piVar11 == (int *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          FUN_0040be70();
        }
        piVar11[0x2c] = 0;
        puVar6 = *(undefined4 **)(param_1 + 0x1c);
        *puVar6 = piVar11;
        *(int **)(param_1 + 0x1c) = piVar11;
        piVar11[1] = (int)puVar6;
        *piVar11 = param_1 + 0x18;
        piVar11[8] = (int)local_280;
        piVar11[9] = local_27c;
        uVar16 = uVar15 + 1;
        piVar11[10] = local_278;
        piVar11[0x18] = iStack_2c0;
        piVar11[0x24] = uStack_200;
        piVar11[0x19] = (int)apuStack_2bc[0];
        iVar5 = (&iStack_2c0)[uVar16 * 2];
        piVar11[0x1a] = 0x3f800000;
        iVar13 = piVar19[-1];
        iVar10 = *piVar19;
        piVar11[0xc] = piVar19[-2];
        piVar11[0xd] = iVar13;
        piVar11[0xe] = iVar10;
        piVar11[0x1b] = iVar5;
        piVar11[0x1c] = (int)apuStack_2bc[uVar16 * 2];
        piVar11[0x25] = aiStack_1fc[uVar15];
        puVar6 = apuStack_2bc[uVar16 * 2 + 1];
        piVar11[0x1d] = 0x3f800000;
        iVar13 = piVar19[3];
        iVar10 = piVar19[4];
        piVar11[0x10] = piVar19[2];
        piVar11[0x11] = iVar13;
        piVar11[0x12] = iVar10;
        piVar11[0x1e] = (int)puVar6;
        puVar6 = apuStack_2bc[uVar16 * 2 + 2];
        piVar11[0x20] = 0x3f800000;
        iVar13 = aiStack_1fc[uVar16];
        piVar11[0x1f] = (int)puVar6;
        piVar11[0x26] = iVar13;
        piVar11[0x14] = piVar11[0x10];
        piVar11[0x15] = piVar11[0x11];
        piVar11[0x16] = piVar11[0x12];
        piVar11[0x21] = piVar11[0x1e];
        piVar11[0x22] = piVar11[0x1f];
        piVar11[0x23] = piVar11[0x20];
        piVar11[0x27] = iVar13;
        *(undefined1 *)((int)piVar11 + 0xa5) = 1;
        uVar15 = uVar16;
        iVar13 = iVar17;
        piVar19 = piVar19 + 4;
        if (uVar9 <= uVar16) {
          return;
        }
      }
      _DAT_0078eaec = _DAT_0078eaec + 1;
    }
  }
  return;
}

