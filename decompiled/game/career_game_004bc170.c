/* Decompiled from Speed.exe @ 004bc170 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc170(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  char *pcVar14;
  int iVar15;
  undefined4 *puVar16;
  float10 fVar17;
  int local_10;
  undefined *local_c;
  int *local_8;
  
  local_10 = 0;
  if (0 < DAT_0075ee00) {
    local_c = &DAT_0075ac60;
    do {
      if (((int)local_c < 0x75ac60) || (puVar7 = local_c, 0x75edff < (int)local_c)) {
        puVar7 = (undefined *)0x0;
      }
      iVar8 = 0;
      piVar10 = (int *)(DAT_00734588 + 0xd0);
      do {
        if (*piVar10 == *(int *)(puVar7 + 8)) {
          iVar8 = iVar8 * 0xc90 + DAT_00734588;
          goto LAB_004bc1d2;
        }
        iVar8 = iVar8 + 1;
        piVar10 = piVar10 + 0x324;
      } while (iVar8 < 0x23);
      iVar8 = 0;
LAB_004bc1d2:
      iVar8 = *(int *)(iVar8 + 0xc50) * 0xc90 + DAT_00734588;
      if (iVar8 != 0) {
        _DAT_00735e70 = 0;
        if (*(short *)(iVar8 + 0xc58) != 0) {
          uVar9 = 0;
          if (DAT_0073766c != 0) {
            piVar10 = (int *)(DAT_00737668 + 0x24);
            do {
              if ((piVar10[-1] == 0) && (*piVar10 == *(int *)(iVar8 + 0xc50))) {
                if (*(char *)(uVar9 * 0x34 + 0x30 + DAT_00737668) != '\0') goto LAB_004bc254;
                break;
              }
              uVar9 = uVar9 + 1;
              piVar10 = piVar10 + 0xd;
            } while (uVar9 < DAT_0073766c);
          }
          cVar6 = FUN_005a1630();
          if (cVar6 == '\0') goto LAB_004bc2bf;
        }
LAB_004bc254:
        piVar10 = _malloc(0x740);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          iVar15 = *(int *)(puVar7 + 0x344);
          iVar3 = *(int *)(puVar7 + 0x338);
          FUN_00417600();
          piVar10[0x1cc] = iVar8;
          piVar10[0x1cd] = iVar3;
          piVar10[0x1ce] = iVar15;
        }
        FUN_004ac5a0(puVar7,0,piVar10 + 4);
        puVar4 = *(undefined4 **)(param_1 + 0x44);
        *puVar4 = piVar10;
        *(int **)(param_1 + 0x44) = piVar10;
        piVar10[1] = (int)puVar4;
        *piVar10 = param_1 + 0x40;
      }
LAB_004bc2bf:
      local_10 = local_10 + 1;
      local_c = local_c + 0x348;
    } while (local_10 < DAT_0075ee00);
  }
  FUN_00564990(param_1 + 0x40,&LAB_004c2bc0);
  local_10 = 0;
  if (0 < DAT_0075eef4) {
    local_8 = &DAT_0075ee10;
    uVar9 = DAT_0073766c;
    do {
      iVar8 = *local_8;
      _DAT_00735e70 = 0;
      if (iVar8 < 1) {
        if ((local_8[-1] & DAT_00777b4c) != 0) {
LAB_004bc3a9:
          iVar8 = FUN_004b2640(local_8[-2]);
          if (iVar8 != 0) {
            pbVar12 = (byte *)(iVar8 + 8);
            iVar8 = -1;
            bVar2 = *pbVar12;
            while (bVar2 != 0) {
              iVar8 = iVar8 * 0x21 + (uint)bVar2;
              pbVar1 = pbVar12 + 1;
              pbVar12 = pbVar12 + 1;
              bVar2 = *pbVar1;
            }
            iVar15 = 0;
            piVar10 = (int *)(DAT_00734588 + 0xd0);
            do {
              if (*piVar10 == iVar8) {
                iVar8 = iVar15 * 0xc90 + DAT_00734588;
                goto LAB_004bc402;
              }
              iVar15 = iVar15 + 1;
              piVar10 = piVar10 + 0x324;
            } while (iVar15 < 0x23);
            iVar8 = 0;
LAB_004bc402:
            iVar8 = *(int *)(iVar8 + 0xc50);
            if (iVar8 != -1) {
              iVar15 = iVar8 * 0xc90 + DAT_00734588;
              piVar10 = _malloc(0x740);
              if (piVar10 == (int *)0x0) {
                piVar10 = (int *)0x0;
              }
              else {
                iVar3 = local_8[-3];
                fVar17 = (float10)FUN_0057f170();
                FUN_00417600();
                piVar10[0x1cc] = iVar15;
                piVar10[0x1cd] = (int)(float)fVar17;
                piVar10[0x1ce] = iVar3;
              }
              FUN_004ac0f0(piVar10 + 4);
              FUN_004bc830(iVar8);
              piVar13 = (int *)(param_1 + 0x40);
              if (local_8[-1] == 8) {
                iVar8 = *piVar13;
                *piVar13 = (int)piVar10;
                *(int **)(iVar8 + 4) = piVar10;
                piVar10[1] = (int)piVar13;
                *piVar10 = iVar8;
                uVar9 = DAT_0073766c;
              }
              else {
                puVar4 = *(undefined4 **)(param_1 + 0x44);
                *puVar4 = piVar10;
                *(int **)(param_1 + 0x44) = piVar10;
                piVar10[1] = (int)puVar4;
                *piVar10 = (int)piVar13;
                uVar9 = DAT_0073766c;
              }
            }
          }
        }
      }
      else if ((local_8[-1] & DAT_00777b4c) != 0) {
        if ((iVar8 < 0) || (DAT_007343fc <= iVar8)) {
          iVar15 = 0;
        }
        else {
          iVar15 = iVar8 * 0x20 + DAT_007343f8;
        }
        if (*(char *)((int)&DAT_00758ad8 + iVar8) != '\0') goto LAB_004bc3a9;
        uVar11 = 0;
        if (uVar9 != 0) {
          piVar10 = (int *)(DAT_00737668 + 0x24);
          do {
            if ((piVar10[-1] == 6) && (*piVar10 == *(int *)(iVar15 + 8))) {
              if (*(char *)(uVar11 * 0x34 + 0x30 + DAT_00737668) != '\0') goto LAB_004bc3a9;
              break;
            }
            uVar11 = uVar11 + 1;
            piVar10 = piVar10 + 0xd;
          } while (uVar11 < uVar9);
        }
      }
      local_10 = local_10 + 1;
      local_8 = local_8 + 4;
    } while (local_10 < DAT_0075eef4);
  }
  if (DAT_0076027c != 0) {
    iVar8 = 0;
    piVar10 = (int *)(DAT_00734588 + 0xd0);
    do {
      if (*piVar10 == DAT_0075ef00) {
        iVar8 = iVar8 * 0xc90 + DAT_00734588;
        goto LAB_004bc522;
      }
      iVar8 = iVar8 + 1;
      piVar10 = piVar10 + 0x324;
    } while (iVar8 < 0x23);
    iVar8 = 0;
LAB_004bc522:
    iVar15 = *(int *)(iVar8 + 0xc50) * 0xc90 + DAT_00734588;
    piVar10 = _malloc(0x740);
    iVar8 = DAT_0075f23c;
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      fVar17 = (float10)FUN_0057f170();
      FUN_00417600();
      piVar10[0x1cc] = iVar15;
      piVar10[0x1cd] = (int)(float)fVar17;
      piVar10[0x1ce] = iVar8;
    }
    FUN_004ac5a0(&DAT_0075eef8,0,piVar10 + 4);
    puVar4 = *(undefined4 **)(param_1 + 0x44);
    *puVar4 = piVar10;
    *(int **)(param_1 + 0x44) = piVar10;
    piVar10[1] = (int)puVar4;
    *piVar10 = param_1 + 0x40;
  }
  puVar16 = (undefined4 *)(param_1 + 0x40);
  for (puVar4 = *(undefined4 **)(param_1 + 0x40); puVar4 != puVar16; puVar4 = (undefined4 *)*puVar4)
  {
    iVar8 = *(int *)(puVar4[0x1cc] + 0xc50);
    if ((((iVar8 == 0x13) || (iVar8 == 0x11)) || (iVar8 == 0x12)) || (iVar8 == 0x10)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    iVar8 = FUN_004f8730(param_1 + 0x50,puVar4[0x1ce],0,!bVar5);
    iVar15 = *(int *)(puVar4[0x1cc] + 0xc50) * 0xc90 + DAT_00734588;
    pcVar14 = (char *)(iVar15 + 0xc0);
    if ((DAT_00734998 != 0) && (*(int *)(iVar15 + 0xc50) == 0xe)) {
      pcVar14 = "HONDA";
    }
    iVar15 = FUN_004f42f0("CARSELECT_MANUFACTURER_%s",pcVar14);
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x24) != iVar15)) {
      *(int *)(iVar8 + 0x24) = iVar15;
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x400000;
    }
  }
  iVar8 = DAT_00758c2c;
  if (DAT_00777b4c != 8) {
    iVar8 = DAT_00758c28;
  }
  puVar4 = (undefined4 *)*puVar16;
  *(undefined4 **)(param_1 + 0x48) = puVar4;
  for (; puVar4 != puVar16; puVar4 = (undefined4 *)*puVar4) {
    if (puVar4[0x1ce] == iVar8) {
      *(undefined4 **)(param_1 + 0x48) = puVar4;
    }
  }
  FUN_004bd0f0(0);
  iVar8 = *(int *)(*(int *)(param_1 + 0x48) + 0x738);
  iVar15 = iVar8;
  if (DAT_00777b4c == 8) {
    iVar15 = DAT_00758c28;
    DAT_00758c2c = iVar8;
  }
  DAT_00758c28 = iVar15;
  iVar8 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x4c) = iVar8;
  iVar15 = FUN_004f3f90(&DAT_00746104);
  if ((iVar15 == 0) || (*(int *)(iVar15 + 0x18) == 0)) {
    iVar15 = FUN_004f3f90(&DAT_00746104);
    if ((iVar15 == 0) ||
       (((*(int *)(iVar15 + 0x18) == 0 || (iVar15 = FUN_004f3f90(&DAT_00746104), iVar15 == 0)) ||
        (*(int *)(iVar15 + 0x14) == 0)))) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(*(int *)(iVar15 + 0x14) + 0x40);
    }
  }
  else {
    iVar15 = FUN_004f3f90(&DAT_00746104);
    if (iVar15 == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(iVar15 + 0x14);
    }
  }
  FUN_004323f0(&DAT_00748850,iVar8 + 0x10);
  _DAT_0072cc80 = 1;
  if (iVar15 != 0) {
    FUN_004b0e50(iVar15,&DAT_00748850,1);
  }
  FUN_004f8960();
  return;
}

