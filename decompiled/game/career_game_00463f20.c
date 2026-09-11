/* spd-match: far pct=4.72 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_9/buckets/p09_game_c/attempt2_recipe */
#include "ghidra_compat.h"

#ifndef SUB42
#define SUB42(x,n) ((unsigned int)((unsigned __int64)(x) >> ((n) * 8)))
#endif

int __cdecl FUN_00421400();
int __cdecl FUN_004278d0();
int __cdecl FUN_00427a30();
int __cdecl FUN_00463b30();
int __cdecl FUN_00463bc0();
int __cdecl FUN_00463d50();
int __cdecl FUN_004645d0();
int __cdecl FUN_00464660();
int __cdecl FUN_004646d0();
int __cdecl FUN_00564db0();
int __cdecl FUN_00567370();
int __cdecl FUN_005673e0();
int __cdecl FUN_00584270();
int __cdecl FUN_00586bb0();
int __cdecl FUN_00587e90();
int __cdecl FUN_00593ec0();
int __cdecl FUN_005abda2();
int __cdecl FUN_00674898();
extern int DAT_006b72f4;
extern int DAT_006cc7a4;
extern int _DAT_006b72fc;
extern int _DAT_006b7304;
extern int _DAT_006b730c;
extern int _DAT_006b7310;
extern int _DAT_006b7314;
extern int _DAT_006b7318;
extern int _DAT_006b731c;
extern int _DAT_006b7330;
extern int _DAT_006b7334;
extern int _DAT_006b7338;
extern int _DAT_006cc7a8;
extern int _DAT_006cc7bc;
extern int _DAT_006ccab0;
extern int _DAT_006ccd88;

