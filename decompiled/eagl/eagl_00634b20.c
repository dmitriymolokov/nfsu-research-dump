/* Decompiled from Speed.exe @ 00634b20 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __thiscall
FUN_00634b20(ushort *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
            ,int param_8)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  ushort *puVar16;
  
  iVar4 = param_2;
  if (param_4 != param_3) {
    if (((param_4 < param_3) || (param_4 == 0)) || (param_3 == -1)) {
      iVar13 = 0;
      if (0 < param_7) {
        do {
          iVar11 = (uint)*(ushort *)(param_8 + iVar13 * 2) * param_2;
          puVar16 = param_1 + iVar11 * 6;
          if (0 < param_2) {
            puVar5 = (undefined4 *)(param_6 + iVar11 * 4);
            iVar11 = param_2;
            do {
              puVar16 = puVar16 + 6;
              *puVar5 = *(undefined4 *)puVar16;
              puVar5 = puVar5 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < param_7);
      }
      param_3 = 0;
    }
    else if ((param_6 != param_5) && (param_2 = 0, 0 < param_7)) {
      do {
        if (0 < iVar4) {
          puVar5 = (undefined4 *)(param_6 + (uint)*(ushort *)(param_8 + param_2 * 2) * iVar4 * 4);
          iVar13 = iVar4;
          do {
            *puVar5 = *(undefined4 *)((param_5 - param_6) + (int)puVar5);
            puVar5 = puVar5 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        param_2 = param_2 + 1;
      } while (param_2 < param_7);
    }
    if (param_4 != 0) {
      uVar2 = *param_1;
      iVar13 = param_3;
      if ((char)param_1[1] == '\b') {
        for (; iVar13 < param_4; iVar13 = iVar13 + 1) {
          param_2 = 0;
          if (0 < param_7) {
            do {
              iVar11 = (uint)*(ushort *)(param_8 + param_2 * 2) * iVar4;
              pfVar7 = (float *)(param_1 + iVar11 * 6 + 2);
              pbVar9 = (byte *)((int)param_1 +
                               iVar11 + (uint)*param_1 * iVar13 + (uint)uVar2 * 0xc + 4);
              iVar14 = 0;
              if (3 < iVar4) {
                param_3 = 3;
                pfVar6 = pfVar7;
                pbVar10 = pbVar9;
                pfVar8 = (float *)(param_6 + iVar11 * 4);
                do {
                  iVar14 = iVar14 + 4;
                  pfVar7 = pfVar6 + 0xc;
                  pbVar9 = pbVar10 + 4;
                  *pfVar8 = (float)*pbVar10 * pfVar6[1] + *pfVar6 + *pfVar8;
                  pfVar8[1] = (float)pbVar10[1] * pfVar6[4] + pfVar6[3] + pfVar8[1];
                  pfVar8[2] = (float)pbVar10[2] * pfVar6[7] + pfVar6[6] + pfVar8[2];
                  param_3 = param_3 + 4;
                  pfVar8[3] = (float)pbVar10[3] * pfVar6[10] + pfVar6[9] + pfVar8[3];
                  pfVar6 = pfVar7;
                  pbVar10 = pbVar9;
                  pfVar8 = pfVar8 + 4;
                } while (param_3 < iVar4);
              }
              if (iVar14 < iVar4) {
                iVar12 = iVar4 - iVar14;
                pfVar6 = (float *)(param_6 + (iVar11 + iVar14) * 4);
                do {
                  bVar1 = *pbVar9;
                  pbVar9 = pbVar9 + 1;
                  iVar12 = iVar12 + -1;
                  *pfVar6 = (float)bVar1 * pfVar7[1] + *pfVar7 + *pfVar6;
                  pfVar7 = pfVar7 + 3;
                  pfVar6 = pfVar6 + 1;
                } while (iVar12 != 0);
              }
              param_2 = param_2 + 1;
            } while (param_2 < param_7);
          }
        }
      }
      else if (((char)param_1[1] == '\x10') && (param_5 = param_3, param_3 < param_4)) {
        do {
          param_2 = 0;
          if (0 < param_7) {
            do {
              iVar11 = (uint)*(ushort *)(param_8 + param_2 * 2) * iVar4;
              pfVar7 = (float *)(param_1 + iVar11 * 6 + 2);
              puVar16 = param_1 + (uint)uVar2 * 6 + (uint)*param_1 * param_5 + iVar11 + 2;
              iVar13 = 0;
              param_3 = 0;
              if (3 < iVar4) {
                iVar14 = 3;
                pfVar6 = pfVar7;
                pfVar8 = (float *)(param_6 + iVar11 * 4);
                puVar15 = puVar16;
                do {
                  iVar14 = iVar14 + 4;
                  pfVar7 = pfVar6 + 0xc;
                  puVar16 = puVar15 + 4;
                  *pfVar8 = (float)*puVar15 * pfVar6[1] + *pfVar6 + *pfVar8;
                  pfVar8[1] = (float)puVar15[1] * pfVar6[4] + pfVar6[3] + pfVar8[1];
                  pfVar8[2] = (float)puVar15[2] * pfVar6[7] + pfVar6[6] + pfVar8[2];
                  iVar13 = param_3 + 4;
                  pfVar8[3] = (float)puVar15[3] * pfVar6[10] + pfVar6[9] + pfVar8[3];
                  pfVar6 = pfVar7;
                  pfVar8 = pfVar8 + 4;
                  puVar15 = puVar16;
                  param_3 = iVar13;
                } while (iVar14 < iVar4);
              }
              if (iVar13 < iVar4) {
                iVar14 = iVar4 - iVar13;
                pfVar6 = (float *)(param_6 + (iVar13 + iVar11) * 4);
                do {
                  uVar3 = *puVar16;
                  puVar16 = puVar16 + 1;
                  iVar14 = iVar14 + -1;
                  *pfVar6 = (float)uVar3 * pfVar7[1] + *pfVar6 + *pfVar7;
                  pfVar7 = pfVar7 + 3;
                  pfVar6 = pfVar6 + 1;
                } while (iVar14 != 0);
              }
              param_2 = param_2 + 1;
            } while (param_2 < param_7);
          }
          param_5 = param_5 + 1;
        } while (param_5 < param_4);
        return;
      }
    }
  }
  return;
}

