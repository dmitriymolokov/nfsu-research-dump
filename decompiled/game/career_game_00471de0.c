/* spd-match: far pct=7.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_19/attempt3_recipe */
#include "ghidra_compat.h"

void m375_vec3_mul(float *dst, float *src, void *mtx);

int __cdecl FUN_004665e0();
int __cdecl FUN_0046ea50();
int __cdecl FUN_004723a0();
int __cdecl FUN_004724b0();
int __cdecl FUN_00567370();
extern int DAT_006cc7a4;
extern int _DAT_006cc8bc;
extern void LAB_00472175(void);
extern void LAB_00472295(void);
extern void LAB_00472303(void);
extern void LAB_00472378(void);

float10 FUN_00471de0(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *unaff_EDI;
  float10 fVar6;
  undefined4 *local_198;
  undefined4 *local_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  undefined1 auStack_17c [8];
  short sStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 auStack_168 [4];
  float fStack_158;
  float fStack_154;
  float local_150 [3];
  short sStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_110;
  float fStack_f8;
  
  FUN_004665e0();
  FUN_004665e0();
  if (*(int *)(unaff_EDI + 0x138) == 0) {
    iVar3 = (**(code **)(*(int *)(unaff_EDI + 0x244) + 0xc))
                      (*(int *)(unaff_EDI + 0x244),0,local_150);
    m375_vec3_mul(&uStack_140,(float *)(unsigned int)((iVar3 + 0x10)),(void *)(unaff_EDI + 0x140));
    iVar3 = (**(code **)(*(int *)(unaff_EDI + 0x248) + 0xc))
                      (*(int *)(unaff_EDI + 0x248),0,&fStack_18c);
    m375_vec3_mul((float *)(unsigned int)(auStack_17c),(float *)(unsigned int)((iVar3 + 0x10)),(void *)(unaff_EDI + 0x1c0));
    fStack_128 = fStack_188 - fStack_158;
    fStack_124 = fStack_184 - fStack_154;
    fStack_120 = local_180 - local_150[0];
    fStack_138 = -fStack_128;
    fStack_134 = -fStack_124;
    fStack_130 = -fStack_120;
    fStack_110 = fStack_130;
    (**(code **)(*(int *)(unaff_EDI + 0x244) + 8))
              (*(int *)(unaff_EDI + 0x244),&fStack_128,auStack_168,&fStack_188,unaff_EDI + 0x140,
               unaff_EDI + 0x180,auStack_168);
    (**(code **)(*(int *)(unaff_EDI + 0x248) + 8))
              (*(int *)(unaff_EDI + 0x248),&fStack_138,&local_198,&fStack_158,unaff_EDI + 0x1c0,
               unaff_EDI + 0x200,&local_198);
    *(undefined4 *)(unaff_EDI + 0x60) = uStack_140;
    *(float *)(unsigned int)((unaff_EDI + 0x68)) = fStack_138;
    *(undefined4 *)(unaff_EDI + 100) = uStack_13c;
    *(undefined4 *)(unaff_EDI + 0xa0) = uStack_170;
    *(undefined4 *)(unaff_EDI + 0xa8) = auStack_168[0];
    *(undefined4 *)(unaff_EDI + 0xa4) = uStack_16c;
    *(int *)(unaff_EDI + 0x110) = (int)sStack_144;
    *(int *)(unaff_EDI + 0x124) = (int)sStack_174;
    *(undefined4 *)(unaff_EDI + 0x134) = 1;
    *(undefined4 *)(unaff_EDI + 0x120) = 1;
    *(undefined4 *)(unaff_EDI + 0xe0) = *(undefined4 *)(unaff_EDI + 0x60);
    *(undefined4 *)(unaff_EDI + 0xe4) = *(undefined4 *)(unaff_EDI + 100);
    *(undefined4 *)(unaff_EDI + 0xe8) = *(undefined4 *)(unaff_EDI + 0x68);
    *(undefined4 *)(unaff_EDI + 0xf0) = *(undefined4 *)(unaff_EDI + 0xa0);
    *(undefined4 *)(unaff_EDI + 0xf4) = *(undefined4 *)(unaff_EDI + 0xa4);
    *(undefined4 *)(unaff_EDI + 0xf8) = *(undefined4 *)(unaff_EDI + 0xa8);
    fStack_190 = *(float *)(unsigned int)((unaff_EDI + 0xf0)) - *(float *)(unsigned int)((unaff_EDI + 0xe0));
    fStack_18c = *(float *)(unsigned int)((unaff_EDI + 0xf4)) - *(float *)(unsigned int)((unaff_EDI + 0xe4));
    fStack_188 = *(float *)(unsigned int)((unaff_EDI + 0xf8)) - *(float *)(unsigned int)((unaff_EDI + 0xe8));
    local_198 = (undefined4 *)(unsigned int)(fStack_190 * fStack_190 + fStack_18c * fStack_18c + fStack_188 * fStack_188);
    if ((float)(unsigned int)(local_198) < _DAT_006cc8bc == ((float)(unsigned int)(local_198) == _DAT_006cc8bc)) {
      *(undefined4 *)(unaff_EDI + 0x138) = 1;
      fStack_f8 = fStack_188;
LAB_00472175:
      local_194 = local_198;
      FUN_004723a0();
      do {
        fStack_120 = -fStack_190;
        fStack_11c = -fStack_18c;
        fStack_118 = -fStack_188;
        fStack_f8 = fStack_118;
        (**(code **)(*(int *)(unaff_EDI + 0x244) + 8))
                  (*(int *)(unaff_EDI + 0x244),&fStack_190,local_150,&uStack_170,unaff_EDI + 0x140,
                   unaff_EDI + 0x180,local_150);
        (**(code **)(*(int *)(unaff_EDI + 0x248) + 8))
                  (*(int *)(unaff_EDI + 0x248),&fStack_120,&local_180,&uStack_140,unaff_EDI + 0x1c0,
                   unaff_EDI + 0x200,&local_180);
        iVar3 = 0;
        if (0 < *(int *)(unaff_EDI + 0x120)) {
          do {
            if (*(int *)(unaff_EDI + 0x110 + iVar3 * 4) == (int)sStack_144) {
              bVar2 = false;
              goto LAB_00472295;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(unaff_EDI + 0x120));
        }
        *(int *)(unaff_EDI + 0x110 + *(int *)(unaff_EDI + 0x120) * 4) = (int)sStack_144;
        puVar4 = (undefined4 *)((*(int *)(unaff_EDI + 0x120) + 6) * 0x10 + unaff_EDI);
        puVar4[1] = uStack_13c;
        *puVar4 = uStack_140;
        bVar2 = true;
        puVar4[2] = fStack_138;
        *(int *)(unaff_EDI + 0x120) = *(int *)(unaff_EDI + 0x120) + 1;
LAB_00472295:
        iVar3 = 0;
        if (0 < *(int *)(unaff_EDI + 0x134)) {
          do {
            if (*(int *)(unaff_EDI + 0x124 + iVar3 * 4) == (int)sStack_174) {
              bVar1 = false;
              goto LAB_00472303;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(unaff_EDI + 0x134));
        }
        *(int *)(unaff_EDI + 0x124 + *(int *)(unaff_EDI + 0x134) * 4) = (int)sStack_174;
        puVar4 = (undefined4 *)((*(int *)(unaff_EDI + 0x134) + 10) * 0x10 + unaff_EDI);
        puVar4[1] = uStack_16c;
        *puVar4 = uStack_170;
        puVar4[2] = auStack_168[0];
        *(int *)(unaff_EDI + 0x134) = *(int *)(unaff_EDI + 0x134) + 1;
        bVar1 = true;
LAB_00472303:
        if (!bVar1 && !bVar2) goto LAB_00472378;
        fVar6 = (float10)FUN_0046ea50();
        local_198 = (undefined4 *)(unsigned int)(float)fVar6;
        if (fVar6 == (float10)(unsigned int)(DAT_006cc7a4)) break;
        if ((float)(unsigned int)(local_194) <= (float)(unsigned int)(local_198)) {
          local_198 = local_194;
          FUN_004724b0();
LAB_00472378:
          FUN_00567370();
          return SQRT((float10)(float)(unsigned int)(local_198));
        }
        local_194 = local_198;
        FUN_004724b0();
      } while( true );
    }
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(unaff_EDI + 0x120)) {
      local_198 = (undefined4 *)(unaff_EDI + 0x110);
      puVar4 = (undefined4 *)(unaff_EDI + 0x60);
      do {
        (**(code **)(*(int *)(unaff_EDI + 0x244) + 0xc))
                  (*(int *)(unaff_EDI + 0x244),*local_198,local_150);
        if (*(int *)(*(int *)(unaff_EDI + 0x244) + 0x10) == 2) {
          *puVar4 = uStack_140;
          puVar4[1] = uStack_13c;
          puVar4[2] = fStack_138;
        }
        else {
          FUN_00471de0(puVar4,&uStack_140,unaff_EDI + 0x140);
        }
        iVar3 = iVar3 + 1;
        local_198 = local_198 + 1;
        puVar4 = puVar4 + 4;
      } while (iVar3 < *(int *)(unaff_EDI + 0x120));
    }
    local_194 = (undefined4 *)0x0;
    if (0 < *(int *)(unaff_EDI + 0x134)) {
      puVar4 = (undefined4 *)(unaff_EDI + 0xa0);
      puVar5 = (undefined4 *)(unaff_EDI + 0x124);
      do {
        (**(code **)(*(int *)(unaff_EDI + 0x248) + 0xc))
                  (*(int *)(unaff_EDI + 0x248),*puVar5,&local_180);
        if (*(int *)(*(int *)(unaff_EDI + 0x248) + 0x10) == 2) {
          *puVar4 = uStack_170;
          puVar4[1] = uStack_16c;
          puVar4[2] = auStack_168[0];
        }
        else {
          FUN_00471de0(puVar4,&uStack_170,unaff_EDI + 0x1c0);
        }
        local_194 = (undefined4 *)(unsigned int)(((int)local_194 + 1));
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 4;
      } while ((int)local_194 < *(int *)(unaff_EDI + 0x134));
    }
    fVar6 = (float10)FUN_0046ea50();
    local_198 = (undefined4 *)(unsigned int)(float)fVar6;
    if (fVar6 < (float10)(unsigned int)(_DAT_006cc8bc) == (fVar6 == (float10)(unsigned int)(_DAT_006cc8bc))) goto LAB_00472175;
  }
  return (float10)(unsigned int)(DAT_006cc7a4);
}
