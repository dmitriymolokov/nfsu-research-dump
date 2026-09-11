/* Decompiled from Speed.exe @ 0050e890 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050e890(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  int *piVar16;
  int local_218 [64];
  int local_118 [64];
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  byte local_5;
  
  local_18 = DAT_00745e48;
  iVar6 = FUN_004acce0();
  piVar16 = DAT_0073ad40;
  local_14 = iVar6 * 0xc90 + DAT_00734588;
  pcVar10 = "WHEELS";
  iVar6 = -1;
  uVar11 = 0x57;
  do {
    pbVar15 = (byte *)(pcVar10 + 1);
    iVar6 = iVar6 * 0x21 + uVar11;
    pcVar10 = pcVar10 + 1;
    uVar11 = (uint)*pbVar15;
  } while (*pbVar15 != 0);
  local_c = DAT_0073ad40;
  piVar7 = (int *)FUN_0040a880();
  local_10 = piVar7;
  if (piVar16 != piVar7) {
    do {
      puVar8 = (undefined4 *)piVar16[3];
      puVar14 = puVar8 + piVar16[4] * 0xc;
      if ((iVar6 != 0) &&
         (puVar8 = (undefined4 *)FUN_0053e400(iVar6,puVar8,4), piVar7 = local_10, piVar16 = local_c,
         puVar8 == (undefined4 *)0x0)) break;
      if (puVar8 < puVar14) {
        local_c = puVar8;
        if ((iVar6 == 0) || (puVar8[1] == iVar6)) goto LAB_0050e93a;
        break;
      }
      piVar16 = (int *)*piVar16;
      local_c = piVar16;
    } while (piVar16 != piVar7);
  }
  local_c = (undefined4 *)0x0;
LAB_0050e93a:
  piVar16 = local_118;
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar16 = 0;
    piVar16 = piVar16 + 1;
  }
  piVar16 = local_218;
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar16 = 0;
    piVar16 = piVar16 + 1;
  }
  local_5 = 0;
  iVar6 = DAT_0073573c;
  do {
    DAT_0073573c = iVar6;
    if (local_c == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x44);
      FUN_004f8960();
      FUN_0050f200(param_1);
      FUN_00504450();
      return;
    }
    iVar13 = (int)*(short *)(local_c + 7);
    piVar16 = (int *)local_c[5];
    piVar7 = piVar16;
    if (piVar16 != (int *)0x0) {
      for (; piVar7 < piVar16 + iVar13 * 2; piVar7 = piVar7 + 2) {
        if (*piVar7 == 0x10c98090) {
          if (piVar7 != (int *)0x0) {
            iVar9 = piVar7[1];
            goto LAB_0050e995;
          }
          break;
        }
      }
    }
    iVar9 = 0;
LAB_0050e995:
    if (iVar9 == local_18) {
      cVar5 = FUN_0050c930();
      if (cVar5 == '\0') {
        if (local_c[3] == iVar6) {
          if (*(int *)(param_1 + 0x88) == 0) {
            piVar7 = piVar16;
            if (piVar16 != (int *)0x0) {
              for (; piVar7 < piVar16 + iVar13 * 2; piVar7 = piVar7 + 2) {
                if (*piVar7 == -0x3182724b) {
                  if (piVar7 != (int *)0x0) {
                    cVar5 = (char)piVar7[1];
                    goto LAB_0050eb55;
                  }
                  break;
                }
              }
            }
            cVar5 = '\0';
LAB_0050eb55:
            if (cVar5 != *(char *)(local_14 + 0xdc)) goto LAB_0050ec81;
          }
          piVar7 = piVar16;
          if (piVar16 != (int *)0x0) {
            for (; (piVar7 < piVar16 + iVar13 * 2 && (*piVar7 != -0x14fefe1e)); piVar7 = piVar7 + 2)
            {
            }
          }
          piVar7 = piVar16;
          if (piVar16 != (int *)0x0) {
            for (; (piVar7 < piVar16 + iVar13 * 2 && (*piVar7 != -0x3182724b)); piVar7 = piVar7 + 2)
            {
            }
          }
          piVar7 = piVar16 + iVar13 * 2;
          if (piVar16 != (int *)0x0) {
            for (; piVar16 < piVar7; piVar16 = piVar16 + 2) {
              if (*piVar16 == 0x10c98090) {
                if (piVar16 != (int *)0x0) {
                  local_10 = (int *)piVar16[1];
                  goto LAB_0050ebca;
                }
                break;
              }
            }
          }
          local_10 = (int *)0x0;
LAB_0050ebca:
          pbVar15 = (byte *)*local_c;
          iVar6 = -1;
          bVar2 = *pbVar15;
          pbVar12 = pbVar15;
          while (bVar2 != 0) {
            pbVar1 = pbVar12 + 1;
            iVar6 = iVar6 * 0x21 + (uint)bVar2;
            pbVar12 = pbVar12 + 1;
            bVar2 = *pbVar1;
          }
          uVar11 = (uint)local_5;
          iVar13 = 0;
          if (uVar11 != 0) {
            do {
              if (local_118[iVar13] == iVar6) {
                bVar3 = true;
                goto LAB_0050ec14;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)uVar11);
          }
          bVar3 = false;
LAB_0050ec14:
          iVar6 = 0;
          if (uVar11 != 0) {
            do {
              if (local_218[iVar6] == local_c[2]) {
                bVar4 = true;
                goto LAB_0050ec34;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uVar11);
          }
          bVar4 = false;
LAB_0050ec34:
          if ((!bVar3) || (!bVar4)) {
            iVar6 = -1;
            bVar2 = *pbVar15;
            while (bVar2 != 0) {
              iVar6 = iVar6 * 0x21 + (uint)bVar2;
              pbVar12 = pbVar15 + 1;
              pbVar15 = pbVar15 + 1;
              bVar2 = *pbVar12;
            }
            local_118[uVar11] = iVar6;
            local_218[uVar11] = local_c[2];
            goto LAB_0050ec6e;
          }
        }
      }
      else {
        cVar5 = FUN_0050c930();
        if (cVar5 != '\0') {
          if (*(int *)(param_1 + 0x88) == 0) {
            piVar7 = piVar16;
            if (piVar16 != (int *)0x0) {
              for (; piVar7 < piVar16 + iVar13 * 2; piVar7 = piVar7 + 2) {
                if (*piVar7 == -0x3182724b) {
                  if (piVar7 != (int *)0x0) {
                    cVar5 = (char)piVar7[1];
                    goto LAB_0050e9f5;
                  }
                  break;
                }
              }
            }
            cVar5 = '\0';
LAB_0050e9f5:
            if (cVar5 != *(char *)(local_14 + 0xdc)) goto LAB_0050ec81;
          }
          piVar7 = piVar16;
          if (piVar16 != (int *)0x0) {
            for (; (piVar7 < piVar16 + iVar13 * 2 && (*piVar7 != -0x14fefe1e)); piVar7 = piVar7 + 2)
            {
            }
          }
          piVar7 = piVar16;
          if (piVar16 != (int *)0x0) {
            for (; (piVar7 < piVar16 + iVar13 * 2 && (*piVar7 != -0x3182724b)); piVar7 = piVar7 + 2)
            {
            }
          }
          piVar7 = piVar16 + iVar13 * 2;
          if (piVar16 != (int *)0x0) {
            for (; (piVar16 < piVar7 && (*piVar16 != 0x10c98090)); piVar16 = piVar16 + 2) {
            }
          }
          pbVar15 = (byte *)*local_c;
          iVar6 = -1;
          bVar2 = *pbVar15;
          pbVar12 = pbVar15;
          while (bVar2 != 0) {
            pbVar1 = pbVar12 + 1;
            iVar6 = iVar6 * 0x21 + (uint)bVar2;
            pbVar12 = pbVar12 + 1;
            bVar2 = *pbVar1;
          }
          uVar11 = (uint)local_5;
          iVar13 = 0;
          if (uVar11 != 0) {
            do {
              if (local_118[iVar13] == iVar6) goto LAB_0050ec81;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)uVar11);
          }
          iVar6 = -1;
          bVar2 = *pbVar15;
          while (bVar2 != 0) {
            iVar6 = iVar6 * 0x21 + (uint)bVar2;
            pbVar12 = pbVar15 + 1;
            pbVar15 = pbVar15 + 1;
            bVar2 = *pbVar12;
          }
          local_118[uVar11] = iVar6;
LAB_0050ec6e:
          local_5 = local_5 + 1;
          FUN_0050f0e0();
        }
      }
    }
LAB_0050ec81:
    pcVar10 = "WHEELS";
    iVar6 = -1;
    uVar11 = 0x57;
    do {
      iVar6 = iVar6 * 0x21 + uVar11;
      pbVar15 = (byte *)(pcVar10 + 1);
      uVar11 = (uint)*pbVar15;
      pcVar10 = pcVar10 + 1;
    } while (*pbVar15 != 0);
    local_c = (int *)FUN_0057ce10(iVar6,0xffffffff,0,local_c,0xffffffff);
    iVar6 = DAT_0073573c;
  } while( true );
}