float10  FUN_00463f20(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  float *pfVar12;
  float unaff_EDI;
  int iVar13;
  float10 fVar14;
  undefined4 uVar15;
  int *local_80;
  float *local_7c;
  short sStack_78;
  float *local_74;
  int local_70;
  float fStack_5c;
  float fStack_58;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(ushort *)(*(int *)(param_1 + 0x14) + 0x1e) < 2) {
    FUN_00463b30();
  }
  iVar13 = *(int *)(param_1 + 8);
  local_1c = *(undefined4 *)(iVar13 + 100);
  local_20 = *(undefined4 *)(iVar13 + 0x60);
  local_18 = *(undefined4 *)(iVar13 + 0x68);
  fVar14 = (float10)FUN_00463d50(DAT_006b72f4);
  if ((float10)((int)_DAT_006b72fc) < fVar14) {
    uVar11 = FUN_00674898();
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x2c) + 0x424) = uVar11;
  }
  fVar4 = param_2 + *(float *)(unsigned int)(param_1 + 0xc);
  *(float *)(unsigned int)(param_1 + 0xc) = fVar4;
  fVar7 = (fVar4 * *(float *)(unsigned int)(param_1 + 0x24) + *(float *)(unsigned int)(param_1 + 0x20)) /
          *(float *)(unsigned int)(param_1 + 0x10);
  FUN_00464660(fVar4 + _DAT_006b7304);
  pfVar12 = *(float **)(param_1 + 0x28);
  pfVar12[2] = local_50;
  if (local_50 != *pfVar12) {
    *(undefined2 *)(pfVar12 + 0xb) = 2;
  }
  pfVar12[0xe] = local_4c;
  if (local_4c != pfVar12[0xc]) {
    *(undefined2 *)(pfVar12 + 0x17) = 2;
  }
  FUN_00593ec0(param_2,0,0);
  FUN_00593ec0(param_2,0,0);
  fVar1 = ((int)(_DAT_006b7310)) + *(float *)(unsigned int)(param_1 + 0xc);
  fVar4 = **(float **)(param_1 + 0x28);
  fVar5 = (*(float **)(param_1 + 0x28))[0xc];
  FUN_00464660(fVar1);
  fVar2 = local_2c - local_28 * ((int)DAT_006cc7a4);
  fVar3 = local_28 * ((int)DAT_006cc7a4) - local_30;
  fVar8 = local_30 * ((int)DAT_006cc7a4);
  fVar9 = local_2c * ((int)DAT_006cc7a4);
  FUN_00567370();
  FUN_004646d0(fVar1);
  FUN_00584270(local_2c * fVar3 + local_28 * (fVar8 - fVar9) + fVar2 * local_30);
  iVar6 = *(int *)(param_1 + 0x18);
  fVar14 = (float10)FUN_00463bc0(*(float *)(unsigned int)(*(int *)(param_1 + 0x30) + 0xc) * ((int)(_DAT_006b731c)) +
                                 (*(float *)(unsigned int)(iVar6 + 0x14) + *(float *)(unsigned int)(iVar6 + 0x14) +
                                 (*(float *)(unsigned int)(iVar6 + 0x20) / *(float *)(unsigned int)(iVar6 + 0x24)) *
                                 *(float *)(unsigned int)(iVar6 + 0x10) * ((int)_DAT_006cc7a8)) * ((int)_DAT_006b730c));
  pfVar12 = *(float **)(param_1 + 0x2c);
  local_2c = ((int)_DAT_006b7318) * (float)fVar14 * fVar7;
  fVar2 = fVar2 * local_2c;
  local_2c = fVar3 * local_2c;
  pfVar12[2] = fVar2;
  if (fVar2 != *pfVar12) {
    *(undefined2 *)(pfVar12 + 0xb) = 2;
  }
  pfVar12[0xe] = local_2c;
  if (local_2c != pfVar12[0xc]) {
    *(undefined2 *)(pfVar12 + 0x17) = 2;
  }
  FUN_00593ec0(param_2,0,0);
  FUN_00593ec0(param_2,0,0);
  fVar4 = **(float **)(param_1 + 0x2c) + fVar4;
  fVar5 = (*(float **)(param_1 + 0x2c))[0xc] + fVar5;
  uVar10 = FUN_00564db0(fVar4,fVar5);
  *(undefined2 *)(iVar13 + 0x3b4) = uVar10;
  FUN_00464660(*(undefined4 *)(param_1 + 0xc));
  fVar1 = local_2c - local_28 * ((int)DAT_006cc7a4);
  fVar2 = local_28 * ((int)DAT_006cc7a4) - local_30;
  fVar3 = local_30 * ((int)DAT_006cc7a4) - local_2c * ((int)DAT_006cc7a4);
  FUN_00567370();
  fVar8 = ((int)_DAT_006b7314) * (float)fVar14;
  pfVar12 = *(float **)(param_1 + 0x18);
  fVar9 = ((int)_DAT_006b7330) * fVar7;
  fVar7 = ((int)_DAT_006b7334) * fVar7;
  pfVar12[2] = fVar8;
  if (fVar8 != *pfVar12) {
    *(undefined2 *)(pfVar12 + 0xb) = 2;
  }
  FUN_00593ec0(param_2,fVar9,fVar7);
  fVar7 = **(float **)(param_1 + 0x18);
  FUN_004645d0(*(undefined4 *)(param_1 + 0xc));
  *(float *)(unsigned int)(iVar13 + 0x60) = fVar1 * fVar7 + fVar4;
  *(float *)(unsigned int)(iVar13 + 0x68) = fVar3 * fVar7 + local_48;
  *(float *)(unsigned int)(iVar13 + 100) = fVar2 * fVar7 + fVar5;
  FUN_004278d0();
  FUN_005abda2(&local_30,*(undefined4 *)(iVar13 + 0x40),iVar13 + 0x90);
  *(float *)(unsigned int)(iVar13 + 0x58) = *(float *)(unsigned int)(iVar13 + 0x68) - fStack_34;
  *(float *)(unsigned int)(iVar13 + 0x50) = *(float *)(unsigned int)(iVar13 + 0x60) - fVar2;
  *(float *)(unsigned int)(iVar13 + 0x54) = *(float *)(unsigned int)(iVar13 + 100) - fVar3;
  *(undefined4 *)(iVar13 + 0xd0) = 0;
  fVar4 = _DAT_006cc7bc;
  *(undefined4 *)(iVar13 + 0xd4) = 0;
  fVar4 = fVar4 / param_2;
  *(float *)(unsigned int)(iVar13 + 0xd8) =
       (float)(int)(short)(sStack_78 - (unsigned int)((unsigned int)fVar7)) * ((int)_DAT_006ccd88) * fVar4;
  iVar6 = *(int *)(param_1 + 8);
  fStack_5c = *(float *)(unsigned int)(iVar6 + 0x60) - local_2c;
  fStack_58 = *(float *)(unsigned int)(iVar6 + 100) - local_28;
  fStack_24 = *(float *)(unsigned int)(iVar6 + 0x68) - fStack_24;
  if (ABS(param_2) < _DAT_006ccab0 == (ABS(param_2) == _DAT_006ccab0)) {
    fStack_5c = fStack_5c * fVar4;
    fStack_58 = fStack_58 * fVar4;
    fStack_24 = fVar4 * fStack_24;
  }
  else {
    FUN_005673e0(unaff_EDI);
  }
  *(float *)(unsigned int)(iVar13 + 0x78) = fStack_24;
  *(float *)(unsigned int)(iVar13 + 0x70) = fStack_5c;
  *(float *)(unsigned int)(iVar13 + 0x74) = fStack_58;
  *(float *)(unsigned int)(iVar13 + 0x3d0) = unaff_EDI;
  *(undefined1 *)(iVar13 + 0x460) = 0;
  local_80 = (int *)(param_1 + 0x38);
  local_74 = (float *)(unsigned int)(iVar13 + 0x374);
  pfVar12 = (float *)(unsigned int)(iVar13 + 0x300);
  local_70 = 4;
  *(float *)(unsigned int)(iVar13 + 0x3d4) =
       SQRT(fStack_24 * fStack_24 + fStack_58 * fStack_58 + fStack_5c * fStack_5c);
  iVar13 = *(int *)(param_1 + 8);
  fVar7 = -(fStack_5c * *(float *)(unsigned int)(iVar13 + 0xa0) +
           fStack_58 * *(float *)(unsigned int)(iVar13 + 0xa4) + fStack_24 * *(float *)(unsigned int)(iVar13 + 0xa8));
  local_7c = (float *)(unsigned int)(*(int *)(iVar13 + 0x20) + 0x20);
  fVar4 = unaff_EDI -
          (fStack_5c * *(float *)(unsigned int)(iVar13 + 0x90) +
          fStack_58 * *(float *)(unsigned int)(iVar13 + 0x94) + fStack_24 * *(float *)(unsigned int)(iVar13 + 0x98));
  do {
    fVar5 = *local_7c;
    fVar1 = pfVar12[-4];
    fVar2 = *(float *)(unsigned int)(param_1 + 0xc);
    fVar3 = *pfVar12;
    uVar15 = 0;
    uVar11 = FUN_00674898(0);
    FUN_00586bb0(fVar1 * fVar2 + fVar3,unaff_EDI / fVar5,uVar11,uVar15);
    *local_74 = fVar4;
    local_74[1] = fVar7;
    pfVar12[0x25] = 0.0;
    iVar13 = *local_80;
    if (1 < *(int *)(*(int *)(iVar13 + 0x14) + 0x18)) {
      *(float *)(unsigned int)(iVar13 + 0x100) = fVar4;
      *(float *)(unsigned int)(iVar13 + 0x104) = fVar7;
      *(float *)(unsigned int)(iVar13 + 0x160) = fVar4;
      *(undefined1 *)(*local_80 + 0x154) = *(undefined1 *)(param_1 + 0x34);
    }
    local_80 = local_80 + 1;
    pfVar12 = pfVar12 + 1;
    local_7c = local_7c + 0xc;
    local_74 = local_74 + 2;
    local_70 = local_70 + -1;
  } while (local_70 != 0);
  iVar13 = *(int *)(param_1 + 8);
  if ((((*(int *)(*(int *)(iVar13 + 0x14) + 4) != 3) && (*(char *)(iVar13 + 0x8a8) == '\0')) &&
      (*(char *)(iVar13 + 0x4d0) != '\0')) &&
     (fVar14 = (float10)FUN_00421400(), fVar14 < (float10)((int)_DAT_006b7338))) {
    iVar13 = 4;
    do {
      FUN_00587e90(param_2,*(undefined4 *)(param_1 + 8));
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  FUN_00427a30();
  return (float10)param_2;
}
