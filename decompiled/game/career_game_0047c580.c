/* spd-match: far pct=5.56 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_9/buckets/p09_game_c/attempt2_recipe */
#include "ghidra_compat.h"

#ifndef SUB42
#define SUB42(x,n) ((unsigned int)((unsigned __int64)(x) >> ((n) * 8)))
#endif

int __cdecl FUN_00401cd0();
int __cdecl FUN_00426110();
int __cdecl FUN_00427c50();
int __cdecl FUN_00443a10();
int __cdecl FUN_00465150();
int __cdecl FUN_0047b290();
int __cdecl FUN_0047b3d0();
int __cdecl FUN_00564db0();
int __cdecl FUN_005abda2();
int __cdecl FUN_005ac68f();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_006ffdbc;
extern int DAT_007361f8;
extern int DAT_007372b0;
extern int DAT_007798f0;
extern int _DAT_006b7058;
extern int _DAT_006cc7bc;
extern int _DAT_006cc934;
extern int _DAT_006cc978;
extern int _DAT_006cca00;
extern char stack0xffffff18;

void FUN_0047c580(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  ushort uVar8;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  char *pcVar12;
  float *pfStack_118;
  undefined1 *puVar13;
  float *pfVar14;
  uint uVar15;
  float fStack_f4;
  int *local_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  int iStack_ac;
  float afStack_94 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 auStack_78 [3];
  undefined1 auStack_6c [4];
  float fStack_68;
  float afStack_4c [18];
  
  if (*(int *)(param_1 + 0xe0) != 0) {
    local_d4 = &DAT_007798f0;
    do {
      iVar6 = *local_d4;
      iVar9 = local_d4[1];
      if (((iVar6 != 0) && (iVar9 != 0)) && (-1 < local_d4[5])) {
        fVar7 = ((int)_DAT_006cc7bc) / ((int)DAT_006ffdbc);
        fVar1 = *(float *)(unsigned int)(iVar9 + 0x60);
        fVar2 = *(float *)(unsigned int)(iVar9 + 0x5c);
        fVar3 = *(float *)(unsigned int)(iVar9 + 100);
        fVar4 = *(float *)(unsigned int)(iVar9 + 0x5c);
        if (fVar7 * *(float *)(unsigned int)(iVar6 + 100) * *(float *)(unsigned int)(iVar6 + 0x5c) + param_2 <=
            fVar7 * *(float *)(unsigned int)(iVar6 + 0x60) * *(float *)(unsigned int)(iVar6 + 0x5c)) {
          fStack_f4 = param_2;
          FUN_0047b290();
          fStack_f4 = 6.591446e-39;
          FUN_0047b3d0();
        }
        else {
          *(undefined4 *)(iVar6 + 100) = *(undefined4 *)(iVar6 + 0x60);
          fStack_f4 = 6.591407e-39;
          FUN_0047b3d0();
        }
        if (fVar7 * fVar3 * fVar4 + param_2 <= fVar7 * fVar1 * fVar2) {
          fStack_f4 = param_2;
          FUN_0047b290();
        }
        else {
          *(undefined4 *)(iVar9 + 100) = *(undefined4 *)(iVar9 + 0x60);
        }
        fStack_f4 = 6.591508e-39;
        FUN_0047b3d0();
        fStack_f4 = 6.591529e-39;
        FUN_00401cd0();
        fStack_f4 = (float)(param_1 + 0x60);
        FUN_005ac68f(&local_b0,&local_b0);
        FUN_005ac68f();
        iVar6 = *(int *)(((int)(DAT_007361f8)) + 0x28 + local_d4[5] * 4);
        FUN_00426110();
        iVar9 = 0;
        puVar11 = (undefined4 *)(iVar6 + 0x300);
        do {
          auStack_78[iVar9] = *puVar11;
          iVar9 = iVar9 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar9 < 4);
        fStack_f4 = (float)FUN_00564db0(uStack_c8,uStack_c4);
        FUN_00427c50(&stack0xffffff18,0,fStack_f4);
        FUN_00443a10(&DAT_007372b0,iVar6 + 0x60);
        (**(code **)(**(int **)(iVar6 + 0x2c) + 0x2c))(1);
        (**(code **)(**(int **)(iVar6 + 0x2c) + 0x30))();
        *(undefined4 *)(iVar6 + 0x884) = 0;
        FUN_00401cd0();
        uVar15 = param_1 + 0x60;
        puVar13 = auStack_6c;
        FUN_005ac68f();
        FUN_005ac68f(auStack_78,auStack_78,param_1 + 0xa0);
        uVar8 = FUN_00564db0(uStack_84,uStack_80);
        for (fVar1 = ((float)uVar8 * ((int)_DAT_006cca00) - (float)(uVar15 & 0xffff) * ((int)_DAT_006cca00)) * ((int)_DAT_006b7058); _DAT_006cc934 < fVar1; fVar1 = fVar1 - _DAT_006cc934) {
        }
        for (; fVar1 < DAT_006cc7a4; fVar1 = fVar1 + _DAT_006cc934) {
        }
        iVar9 = FUN_00674898();
        fVar1 = DAT_006cc7a4;
        *(short *)(iVar6 + 0x3b6) =
             (short)((ulonglong)((longlong)iVar9 * 0xb60b60b7) >> 0x28) -
             ((short)(char)((char)(iVar9 / 0x1680000) + (char)(iVar9 >> 0x1f)) >> 0xf);
        if (((iStack_ac != 0) && (puVar13 == (undefined1 *)0x0)) && (DAT_006cc7a4 < param_2)) {
          fVar1 = local_b0 - (float)(param_1 + 0xa0);
          fVar1 = SQRT((fStack_b4 - (float)(unsigned int)&fStack_bc) * (fStack_b4 - (float)(unsigned int)&fStack_bc) +
                       fVar1 * fVar1);
        }
        pfVar14 = afStack_94;
        pfStack_118 = afStack_4c;
        pcVar12 = (char *)(iVar6 + 0x350);
        puVar11 = (undefined4 *)(iVar6 + 0x374);
        pfVar10 = (float *)(unsigned int)(iVar6 + 0x300);
        iVar9 = 4;
        do {
          fVar2 = *pfStack_118 * ((int)_DAT_006cc978);
          pfVar10[-4] = 0.0;
          pfVar10[0x10] = 0.0;
          *pfVar10 = (fVar1 / fVar2) * ((int)(_DAT_006cc978)) + *pfVar14;
          cVar5 = *pcVar12;
          *pcVar12 = '\x01';
          if (cVar5 == '\0') {
            *(int *)(iVar6 + 0x3cc) = *(int *)(iVar6 + 0x3cc) + 1;
          }
          pfVar10[0x15] = 1.4013e-45;
          if ((int)pfVar10[0x19] < 1) {
            pfVar10[0x19] = 1.4013e-45;
          }
          *puVar11 = 0;
          puVar11[1] = 0;
          pfVar10[0x25] = 0.0;
          pfVar10[4] = 0.0;
          *(undefined4 *)(iVar6 + 0x330) = 0;
          *(undefined4 *)(iVar6 + 0x334) = 0;
          *(undefined4 *)(iVar6 + 0x338) = 0;
          *(undefined4 *)(iVar6 + 0x33c) = 0;
          pfVar14 = pfVar14 + 1;
          pfStack_118 = pfStack_118 + 0xc;
          pfVar10 = pfVar10 + 1;
          pcVar12 = pcVar12 + 1;
          puVar11 = puVar11 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        iVar9 = 0;
        do {
          FUN_00465150((undefined4 *)(iVar6 + 0x40));
          iVar9 = iVar9 + 1;
        } while (iVar9 < 4);
        FUN_005abda2(&fStack_f4,*(undefined4 *)(iVar6 + 0x40),iVar6 + 0x90);
        fStack_68 = *(float *)(unsigned int)(iVar6 + 0x68) - fStack_b8;
        *(float *)(unsigned int)(iVar6 + 0x50) = *(float *)(unsigned int)(iVar6 + 0x60) - fStack_c0;
        *(float *)(unsigned int)(iVar6 + 0x58) = fStack_68;
        *(float *)(unsigned int)(iVar6 + 0x54) = *(float *)(unsigned int)(iVar6 + 100) - fStack_bc;
        local_d4[2] = iStack_d0;
        local_d4[3] = iStack_cc;
        local_d4[4] = 1;
      }
      local_d4 = local_d4 + 6;
    } while ((int)local_d4 < 0x779950);
  }
  return;
}
