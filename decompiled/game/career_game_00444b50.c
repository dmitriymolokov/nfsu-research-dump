/* Decompiled from Speed.exe @ 00444b50 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00444b50(int *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  short *psVar12;
  int local_314;
  short *local_310;
  int local_30c;
  short local_308 [4];
  int local_300 [191];
  
  local_308[0] = 0x9c4;
  local_308[1] = 0x960;
  local_308[2] = 0xa28;
  local_308[3] = 0x9c3;
  local_314 = 4;
  if (DAT_00736174 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)*(short *)(DAT_00736174 + 0x6c);
  }
  puVar2 = DAT_0077a958;
  if ((undefined4 **)DAT_0077a958 != &DAT_0077a958) {
    do {
      if (puVar2[2] == iVar5) {
        uVar7 = puVar2[3];
        if (0 < (int)uVar7) {
          piVar10 = puVar2 + 4;
          piVar11 = local_300;
          for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *piVar11 = *piVar10;
            piVar10 = piVar10 + 1;
            piVar11 = piVar11 + 1;
          }
          local_314 = uVar7 + 4;
          for (uVar7 = (uint)((uVar7 & 1) != 0); uVar7 != 0; uVar7 = uVar7 - 1) {
            *(short *)piVar11 = (short)*piVar10;
            piVar10 = (int *)((int)piVar10 + 2);
            piVar11 = (int *)((int)piVar11 + 2);
          }
        }
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while ((undefined4 **)puVar2 != &DAT_0077a958);
  }
  if ((DAT_0073612c != 0) && (DAT_00736130 != 0)) {
    local_308[local_314] = (short)DAT_00736130;
    local_314 = local_314 + 1;
  }
  piVar10 = (int *)param_1[0x164];
  iVar5 = local_314;
  while (piVar10 != param_1 + 0x164) {
    piVar11 = piVar10 + 2;
    piVar10 = (int *)*piVar10;
    local_308[iVar5] = (short)*piVar11;
    iVar5 = iVar5 + 1;
  }
  local_310 = (short *)((int)param_1 + 0xe6);
  local_30c = 2;
  local_314 = iVar5;
  do {
    puVar2 = DAT_0077a940;
    if (0 < *local_310) {
      for (; (undefined4 **)puVar2 != &DAT_0077a940; puVar2 = (undefined4 *)*puVar2) {
        if (*(short *)(puVar2 + 2) == *local_310) goto LAB_00444c59;
      }
      puVar2 = (undefined4 *)0x0;
LAB_00444c59:
      uVar7 = puVar2[4];
      if (0 < (int)uVar7) {
        psVar3 = (short *)(puVar2 + 5);
        psVar12 = local_308 + iVar5;
        for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)psVar12 = *(undefined4 *)psVar3;
          psVar3 = psVar3 + 2;
          psVar12 = psVar12 + 2;
        }
        iVar5 = local_314 + uVar7;
        for (uVar7 = (uint)((uVar7 & 1) != 0); local_314 = iVar5, uVar7 != 0; uVar7 = uVar7 - 1) {
          *psVar12 = *psVar3;
          psVar3 = psVar3 + 1;
          psVar12 = psVar12 + 1;
        }
      }
    }
    local_310 = local_310 + 0x22;
    local_30c = local_30c + -1;
  } while (local_30c != 0);
  if (((char)param_1[0x5e] == '\0') && (0 < param_1[1])) {
    iVar8 = param_1[1];
    psVar3 = (short *)(*param_1 + 8);
    do {
      if ((char)psVar3[1] != '\0') {
        local_308[iVar5] = *psVar3;
        iVar5 = iVar5 + 1;
      }
      psVar3 = psVar3 + 0x1c;
      iVar8 = iVar8 + -1;
      local_314 = iVar5;
    } while (iVar8 != 0);
  }
  if ((DAT_0078a320 == 2) && (iVar8 = 0, 0 < iVar5)) {
    do {
      sVar1 = local_308[iVar8];
      if (((char)((int)sVar1 / 100) == '\x19') && ((int)sVar1 % 100 < 0x32)) {
        local_308[iVar8] = sVar1 + 0x32;
      }
      iVar8 = iVar8 + 1;
      iVar5 = local_314;
    } while (iVar8 < local_314);
  }
  iVar8 = 0;
  param_1[0x5f] = 0;
  if (0 < iVar5) {
    do {
      iVar9 = 0;
      if (0 < param_1[1]) {
        iVar4 = *param_1;
        do {
          if (*(short *)(iVar4 + 8) == local_308[iVar8]) {
            *(undefined4 *)(iVar4 + 0x24) = DAT_006f0888;
            if (*(char *)(iVar4 + 0xb) == '\0') {
              *(undefined1 *)(iVar4 + 0xb) = 1;
              if (param_1[0x5f] == 0x100) {
                return;
              }
              param_1[param_1[0x5f] + 0x60] = iVar4;
              param_1[0x5f] = param_1[0x5f] + 1;
            }
            break;
          }
          iVar9 = iVar9 + 1;
          iVar4 = iVar4 + 0x38;
        } while (iVar9 < param_1[1]);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  return;
}

