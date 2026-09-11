/* Decompiled from Speed.exe @ 004e0d90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e0d90(undefined4 param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 *puVar12;
  float10 fVar13;
  int *local_14;
  int local_10;
  
  if ((param_3 < 0) || (1 < param_3)) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = &DAT_00758c28 + param_3 * 0x3e51;
  }
  local_10 = 0;
  if (0 < piVar4[0x1876]) {
    local_14 = piVar4 + 0x80e;
    do {
      if ((local_10 < 0) || (piVar9 = local_14, 0x13 < local_10)) {
        piVar9 = (int *)0x0;
      }
      iVar5 = 0;
      piVar7 = (int *)(DAT_00734588 + 0xd0);
      do {
        if (*piVar7 == piVar9[2]) {
          iVar5 = iVar5 * 0xc90 + DAT_00734588;
          goto LAB_004e0e12;
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 0x324;
      } while (iVar5 < 0x23);
      iVar5 = 0;
LAB_004e0e12:
      iVar5 = *(int *)(iVar5 + 0xc50) * 0xc90 + DAT_00734588;
      if (iVar5 != 0) {
        _DAT_00735e70 = 0;
        if (*(short *)(iVar5 + 0xc58) != 0) {
          uVar6 = 0;
          if (DAT_0073766c != 0) {
            piVar7 = (int *)(DAT_00737668 + 0x24);
            do {
              if ((piVar7[-1] == 0) && (*piVar7 == *(int *)(iVar5 + 0xc50))) {
                if (*(char *)(uVar6 * 0x34 + 0x30 + DAT_00737668) != '\0') goto LAB_004e0e94;
                break;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 0xd;
            } while (uVar6 < DAT_0073766c);
          }
          cVar3 = FUN_005a1630();
          if (cVar3 == '\0') goto LAB_004e0f01;
        }
LAB_004e0e94:
        piVar7 = _malloc(0x740);
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          iVar8 = piVar9[0xce];
          iVar11 = piVar9[0xd1];
          FUN_00417600();
          piVar7[0x1cc] = iVar5;
          piVar7[0x1cd] = iVar8;
          piVar7[0x1ce] = iVar11;
        }
        FUN_004ac5a0(piVar9,param_3,piVar7 + 4);
        puVar12 = *(undefined4 **)(param_2 + 8);
        *puVar12 = piVar7;
        *(int **)(param_2 + 8) = piVar7;
        piVar7[1] = (int)puVar12;
        *piVar7 = param_2 + 4;
      }
LAB_004e0f01:
      local_10 = local_10 + 1;
      local_14 = local_14 + 0xd2;
    } while (local_10 < piVar4[0x1876]);
  }
  FUN_00564990(param_2 + 4,&LAB_004c2bc0);
  local_10 = 0;
  iVar5 = DAT_00734588;
  if (0 < piVar4[0x18b3]) {
    piVar9 = piVar4 + 0x187a;
    do {
      iVar8 = *piVar9;
      _DAT_00735e70 = 0;
      if (iVar8 < 1) {
        if ((piVar9[-1] & DAT_00777b4c) != 0) {
LAB_004e1002:
          iVar8 = FUN_004b2640(piVar9[-2]);
          if (iVar8 != 0) {
            pbVar10 = (byte *)(iVar8 + 8);
            iVar8 = -1;
            bVar2 = *pbVar10;
            while (bVar2 != 0) {
              iVar8 = iVar8 * 0x21 + (uint)bVar2;
              pbVar1 = pbVar10 + 1;
              pbVar10 = pbVar10 + 1;
              bVar2 = *pbVar1;
            }
            iVar11 = 0;
            piVar7 = (int *)(iVar5 + 0xd0);
            do {
              if (*piVar7 == iVar8) {
                iVar8 = iVar11 * 0xc90 + iVar5;
                goto LAB_004e1052;
              }
              iVar11 = iVar11 + 1;
              piVar7 = piVar7 + 0x324;
            } while (iVar11 < 0x23);
            iVar8 = 0;
LAB_004e1052:
            iVar8 = *(int *)(iVar8 + 0xc50);
            if (iVar8 != -1) {
              piVar7 = _malloc(0x740);
              if (piVar7 == (int *)0x0) {
                piVar7 = (int *)0x0;
              }
              else {
                iVar11 = piVar9[-3];
                fVar13 = (float10)FUN_0057f170();
                FUN_00417600();
                piVar7[0x1ce] = iVar11;
                piVar7[0x1cc] = iVar8 * 0xc90 + iVar5;
                piVar7[0x1cd] = (int)(float)fVar13;
              }
              FUN_004ac0f0(piVar7 + 4);
              puVar12 = *(undefined4 **)(param_2 + 8);
              *puVar12 = piVar7;
              *(int **)(param_2 + 8) = piVar7;
              piVar7[1] = (int)puVar12;
              *piVar7 = param_2 + 4;
              iVar5 = DAT_00734588;
            }
          }
        }
      }
      else if ((piVar9[-1] & DAT_00777b4c) != 0) {
        if ((iVar8 < 0) || (DAT_007343fc <= iVar8)) {
          iVar11 = 0;
        }
        else {
          iVar11 = iVar8 * 0x20 + DAT_007343f8;
        }
        if (*(char *)((int)&DAT_00758ad8 + iVar8) != '\0') goto LAB_004e1002;
        uVar6 = 0;
        if (DAT_0073766c != 0) {
          piVar7 = (int *)(DAT_00737668 + 0x24);
          do {
            if ((piVar7[-1] == 6) && (*piVar7 == *(int *)(iVar11 + 8))) {
              if (*(char *)(uVar6 * 0x34 + 0x30 + DAT_00737668) != '\0') goto LAB_004e1002;
              break;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 0xd;
          } while (uVar6 < DAT_0073766c);
        }
      }
      local_10 = local_10 + 1;
      piVar9 = piVar9 + 4;
    } while (local_10 < piVar4[0x18b3]);
  }
  if ((&DAT_0076027c)[param_3 * 0x7ca2] != 0) {
    iVar8 = 0;
    piVar9 = (int *)(iVar5 + 0xd0);
    do {
      if (*piVar9 == (&DAT_0075ef00)[param_3 * 0x3e51]) {
        iVar8 = iVar8 * 0xc90 + iVar5;
        goto LAB_004e114a;
      }
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 0x324;
    } while (iVar8 < 0x23);
    iVar8 = 0;
LAB_004e114a:
    iVar8 = *(int *)(iVar8 + 0xc50);
    piVar9 = _malloc(0x740);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      iVar11 = (&DAT_0075f23c)[param_3 * 0x3e51];
      fVar13 = (float10)FUN_0057f170();
      FUN_00417600();
      piVar9[0x1cc] = iVar8 * 0xc90 + iVar5;
      piVar9[0x1cd] = (int)(float)fVar13;
      piVar9[0x1ce] = iVar11;
    }
    FUN_004ac5a0(&DAT_0075eef8 + param_3 * 0x3e51,param_3,piVar9 + 4);
    puVar12 = *(undefined4 **)(param_2 + 8);
    *puVar12 = piVar9;
    *(int **)(param_2 + 8) = piVar9;
    piVar9[1] = (int)puVar12;
    *piVar9 = param_2 + 4;
  }
  if (DAT_00777b4c == 8) {
    iVar5 = piVar4[1];
  }
  else {
    iVar5 = *piVar4;
  }
  puVar12 = *(undefined4 **)(param_2 + 4);
  *(undefined4 **)(param_2 + 0xc) = puVar12;
  for (; puVar12 != (undefined4 *)(param_2 + 4); puVar12 = (undefined4 *)*puVar12) {
    if (puVar12[0x1ce] == iVar5) {
      *(undefined4 **)(param_2 + 0xc) = puVar12;
    }
  }
  iVar5 = *(int *)(*(int *)(param_2 + 0xc) + 0x738);
  if (DAT_00777b4c == 8) {
    piVar4[1] = iVar5;
  }
  else {
    *piVar4 = iVar5;
  }
  iVar5 = *(int *)(param_2 + 0xc);
  iVar8 = *(int *)(param_2 + 0x14);
  iVar11 = FUN_004b2330();
  puVar12 = (undefined4 *)&DAT_00748120;
  if (iVar8 != 1) {
    puVar12 = &DAT_00748850;
  }
  FUN_004323f0(puVar12,iVar5 + 0x10);
  if (puVar12 == &DAT_00748850) {
    _DAT_0072cc80 = 1;
  }
  else if (puVar12 == (undefined4 *)&DAT_00748120) {
    _DAT_0072cc7c = 1;
  }
  if (iVar11 != 0) {
    FUN_004b0e50(iVar11,puVar12,1);
  }
  return;
}

