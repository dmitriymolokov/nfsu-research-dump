/* spd-match: far pct=5.45 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_uint */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_0040a880();
int __cdecl FUN_0040e6d0();
int __cdecl FUN_0040f3d0();
int __cdecl FUN_00410400();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_00718738;
extern int DAT_007187b0;
extern int DAT_007187b4;
extern int DAT_0073636c;
extern int DAT_0078bcc0;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8e4;
extern int _DAT_006cc974;
extern void LAB_004042e1(void);
extern void LAB_00404987(void);
extern char stack0xfffffe10;
int unaff_EDI;

void FUN_00404110(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  float unaff_EDI;
  float fVar14;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  float *pfStack_240;
  float *pfStack_23c;
  undefined4 uStack_238;
  float **ppfStack_234;
  float *pfStack_230;
  int *piStack_22c;
  float *pfStack_228;
  float *pfStack_224;
  undefined4 *puStack_220;
  float *pfStack_21c;
  float *pfStack_218;
  int *piStack_214;
  float *pfStack_210;
  float fStack_20c;
  float *pfStack_208;
  float *pfStack_204;
  undefined *puStack_200;
  float *pfStack_1fc;
  undefined4 *puStack_1f8;
  uint uStack_1f4;
  undefined4 *puVar15;
  float fVar16;
  float fStack_1e4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  int iStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  undefined4 local_194;
  float fStack_184;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  int iStack_170;
  int iStack_16c;
  undefined4 *puStack_168;
  float local_164;
  undefined4 *puStack_160;
  undefined4 *puStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  uint uStack_148;
  undefined4 *local_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float *local_130;
  undefined4 local_12c;
  float local_128;
  undefined4 local_120;
  float local_11c;
  undefined4 local_118;
  undefined1 auStack_100 [32];
  float *local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  float local_cc;
  float local_c0;
  undefined4 local_bc [13];
  int aiStack_88 [33];
  
  if (*(int *)(param_2 + 4) == 1) {
    param_1[0x16] = 0;
    param_1[0x15] = 0;
  }
  piVar7 = (int *)*param_1;
  if (piVar7 != param_1) {
    do {
      if (piVar7 == (int *)0x0) break;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != param_1);
    local_144 = *(undefined4 **)(unsigned int)((param_2 + 0x40));
    local_194 = local_144[0xa0];
    uStack_1f4 = 0x40416c;
    FUN_00401cd0();
    pfVar6 = DAT_0073636c;
    local_128 = local_c0;
    local_118 = local_bc[0];
    local_130 = local_e0;
    local_12c = local_d0;
    local_120 = local_dc;
    local_11c = local_cc;
    if (*(char *)((int)param_1 + 0x4d) == '\0') {
      local_164 = 0.0;
    }
    else {
      local_164 = (float)(unsigned int)(param_1[0x10]);
    }
    uStack_1f4 = 0;
    puStack_1f8 = (undefined4 *)0xe;
    pfStack_1fc = DAT_0073636c;
    local_198 = 0.0;
    puStack_200 = (undefined *)0x4041f0;
    (**(code **)((int)*pfVar6 + 0xe4))();
    pcVar12 = "XETT_RoadSDr_SprayA";
    iStack_16c = -1;
    uVar9 = 0x58;
    do {
      iStack_16c = iStack_16c * 0x21 + uVar9;
      pbVar1 = (byte *)(pcVar12 + 1);
      uVar9 = (uint)*pbVar1;
      pcVar12 = pcVar12 + 1;
    } while (*pbVar1 != 0);
    puVar15 = (undefined4 *)(unsigned int)(*param_1);
    puStack_200 = (undefined *)0x404227;
    puStack_15c = (undefined4 *)FUN_0040a880();
    if (puVar15 != puStack_15c) {
      do {
        iVar8 = puVar15[2];
        local_144 = (undefined4 *)*puVar15;
        fStack_1c0 = 0.0;
        if (*(int *)(iVar8 + 8) == iStack_16c) goto LAB_00404987;
        fVar16 = (float)puVar15[4];
        if (fVar16 == 0.0) goto LAB_004042e1;
        iVar13 = *(int *)(param_2 + 4);
        if ((1 << ((byte)iVar13 & 0x1f) & *(uint *)(unsigned int)(((int)fVar16 + 0x534))) == 0) goto LAB_00404987;
        switch(*(undefined4 *)(iVar8 + 0x58)) {
        case 1:
        case 5:
        case 6:
          if ((fStack_1a0 != fVar16) || (*(int *)((int)fStack_150 + 0x284) == 0))
          goto switchD_00404296_caseD_2;
          break;
        case 9:
        case 0xb:
        case 0x1a:
          if (iVar13 != 3) {
joined_r0x004042aa:
            if (fStack_1a0 == fVar16) break;
          }
        default:
switchD_00404296_caseD_2:
LAB_004042e1:
          iVar13 = *(int *)(iVar8 + 0x14);
          fStack_140 = _DAT_006cc7bc / *(float *)(iVar8 + 0x38);
          if ((iVar13 != 0) && ((iStack_170 == 0 || (puVar15[3] == iStack_170)))) {
            puStack_200 = (undefined *)0x404320;
            FUN_0040e6d0();
            puStack_200 = &DAT_0078bcc0;
            pfStack_204 = (float *)0x404330;
            FUN_00410400();
            pfStack_208 = (float *)0x40433a;
            pfStack_204 = (float *)iVar13;
            FUN_0040f3d0();
            puStack_200 = (undefined *)0x40434f;
            FUN_00401cd0();
            puStack_200 = (undefined *)0x404361;
            FUN_00401cd0();
            bVar2 = *(byte *)(iVar8 + 0x19);
            puStack_160 = (undefined4 *)(int)(char)bVar2;
            puStack_200 = (undefined *)0x2000;
            iVar13 = 0;
            uStack_148 = ~(-1 << (bVar2 & 0x1f));
            local_164 = (float)~(-1 << (*(byte *)(iVar8 + 0x1a) & 0x1f));
            puStack_168 = (undefined4 *)(unsigned int)((_DAT_006cc7bc / (float)(1 << (bVar2 & 0x1f))));
            pfStack_210 = (float *)(&DAT_00718738)[DAT_007187b4];
            pfStack_204 = (float *)&stack0xfffffe10;
            pfStack_208 = (float *)0x0;
            fStack_20c = 0.0;
            fVar16 = _DAT_006cc7bc / (float)(1 << (*(byte *)(iVar8 + 0x1a) & 0x1f));
            piStack_214 = (int *)0x4043ea;
            (**(code **)((int)*pfStack_210 + 0x2c))();
            puStack_1f8 = *(undefined4 **)((int)puStack_200 + 0x14);
            puStack_168 = (undefined4 *)((int)puStack_200 + 0x14);
            if (puStack_1f8 != puStack_168) {
              do {
                puStack_160 = (undefined4 *)*puStack_1f8;
                pfStack_218 = &fStack_1d0;
                pfStack_21c = &local_c0;
                puStack_200 = (undefined *)(unsigned int)(_DAT_006cc7bc -
                              (float)(int)*(short *)(puStack_1f8 + 2) * _DAT_006cc8e4 * fStack_154);
                fStack_1cc = (float)puStack_1f8[5];
                fStack_1c8 = (float)puStack_1f8[6];
                fStack_1d0 = (float)puStack_1f8[4];
                piStack_214 = (int *)auStack_100;
                fStack_1c4 = 1.0;
                puStack_220 = (undefined4 *)0x404475;
                ;
                puStack_200 = (undefined *)(unsigned int)(fStack_20c * fStack_20c);
                puStack_220 = local_bc;
                pfStack_224 = &fStack_13c;
                fStack_134 = fStack_20c;
                fStack_178 = fStack_20c * (float)(unsigned int)(puStack_200);
                pfStack_228 = &local_11c;
                local_130 = (float *)0x3f800000;
                piStack_22c = (int *)0x4044cf;
                fStack_13c = fStack_178;
                fStack_138 = (float)(unsigned int)(puStack_200);
                ;
                fStack_1c0 = local_128 * _DAT_006cc7dc;
                fStack_138 = fStack_184;
                fStack_1b8 = (float)(unsigned int)(puStack_168) * fStack_1c0;
                piStack_22c = aiStack_88;
                fStack_134 = fStack_20c;
                pfStack_230 = &fStack_138;
                local_130 = pfStack_218;
                fStack_1b4 = local_164 * fStack_1c0;
                ppfStack_234 = &pfStack_208;
                local_12c = 0x3f800000;
                fStack_1b0 = (float)(unsigned int)(puStack_160) * fStack_1c0;
                fStack_1c8 = fStack_158 * fStack_1c0;
                fStack_1c4 = fStack_154 * fStack_1c0;
                fStack_1c0 = fStack_1c0 * fStack_150;
                uStack_238 = 0x404574;
                ;
                if (unaff_EDI < DAT_006cc7a4) {
                  unaff_EDI = 0.0;
                }
                if ((float)(unsigned int)(puVar15) < DAT_006cc7a4) {
                  puVar15 = (undefined4 *)0x0;
                }
                if (fVar16 < DAT_006cc7a4) {
                  fVar16 = 0.0;
                }
                if (fStack_1e4 < DAT_006cc7a4) {
                  fStack_1e4 = 0.0;
                }
                if (_DAT_006cc974 < unaff_EDI) {
                  unaff_EDI = 255.0;
                }
                if (_DAT_006cc974 < (float)(unsigned int)(puVar15)) {
                  puVar15 = (undefined4 *)0x437f0000;
                }
                if (_DAT_006cc974 < fVar16) {
                  fVar16 = 255.0;
                }
                if (_DAT_006cc974 < fStack_1e4) {
                  fStack_1e4 = 255.0;
                }
                piStack_214 = (int *)0x40464b;
                iVar8 = FUN_00674898();
                if (iVar8 != 0) {
                  piStack_214 = (int *)0x404661;
                  uVar9 = FUN_00674898();
                  piStack_214 = (int *)0x40466f;
                  uVar10 = FUN_00674898();
                  piStack_214 = (int *)0x40467d;
                  uVar11 = FUN_00674898();
                  fVar14 = (float)(((iVar8 << 8 | uVar9) << 8 | uVar10) << 8 | uVar11);
                  fVar3 = (float)((uint)*(byte *)((int)puStack_1f8 + 0x1f) & (uint)puStack_15c) *
                          fStack_17c;
                  uStack_1f4 = (int)(uint)*(byte *)((int)puStack_1f8 + 0x1f) >>
                               ((byte)uStack_174 & 0x1f) & (uint)fStack_178;
                  fVar5 = (float)(int)uStack_1f4 * (float)(unsigned int)(pfStack_1fc);
                  fVar4 = fVar3 + fStack_17c;
                  puStack_1f8 = (undefined4 *)(unsigned int)((fVar5 + (float)(unsigned int)(pfStack_1fc)));
                  *pfStack_204 = fStack_1b0 + fStack_1a0 + fStack_1d0;
                  pfStack_204[1] = fStack_1ac + fStack_19c + fStack_1cc;
                  pfStack_204[2] = fStack_1a8 + local_198 + fStack_1c8;
                  pfStack_204[3] = fVar14;
                  pfStack_204[4] = fVar3;
                  pfStack_204[5] = fVar5;
                  pfStack_204[6] = (fStack_1d0 - fStack_1a0) + fStack_1b0;
                  pfStack_204[7] = (fStack_1cc - fStack_19c) + fStack_1ac;
                  pfStack_204[8] = (fStack_1c8 - local_198) + fStack_1a8;
                  pfStack_204[9] = fVar14;
                  pfStack_204[10] = fVar4;
                  pfStack_204[0xb] = fVar5;
                  pfStack_204[0xc] = (fStack_1d0 - fStack_1a0) - fStack_1b0;
                  pfStack_204[0xd] = (fStack_1cc - fStack_19c) - fStack_1ac;
                  pfStack_204[0xe] = (fStack_1c8 - local_198) - fStack_1a8;
                  pfStack_204[0xf] = fVar14;
                  pfStack_204[0x10] = fVar4;
                  pfStack_204[0x11] = (float)(unsigned int)(puStack_1f8);
                  pfStack_204[0x12] = (fStack_1a0 + fStack_1d0) - fStack_1b0;
                  pfStack_204[0x13] = (fStack_19c + fStack_1cc) - fStack_1ac;
                  pfStack_204[0x14] = (local_198 + fStack_1c8) - fStack_1a8;
                  pfStack_204[0x15] = fVar14;
                  pfStack_204[0x16] = fVar3;
                  pfStack_204[0x17] = (float)(unsigned int)(puStack_1f8);
                  pfStack_204 = pfStack_204 + 0x18;
                  iVar13 = iVar13 + 1;
                  if (iVar13 == 300) {
                    piStack_214 = (int *)(&DAT_00718738)[DAT_007187b4];
                    pfStack_218 = (float *)0x404856;
                    (**(code **)(*piStack_214 + 0x30))();
                    puStack_220 = (undefined4 *)(&DAT_00718738)[DAT_007187b4];
                    pfStack_218 = (float *)0x18;
                    pfStack_21c = (float *)0x0;
                    pfStack_224 = (float *)0x0;
                    pfStack_228 = pfVar6;
                    piStack_22c = (int *)0x404872;
                    (**(code **)((int)*pfVar6 + 400))();
                    piStack_22c = DAT_007187b0;
                    pfStack_230 = pfVar6;
                    ppfStack_234 = (float **)0x404881;
                    (**(code **)((int)*pfVar6 + 0x1a0))();
                    ppfStack_234 = (float **)0x1;
                    uStack_238 = 0x1b;
                    pfStack_23c = pfVar6;
                    pfStack_240 = (float *)0x40488e;
                    (**(code **)((int)*pfVar6 + 0xe4))();
                    pfStack_240 = (float *)0x258;
                    uStack_244 = 0;
                    uStack_248 = 0x4b0;
                    uStack_24c = 0;
                    (**(code **)((int)*pfVar6 + 0x148))(pfVar6,4,0);
                    DAT_007187b4 = (DAT_007187b4 + 1) % 0x1e;
                    (**(code **)(*(int *)(&DAT_00718738)[DAT_007187b4] + 0x2c))
                              ((int *)(&DAT_00718738)[DAT_007187b4],0,0,&uStack_24c,0);
                    iVar13 = 0;
                  }
                }
                puStack_1f8 = puStack_160;
              } while (puStack_160 != puStack_168);
            }
            piStack_214 = (int *)(&DAT_00718738)[DAT_007187b4];
            pfStack_218 = (float *)0x404906;
            (**(code **)(*piStack_214 + 0x30))();
            fVar16 = fStack_1c0;
            if (iVar13 != 0) {
              pfStack_208 = (float *)(&DAT_00718738)[DAT_007187b4];
              puStack_200 = (undefined *)0x18;
              pfStack_204 = (float *)0x0;
              fStack_20c = 0.0;
              pfStack_210 = pfVar6;
              piStack_214 = (int *)0x404926;
              (**(code **)((int)*pfVar6 + 400))();
              piStack_214 = DAT_007187b0;
              pfStack_218 = pfVar6;
              pfStack_21c = (float *)0x404935;
              (**(code **)((int)*pfVar6 + 0x1a0))();
              pfStack_21c = (float *)0x1;
              puStack_220 = (undefined4 *)0x1b;
              pfStack_224 = pfVar6;
              pfStack_228 = (float *)0x404942;
              (**(code **)((int)*pfVar6 + 0xe4))();
              pfStack_228 = (float *)(iVar13 * 2);
              piStack_22c = (int *)0x0;
              pfStack_230 = (float *)(iVar13 * 4);
              ppfStack_234 = (float **)0x0;
              uStack_238 = 0;
              pfStack_23c = (float *)0x4;
              pfStack_240 = pfVar6;
              uStack_244 = 0x40495f;
              (**(code **)((int)*pfVar6 + 0x148))();
              DAT_007187b4 = (DAT_007187b4 + 1) % 0x1e;
              fVar16 = (float)((int)fStack_1c0 + iVar13);
            }
            if (fVar16 != 0.0) {
              iStack_1a4 = iStack_1a4 + (int)fVar16;
            }
          }
          break;
        case 10:
          if (iVar13 != 3) goto joined_r0x004042aa;
        }
LAB_00404987:
        puVar15 = local_144;
      } while (local_144 != puStack_15c);
    }
    puStack_200 = (undefined *)0x1;
    pfStack_204 = (float *)0xe;
    param_1[0x15] = param_1[0x15] + iStack_1a4;
    pfStack_208 = pfVar6;
    fStack_20c = 5.903921e-39;
    (**(code **)((int)*pfVar6 + 0xe4))();
  }
  return;
}
