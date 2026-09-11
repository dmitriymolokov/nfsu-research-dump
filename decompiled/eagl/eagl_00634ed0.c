/* Decompiled from Speed.exe @ 00634ed0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __thiscall
FUN_00634ed0(ushort *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7,float param_8,int param_9,ushort *param_10)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  ushort *puVar10;
  float *pfVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  int local_c;
  
  iVar5 = param_6;
  if (param_3 != param_2) {
    if (((param_3 == 0) || (param_2 == -1)) || (param_3 < param_2)) {
      iVar6 = 0;
      if (0 < param_9) {
        do {
          puVar10 = param_1 + param_10[iVar6] * param_6 * 6;
          if (0 < (int)param_6) {
            puVar7 = (undefined4 *)
                     (param_5 + (uint)*(ushort *)(param_7 + (uint)param_10[iVar6] * 2) * 4);
            iVar16 = param_6;
            do {
              puVar10 = puVar10 + 6;
              *puVar7 = *(undefined4 *)puVar10;
              puVar7 = puVar7 + 1;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_9);
      }
      param_2 = 0;
    }
    else if (0 < param_9) {
      local_c = param_9;
      puVar10 = param_10;
      do {
        param_6 = (uint)*(ushort *)(param_7 + (uint)*puVar10 * 2);
        iVar6 = 0;
        if (3 < iVar5) {
          puVar7 = (undefined4 *)(param_5 + 8 + param_6 * 4);
          iVar16 = iVar6;
          do {
            puVar7[-2] = *(undefined4 *)(param_4 + ((uint)*puVar10 * iVar5 + iVar16) * 4);
            puVar7[-1] = *(undefined4 *)(param_4 + 4 + ((uint)*puVar10 * iVar5 + iVar16) * 4);
            *puVar7 = *(undefined4 *)(param_4 + 8 + ((uint)*puVar10 * iVar5 + iVar16) * 4);
            puVar7[1] = *(undefined4 *)(param_4 + 0xc + ((uint)*puVar10 * iVar5 + iVar16) * 4);
            param_6 = param_6 + 4;
            iVar6 = iVar16 + 4;
            iVar1 = iVar16 + 7;
            puVar7 = puVar7 + 4;
            iVar16 = iVar6;
          } while (iVar1 < iVar5);
        }
        if (iVar6 < iVar5) {
          puVar7 = (undefined4 *)(param_5 + param_6 * 4);
          do {
            *puVar7 = *(undefined4 *)(param_4 + ((uint)*puVar10 * iVar5 + iVar6) * 4);
            puVar7 = puVar7 + 1;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar5);
        }
        puVar10 = puVar10 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    if (param_3 != 0) {
      uVar3 = *param_1;
      iVar6 = param_2;
      if ((char)param_1[1] == '\b') {
        for (; iVar6 < param_3; iVar6 = iVar6 + 1) {
          param_6 = 0;
          if (0 < param_9) {
            do {
              iVar16 = (uint)param_10[param_6] * iVar5;
              pbVar12 = (byte *)((int)param_1 +
                                iVar16 + (uint)*param_1 * iVar6 + (uint)uVar3 * 0xc + 4);
              uVar14 = (uint)*(ushort *)(param_7 + (uint)param_10[param_6] * 2);
              pfVar9 = (float *)(param_1 + iVar16 * 6 + 2);
              param_2 = 0;
              if (3 < iVar5) {
                iVar16 = 3;
                pfVar8 = pfVar9;
                pbVar13 = pbVar12;
                pfVar11 = (float *)(param_5 + 8 + uVar14 * 4);
                do {
                  iVar16 = iVar16 + 4;
                  uVar14 = uVar14 + 4;
                  pfVar9 = pfVar8 + 0xc;
                  pbVar12 = pbVar13 + 4;
                  pfVar11[-2] = ((float)*pbVar13 * pfVar8[1] + *pfVar8) * param_8 + pfVar11[-2];
                  pfVar11[-1] = ((float)pbVar13[1] * pfVar8[4] + pfVar8[3]) * param_8 + pfVar11[-1];
                  *pfVar11 = ((float)pbVar13[2] * pfVar8[7] + pfVar8[6]) * param_8 + *pfVar11;
                  param_2 = param_2 + 4;
                  pfVar11[1] = ((float)pbVar13[3] * pfVar8[10] + pfVar8[9]) * param_8 + pfVar11[1];
                  pfVar8 = pfVar9;
                  pbVar13 = pbVar12;
                  pfVar11 = pfVar11 + 4;
                } while (iVar16 < iVar5);
              }
              if (param_2 < iVar5) {
                param_2 = iVar5 - param_2;
                pfVar8 = (float *)(param_5 + uVar14 * 4);
                do {
                  bVar2 = *pbVar12;
                  pbVar12 = pbVar12 + 1;
                  param_2 = param_2 + -1;
                  *pfVar8 = ((float)bVar2 * pfVar9[1] + *pfVar9) * param_8 + *pfVar8;
                  pfVar9 = pfVar9 + 3;
                  pfVar8 = pfVar8 + 1;
                } while (param_2 != 0);
              }
              param_6 = param_6 + 1;
            } while ((int)param_6 < param_9);
          }
        }
      }
      else if (((char)param_1[1] == '\x10') && (param_4 = param_2, param_2 < param_3)) {
        do {
          param_6 = 0;
          if (0 < param_9) {
            do {
              iVar6 = (uint)param_10[param_6] * iVar5;
              puVar10 = param_1 + (uint)uVar3 * 6 + (uint)*param_1 * param_4 + iVar6 + 2;
              uVar14 = (uint)*(ushort *)(param_7 + (uint)param_10[param_6] * 2);
              pfVar9 = (float *)(param_1 + iVar6 * 6 + 2);
              param_2 = 0;
              if (3 < iVar5) {
                iVar6 = 3;
                pfVar8 = pfVar9;
                pfVar11 = (float *)(param_5 + 8 + uVar14 * 4);
                puVar15 = puVar10;
                do {
                  iVar6 = iVar6 + 4;
                  uVar14 = uVar14 + 4;
                  pfVar9 = pfVar8 + 0xc;
                  puVar10 = puVar15 + 4;
                  pfVar11[-2] = ((float)*puVar15 * pfVar8[1] + *pfVar8) * param_8 + pfVar11[-2];
                  pfVar11[-1] = ((float)puVar15[1] * pfVar8[4] + pfVar8[3]) * param_8 + pfVar11[-1];
                  *pfVar11 = ((float)puVar15[2] * pfVar8[7] + pfVar8[6]) * param_8 + *pfVar11;
                  param_2 = param_2 + 4;
                  pfVar11[1] = ((float)puVar15[3] * pfVar8[10] + pfVar8[9]) * param_8 + pfVar11[1];
                  pfVar8 = pfVar9;
                  pfVar11 = pfVar11 + 4;
                  puVar15 = puVar10;
                } while (iVar6 < iVar5);
              }
              if (param_2 < iVar5) {
                param_2 = iVar5 - param_2;
                pfVar8 = (float *)(param_5 + uVar14 * 4);
                do {
                  uVar4 = *puVar10;
                  puVar10 = puVar10 + 1;
                  param_2 = param_2 + -1;
                  *pfVar8 = ((float)uVar4 * pfVar9[1] + *pfVar9) * param_8 + *pfVar8;
                  pfVar9 = pfVar9 + 3;
                  pfVar8 = pfVar8 + 1;
                } while (param_2 != 0);
              }
              param_6 = param_6 + 1;
            } while ((int)param_6 < param_9);
          }
          param_4 = param_4 + 1;
        } while (param_4 < param_3);
        return;
      }
    }
  }
  return;
}

