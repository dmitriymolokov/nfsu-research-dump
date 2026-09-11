/* spd-match: far pct=5.76 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00402d30 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00403300) */
/* WARNING: Removing unreachable block (ram,0x0040390a) */
/* WARNING: Removing unreachable block (ram,0x004035a2) */
/* WARNING: Removing unreachable block (ram,0x0040335e) */
/* WARNING: Removing unreachable block (ram,0x00402dec) */
/* WARNING: Removing unreachable block (ram,0x004032a8) */
/* WARNING: Removing unreachable block (ram,0x00403471) */
/* WARNING: Removing unreachable block (ram,0x0040368b) */
/* WARNING: Removing unreachable block (ram,0x004035e3) */
/* WARNING: Removing unreachable block (ram,0x00403138) */
/* WARNING: Removing unreachable block (ram,0x004034be) */
/* WARNING: Removing unreachable block (ram,0x004031ad) */
/* WARNING: Removing unreachable block (ram,0x00403424) */
/* WARNING: Removing unreachable block (ram,0x00403560) */
/* WARNING: Removing unreachable block (ram,0x00403628) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402d30(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined4 *puVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  float fVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  ushort uVar13;
  undefined2 uVar14;
  uint uVar15;
  undefined4 uVar16;
  float *pfVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 *puVar21;
  float10 fVar22;
  int *local_238;
  float local_234;
  float local_228;
  float local_220;
  float fStack_210;
  float fStack_1fc;
  float fStack_1ec;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_19c;
  float local_198;
  float local_194;
  undefined4 local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  int local_180;
  float local_17c;
  float fStack_178;
  int local_174;
  float fStack_170;
  int local_16c;
  float local_168;
  float fStack_164;
  undefined1 auStack_15c [60];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [44];
  undefined1 auStack_bc [44];
  undefined1 local_90 [64];
  undefined1 auStack_50 [76];
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    bVar9 = false;
    iVar20 = 0;
    pfVar17 = (float *)(param_1 + 0x18);
    do {
      if (2 < iVar20) break;
      fVar2 = *(float *)(param_2 + 0x60) - pfVar17[-2];
      fVar7 = *(float *)(param_2 + 100) - pfVar17[-1];
      fVar4 = *(float *)(param_2 + 0x68) - *pfVar17;
      if (SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar4 * fVar4) < *(float *)(iVar1 + 0x80)) {
        bVar9 = true;
      }
      iVar20 = iVar20 + 1;
      pfVar17 = pfVar17 + 4;
    } while (!bVar9);
    local_174 = iVar1;
    if (*(int *)(param_2 + 0x24) == 0) {
      uVar15 = DAT_00704304 << 0x11 ^ DAT_00704304;
      uVar15 = uVar15 ^ uVar15 >> 0xd;
      DAT_00704304 = uVar15 ^ uVar15 << 5;
      local_1c4 = (float)(DAT_00704304 & 0x7fffffff);
      uVar16 = FUN_00674898();
      *(undefined4 *)(param_2 + 0x24) = uVar16;
    }
    iVar20 = DAT_00736530;
    if ((bVar9) && ((*(int *)(param_2 + 0x10) == 1 || (param_3 < DAT_006cc7a4)))) {
      fVar2 = *(float *)(param_2 + 0x14);
      local_234 = param_3;
      if (param_3 < DAT_006cc7a4) {
        local_234 = -param_3;
      }
      else if ((fVar2 != DAT_006cc7a4) && (fVar2 < param_3)) {
        local_234 = fVar2;
      }
      local_228 = *(float *)(param_2 + 0x18);
      if (local_228 < local_234) {
        local_238 = *(int **)(param_2 + 0x20);
        if ((((local_238 == (int *)0x0) || (local_238[3] != param_2)) || (local_238[4] != param_4))
           && (*(int *)(DAT_00736530 + 0x18) != *(int *)(DAT_00736530 + 0x2c))) {
          local_238 = *(int **)(DAT_00736530 + 0x10);
          iVar18 = *(int *)(DAT_00736530 + 0x18) + 1;
          if (local_238 == (int *)0x0) {
            local_238 = (int *)0x0;
          }
          else {
            iVar3 = *local_238;
            if (*(int *)(DAT_00736530 + 0x1c) < iVar18) {
              *(int *)(DAT_00736530 + 0x1c) = iVar18;
            }
            *(int *)(iVar20 + 0x18) = iVar18;
            *(int *)(iVar20 + 0x10) = iVar3;
            local_238[4] = param_4;
            local_238[3] = param_2;
            piVar6 = local_238 + 5;
            *piVar6 = (int)piVar6;
            local_238[6] = (int)piVar6;
            local_238[2] = *(int *)(param_2 + 0x1c);
            *(int **)(param_2 + 0x20) = local_238;
          }
          puVar21 = *(undefined4 **)(param_1 + 4);
          *puVar21 = local_238;
          *(int **)(param_1 + 4) = local_238;
          local_238[1] = (int)puVar21;
          *local_238 = param_1;
        }
        if (local_238 != (int *)0x0) {
          local_190 = *(undefined4 *)(iVar1 + 0x68);
          local_184 = *(undefined4 *)(iVar1 + 100);
          local_194 = *(float *)(iVar1 + 0x60);
          local_1cc = *(float *)(iVar1 + 0x78);
          fVar2 = *(float *)(iVar1 + 0x74);
          fVar4 = *(float *)(iVar1 + 0x70);
          FUN_00401cd0();
          FUN_00401cd0();
          local_120 = 0;
          local_11c = 0;
          local_118 = 0;
          local_114 = 0x3f800000;
          local_168 = *(float *)(iVar1 + 0x48) * _DAT_006ccd0c * _DAT_006cc920;
          local_16c = (int)*(char *)(iVar1 + 0x1d);
          local_180 = (int)*(char *)(iVar1 + 0x18);
          uVar15 = *(uint *)(param_2 + 0x24);
          local_1c8 = *(float *)(iVar1 + 0x44) * *(float *)(iVar1 + 0x40);
          fVar7 = *(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x50);
          local_1c4 = *(float *)(iVar1 + 0x30) - *(float *)(iVar1 + 0x34) * *(float *)(iVar1 + 0x30)
          ;
          local_188 = *(float *)(iVar1 + 0x40) - local_1c8;
          fVar8 = *(float *)(iVar1 + 0x50) - fVar7;
          if (local_228 <= local_234) {
            local_198 = fVar4 * _DAT_006cc7dc;
            local_18c = fVar2 * _DAT_006cc7dc;
            local_17c = local_1cc * _DAT_006cc7dc;
            do {
              local_234 = local_234 - local_228;
              if (local_180 == 0) {
                uVar15 = uVar15 << 0x11 ^ uVar15;
                uVar15 = uVar15 ^ uVar15 >> 0xd;
                uVar15 = uVar15 ^ uVar15 << 5;
                uVar15 = uVar15 << 0x11 ^ uVar15;
                uVar15 = uVar15 ^ uVar15 >> 0xd;
                uVar15 = uVar15 ^ uVar15 << 5;
                uVar15 = uVar15 << 0x11 ^ uVar15;
                uVar15 = uVar15 ^ uVar15 >> 0xd;
                uVar15 = uVar15 ^ uVar15 << 5;
                FUN_00674898();
                FUN_0040b990(auStack_110,&DAT_0078bcc0);
                FUN_00674898();
                FUN_0040ba40(auStack_110,auStack_110);
                FUN_00674898();
                FUN_0040b930();
                FUN_005ac68f(auStack_110,auStack_110,auStack_50);
                FUN_005ac436(&local_16c,auStack_bc,&local_11c);
                local_220 = fStack_170;
              }
              else {
                uVar15 = uVar15 << 0x11 ^ uVar15;
                uVar15 = uVar15 ^ uVar15 >> 0xd;
                uVar15 = uVar15 ^ uVar15 << 5;
                uVar15 = uVar15 << 0x11 ^ uVar15;
                uVar15 = uVar15 ^ uVar15 >> 0xd;
                uVar15 = uVar15 ^ uVar15 << 5;
                FUN_00674898();
                fVar22 = (float10)FUN_00564b10();
                local_1c0 = (float)fVar22;
                fVar22 = (float10)FUN_00564b10();
                local_1bc = (float)fVar22;
                local_1b8 = 0;
                FUN_00674898();
                FUN_0040ba40(local_90,&DAT_0078bcc0);
                FUN_005ac436(&local_1c0,&local_1c0,local_90);
                FUN_005ac436(&local_1cc,&local_1cc,auStack_15c);
                local_220 = fVar7;
              }
              uVar15 = uVar15 << 0x11 ^ uVar15;
              uVar15 = uVar15 ^ uVar15 >> 0xd;
              uVar15 = uVar15 ^ uVar15 << 5;
              uVar19 = uVar15 << 0x11 ^ uVar15;
              uVar19 = uVar19 ^ uVar19 >> 0xd;
              uVar19 = uVar19 ^ uVar19 << 5;
              local_1c8 = ((float)(uVar15 & 0x7fffffff) * _DAT_006cca54 * fStack_1fc - fStack_1b0) +
                          fStack_1ac;
              uVar15 = uVar19 << 0x11 ^ uVar19;
              uVar15 = uVar15 ^ uVar15 >> 0xd;
              uVar15 = uVar15 ^ uVar15 << 5;
              local_1c4 = ((float)(uVar19 & 0x7fffffff) * _DAT_006cca54 * fStack_1ec - fStack_1a4) +
                          fStack_19c;
              local_1bc = 1.0;
              local_1c0 = ((float)(uVar15 & 0x7fffffff) * _DAT_006cca54 * fVar4 - local_194) +
                          fStack_1a8;
              FUN_005ac436(&local_1c8,&local_1c8,auStack_e8);
              uVar15 = uVar15 << 0x11 ^ uVar15;
              fStack_178 = fStack_1b0;
              uVar15 = uVar15 ^ uVar15 >> 0xd;
              fStack_164 = fStack_1ac;
              uVar15 = uVar15 ^ uVar15 << 5;
              fStack_170 = fStack_1a8;
              uVar11 = FUN_00674898();
              uVar15 = uVar15 << 0x11 ^ uVar15;
              uVar15 = uVar15 ^ uVar15 >> 0xd;
              uVar15 = uVar15 ^ uVar15 << 5;
              uVar15 = uVar15 << 0x11 ^ uVar15;
              uVar15 = uVar15 ^ uVar15 >> 0xd;
              uVar15 = uVar15 ^ uVar15 << 5;
              uVar15 = uVar15 << 0x11 ^ uVar15;
              uVar15 = uVar15 ^ uVar15 >> 0xd;
              uVar15 = uVar15 ^ uVar15 << 5;
              uVar19 = uVar15 & 0x7fffffff;
              if (fVar8 != DAT_006cc7a4) {
                uVar15 = uVar15 << 0x11 ^ uVar15;
                uVar15 = uVar15 ^ uVar15 >> 0xd;
                uVar15 = uVar15 ^ uVar15 << 5;
                fVar2 = (float)(uVar15 & 0x7fffffff) * _DAT_006cca54 * fVar7 + fVar8;
                fVar10 = DAT_006cc7a4;
                if ((DAT_006cc7a4 < fVar2) && (fVar10 = fVar2, _DAT_006cc7bc < fVar2)) {
                  fVar10 = _DAT_006cc7bc;
                }
                if (*(char *)(local_174 + 0x1e) == '\0') {
                  fStack_210 = ((float)uVar19 * _DAT_006cca54 * local_1c8 + local_188) * fStack_210
                               + fVar10 * *(float *)(param_2 + 0x74);
                  FUN_00567370();
                  fStack_1fc = fStack_210;
                }
              }
              uVar13 = FUN_00674898();
              iVar1 = DAT_0073652c;
              uVar13 = uVar13 & 0xfffe;
              if (local_16c != 0) {
                uVar13 = uVar13 | (ushort)uVar15 & 1;
              }
              if (*(int *)(param_2 + 0x28) == 0) {
                if (DAT_00700eb0 < 2) {
                  DAT_0078eb98 = DAT_0078eb98 ^ 1;
                }
                else {
                  DAT_0078eb98 = 0;
                }
                if ((*(int *)(DAT_0073652c + 0x18) != *(int *)(DAT_0073652c + 0x2c)) &&
                   (DAT_0078eb98 == 0)) {
                  puVar21 = *(undefined4 **)(DAT_0073652c + 0x10);
                  iVar20 = *(int *)(DAT_0073652c + 0x18) + 1;
                  if (puVar21 == (undefined4 *)0x0) {
                    puVar21 = (undefined4 *)0x0;
                  }
                  else {
                    uVar16 = *puVar21;
                    if (*(int *)(DAT_0073652c + 0x1c) < iVar20) {
                      *(int *)(DAT_0073652c + 0x1c) = iVar20;
                    }
                    *(int *)(iVar1 + 0x18) = iVar20;
                    *(undefined4 *)(iVar1 + 0x10) = uVar16;
                  }
                  uVar14 = FUN_00674898();
                  *(undefined2 *)(puVar21 + 2) = uVar14;
                  *(ushort *)((int)puVar21 + 10) = uVar13;
                  uVar14 = FUN_00674898();
                  *(undefined2 *)(puVar21 + 3) = uVar14;
                  uVar12 = FUN_00674898();
                  *(undefined1 *)((int)puVar21 + 0xe) = uVar12;
                  puVar21[4] = fStack_178;
                  puVar21[5] = fStack_164;
                  puVar21[6] = fStack_170;
                  uVar12 = FUN_00674898();
                  *(undefined1 *)(puVar21 + 7) = uVar12;
                  uVar12 = FUN_00674898();
                  *(undefined1 *)((int)puVar21 + 0x1d) = uVar12;
                  uVar12 = FUN_00674898();
                  *(undefined1 *)((int)puVar21 + 0x1e) = uVar12;
                  *(undefined1 *)((int)puVar21 + 0x1f) = uVar11;
                  puVar5 = (undefined4 *)local_238[6];
                  *puVar5 = puVar21;
                  local_238[6] = (int)puVar21;
                  puVar21[1] = puVar5;
                  *puVar21 = local_238 + 5;
                }
              }
              uVar15 = uVar15 << 0x11 ^ uVar15;
              uVar15 = uVar15 ^ uVar15 >> 0xd;
              uVar15 = uVar15 ^ uVar15 << 5;
              fVar2 = (float)(uVar15 & 0x7fffffff) * _DAT_006cca54 * local_220 + local_1c4;
              local_228 = _DAT_006cc7b8;
              if (((DAT_006cc7a4 < fVar2) &&
                  (fVar2 = _DAT_006cc7bc / fVar2, local_228 = _DAT_006cc91c, fVar2 <= _DAT_006cc91c)
                  ) && (local_228 = fVar2, fVar2 < DAT_006cc7a4)) {
                local_228 = DAT_006cc7a4;
              }
              iVar20 = DAT_00736530;
            } while (local_228 <= local_234);
          }
          *(uint *)(param_2 + 0x24) = uVar15;
          if ((int *)local_238[5] == local_238 + 5) {
            iVar1 = *local_238;
            piVar6 = (int *)local_238[1];
            *piVar6 = iVar1;
            *(int **)(iVar1 + 4) = piVar6;
            local_238[3] = 0;
            local_238[2] = 0;
            FUN_00404a70();
            iVar1 = *(int *)(iVar20 + 0x18);
            *local_238 = *(int *)(iVar20 + 0x10);
            *(int *)(iVar20 + 0x18) = iVar1 + -1;
            *(int **)(iVar20 + 0x10) = local_238;
          }
        }
      }
      if (DAT_006cc7a4 <= param_3) {
        *(float *)(param_2 + 0x18) = local_228 - local_234;
        return;
      }
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
  }
  return;
}

