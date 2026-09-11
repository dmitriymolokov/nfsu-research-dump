/* spd-match: far pct=7.59 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_08/attempt5_composed_overlay */
#include "ghidra_compat.h"

typedef void _func_void_void_ptr(void);
int __cdecl FUN_0040a880();
int __cdecl FUN_0040b930();
int __cdecl FUN_00456830();
int __cdecl FUN_004569b0();
int __cdecl FUN_00472aa0();
int __cdecl FUN_004733a0();
int __cdecl FUN_00564b10();
int __cdecl FUN_00564db0();
int __cdecl FUN_00578730();
int __cdecl FUN_005791c0();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_005a6700();
int __cdecl FUN_005a6760();
int __cdecl FUN_005a67d0();
int __cdecl FUN_005a7340();
int __cdecl FUN_005a7390();
int __cdecl FUN_005a74f0();
int __cdecl FUN_00647b70();
extern int DAT_006cc7a4;
extern int DAT_00700680;
extern int DAT_007372b0;
extern int DAT_007372b8;
extern unsigned char *DAT_007372bc;
extern int DAT_0073b07c;
extern int DAT_0077af30;
extern int _DAT_006cc7ac;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8a8;
extern int _DAT_006cc920;
extern void LAB_0044a300(void);
extern void LAB_0057af45(void);
extern void LAB_006860b6(void);
void *ExceptionList;

void FUN_0057a910(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  int *piVar12;
  int *piVar13;
  float10 fVar14;
  float10 fVar15;
  float *pfStack_55c;
  float fStack_558;
  int iStack_554;
  float local_550;
  int *piStack_54c;
  char cStack_545;
  float *local_544;
  float *pfStack_540;
  int iStack_53c;
  undefined4 *puStack_538;
  float *pfStack_534;
  float *pfStack_530;
  float fStack_52c;
  float fStack_528;
  int iStack_524;
  float fStack_520;
  float fStack_51c;
  undefined4 uStack_518;
  float fStack_510;
  float fStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  float fStack_4b8;
  float fStack_4b4;
  undefined4 uStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float local_4a0;
  float fStack_49c;
  undefined4 uStack_498;
  int iStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_480;
  float fStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  float fStack_470;
  float fStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  float fStack_458;
  float fStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  float fStack_448;
  float fStack_444;
  undefined1 auStack_43c [28];
  float afStack_420 [16];
  int aiStack_3e0 [16];
  int aiStack_3a0 [225];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_006860b6;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0xff;
  if (0 < *(int *)(unsigned int)((param_2 + 4))) {
    local_4a0 = *(float *)(*param_1 + 0x814);
    piVar10 = *(int **)(unsigned int)((*param_1 + 0x2c));
    local_550 = *(float *)(piVar10[1] + 0x3d4);
    local_544 = DAT_00700680;
    fVar14 = (float10)(**(code **)(*piVar10 + 0x50))();
    if (fVar14 * (float10)(unsigned int)(local_550) <= (float10)(float)(unsigned int)(local_544)) {
      pfStack_534 = local_544;
    }
    else {
      pfStack_534 = (float *)(unsigned int)(float)(fVar14 * (float10)(unsigned int)(local_550));
    }
    local_550 = *(float *)(*param_1 + 0x3d4);
    fVar14 = (float10)FUN_00456830(*param_1,local_550);
    fStack_49c = (float)fVar14;
    iVar8 = *param_1;
    fStack_490 = *(float *)(iVar8 + 0x70);
    local_550 = *(float *)(iVar8 + 0x78);
    fStack_48c = *(float *)(iVar8 + 0x74);
    fStack_4b4 = *(float *)(iVar8 + 0x60);
    fStack_4a8 = *(float *)(iVar8 + 100);
    iVar9 = *(int *)(iVar8 + 0x10);
    fStack_4a4 = *(float *)(iVar8 + 0x68);
    fStack_488 = local_550;
    if (*(char *)(iVar9 + 0x424) == -1) {
      FUN_0057f2b0(1);
    }
    iStack_494 = (int)*(char *)(iVar9 + 0x424);
    fStack_528 = 0.0;
    local_550 = 0.0;
    iStack_524 = 0xf;
    iStack_53c = 0;
    FUN_005a6700(&fStack_528,&local_550,param_3);
    puVar6 = (undefined4 *)FUN_005a7340();
    FUN_00564db0(*puVar6,puVar6[1]);
    uStack_500 = 0x3f800000;
    uStack_4fc = 0;
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0x3f800000;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4dc = 0;
    uStack_4d8 = 0x3f800000;
    uStack_4d4 = 0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0x3f800000;
    FUN_0040b930();
    FUN_0057a910(&uStack_500,&uStack_500,aiStack_3e0);
    FUN_0057a910(auStack_43c,&fStack_49c,&fStack_50c);
    pfVar11 = DAT_0073b07c;
    pfStack_540 = (float *)FUN_0040a880();
    if (pfVar11 != pfStack_540) {
      local_544 = (float *)(param_1 + 8);
      pfStack_530 = (float *)(param_1 + 7);
      do {
        cStack_545 = (int *)(unsigned int)(pfVar11[0x75]) == *(int **)(unsigned int)((*param_1 + 0x82c));
        if ((bool)cStack_545) {
          iStack_524 = 0x10;
        }
        cVar5 = (**(code **)(*(int *)(unsigned int)(pfVar11[0x75] + 0x20)))();
        if (((cVar5 != '\0') || (cStack_545 != '\0')) && (iStack_53c < iStack_524)) {
          iVar8 = *(int *)((int)pfVar11[0x75] + 0x1c);
          if (*(int *)(iVar8 + 0xe4) != 0) {
            FUN_005791c0();
          }
          fStack_4ac = *(float *)(iVar8 + 0x48);
          iVar9 = *(int *)((int)pfVar11[0x75] + 0x1c);
          fVar2 = *(float *)(iVar8 + 0x40) - fStack_4b4;
          piStack_54c = (int *)(unsigned int)((*(float *)(iVar8 + 0x44) - fStack_4a8));
          fVar1 = fStack_4ac - fStack_4a4;
          if (*(int *)(iVar9 + 0xe4) != 0) {
            FUN_005791c0();
          }
          fStack_4b8 = *(float *)(iVar9 + 0x98);
          fVar3 = *(float *)(iVar9 + 0x90) - fStack_490;
          iVar8 = *param_1;
          fVar4 = *(float *)(iVar9 + 0x94) - fStack_48c;
          fVar2 = SQRT(fVar2 * fVar2 + (float)(unsigned int)(piStack_54c) * (float)(unsigned int)(piStack_54c) + fVar1 * fVar1);
          fStack_558 = SQRT(fVar3 * fVar3 +
                            fVar4 * fVar4 + (fStack_4b8 - fStack_488) * (fStack_4b8 - fStack_488));
          pfVar7 = (float *)FUN_00578730();
          if (*pfVar7 * *(float *)(iVar8 + 0x90) + pfVar7[1] * *(float *)(iVar8 + 0x94) <
              DAT_006cc7a4) {
            fStack_558 = -fStack_558;
          }
          iVar8 = FUN_00647b70();
          if (iVar8 == 4) {
            fVar14 = (float10)*(float *)((int)pfVar11[0x74] + 0x14);
          }
          else {
            fVar14 = (float10)(**(code **)(*(int *)(unsigned int)(pfVar11[0x75] + 0x24)))();
          }
          fVar14 = fVar14 - (float10)(unsigned int)(local_4a0);
          if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
            if ((float10)(unsigned int)(DAT_007372b0) * (float10)(unsigned int)(_DAT_006cc920) <= fVar14) {
              if ((float10)(unsigned int)(DAT_007372b0) * (float10)(unsigned int)(_DAT_006cc7dc) < fVar14) {
                fVar14 = fVar14 - (float10)(unsigned int)(DAT_007372b0);
              }
            }
            else {
              fVar14 = fVar14 + (float10)(unsigned int)(DAT_007372b0);
            }
          }
          if (((fVar2 < (float)(unsigned int)(pfStack_534) != (fVar2 == (float)(unsigned int)(pfStack_534))) ||
              (cVar5 = FUN_004569b0(*param_1,fVar2,fStack_558,fStack_49c,0), cVar5 != '\0')) &&
             ((float)ABS(fVar14) <= (float)(unsigned int)(pfStack_534) * _DAT_006cc7ac)) {
            fStack_52c = 0.0;
            if (*(int *)(*(int *)((int)pfVar11[0x75] + 0x1c) + 0xe4) != 0) {
              FUN_005791c0();
            }
            if (*(int *)(*(int *)((int)pfVar11[0x75] + 0x1c) + 0xe4) != 0) {
              FUN_005791c0();
            }
            FUN_005a6760(param_2,pfVar11,&fStack_52c,&puStack_538);
            fVar2 = fStack_52c;
            puStack_538 = (undefined4 *)FUN_005a67d0(fStack_52c,0);
            piStack_54c = *(int **)(unsigned int)((param_2 + 8 + (int)puStack_538 * 4));
            fVar14 = (float10)FUN_005a74f0(piStack_54c,fVar2,iStack_494);
            *pfStack_530 = (float)fVar14;
            fStack_558 = 1.54143e-44;
            pfStack_55c = local_544;
            iStack_554 = 6;
            do {
              if (*(int *)(*(int *)((int)pfVar11[0x75] + 0x1c) + 0xe4) != 0) {
                FUN_005791c0();
              }
              iVar8 = *(int *)((int)pfVar11[0x75] + 0x1c);
              if (*(int *)(iVar8 + 0xe4) != 0) {
                FUN_005791c0();
              }
              FUN_00578730();
              fVar14 = (float10)FUN_005a7390(iVar8 + 0x40,fStack_558);
              pfVar7 = local_544;
              *pfStack_55c = (float)fVar14;
              pfStack_55c = pfStack_55c + 1;
              fStack_558 = (float)((int)fStack_558 + 1);
              iStack_554 = iStack_554 + -1;
            } while (iStack_554 != 0);
            local_544[-2] = fStack_52c;
            local_544[6] = (float)(unsigned int)(puStack_538);
            cVar5 = (char)piStack_54c[0x17];
            if ((cVar5 == -1) || (*(short *)((int)piStack_54c + 0x5e) == -1)) {
LAB_0057af45:
              puVar6 = (undefined4 *)0x0;
            }
            else {
              if (cVar5 < 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = (&DAT_0077af30)[cVar5];
              }
              iVar8 = *(short *)((int)piStack_54c + 0x5e) * 0x88 + 0x27c + iVar8;
              if (iVar8 == 0) goto LAB_0057af45;
              puVar6 = (undefined4 *)(**(code **)(*piStack_54c + 0x14))(iVar8);
            }
            FUN_00564db0(*puVar6,puVar6[1]);
            uStack_500 = 0x3f800000;
            uStack_4fc = 0;
            uStack_4f8 = 0;
            uStack_4f4 = 0;
            uStack_4f0 = 0;
            uStack_4ec = 0x3f800000;
            uStack_4e8 = 0;
            uStack_4e4 = 0;
            uStack_4e0 = 0;
            uStack_4dc = 0;
            uStack_4d8 = 0x3f800000;
            uStack_4d4 = 0;
            uStack_4d0 = 0;
            uStack_4cc = 0;
            uStack_4c8 = 0;
            uStack_4c4 = 0x3f800000;
            fVar14 = (float10)FUN_00564b10();
            fVar15 = (float10)FUN_00564b10();
            fStack_47c = (float)fVar15;
            fStack_470 = (float)-fVar15;
            uStack_478 = 0;
            uStack_474 = 0;
            uStack_468 = 0;
            uStack_464 = 0;
            uStack_460 = 0;
            uStack_45c = 0;
            fStack_458 = 1.0;
            fStack_454 = 0.0;
            uStack_450 = 0;
            uStack_44c = 0;
            fStack_448 = 0.0;
            fStack_444 = 1.0;
            fStack_480 = (float)fVar14;
            fStack_46c = (float)fVar14;
            FUN_0057a910(&uStack_500,&uStack_500,&fStack_480);
            iVar8 = *(int *)((int)pfVar11[0x75] + 0x1c);
            if (*(int *)(iVar8 + 0xe4) != 0) {
              FUN_005791c0();
            }
            FUN_0057a910(&uStack_44c,iVar8 + 0x90,&fStack_50c);
            pfVar7[-6] = fStack_458 - fStack_448;
            pfVar7[-5] = fStack_454 - fStack_444;
            iVar8 = (**(code **)(*(int *)(unsigned int)(pfVar11[0x75] + 0x28)))();
            if (iVar8 == 0) {
              fStack_510 = 0.0;
              fStack_50c = 0.0;
              uStack_508 = 0;
              fStack_520 = 0.0;
              fStack_51c = 0.0;
              uStack_518 = 0;
            }
            else {
              iVar8 = *(int *)(iVar8 + 0x10);
              iVar9 = *(int *)(iVar8 + 0x10);
              if (iVar9 == 1) {
                FUN_004733a0(&fStack_510);
              }
              else if (iVar9 == 3) {
                FUN_00472aa0();
              }
              else if (iVar9 == 4) {
                fStack_510 = *(float *)(iVar8 + 0x30);
                uStack_518 = *(undefined4 *)(iVar8 + 0x38);
                fStack_50c = *(float *)(iVar8 + 0x34);
                fStack_520 = *(float *)(iVar8 + 0x30);
                fStack_51c = *(float *)(iVar8 + 0x34);
                uStack_508 = uStack_518;
                uStack_4b0 = uStack_518;
                uStack_498 = uStack_518;
              }
            }
            fVar2 = (fStack_51c - fStack_50c) * _DAT_006cc7dc;
            piStack_54c = (int *)(unsigned int)(CONCAT22((*(unsigned short *)((unsigned char *)&(piStack_54c) + 2)),*(undefined2 *)(*param_1 + 0x3b4)));
            fVar1 = (fStack_520 - fStack_510) * _DAT_006cc7dc;
            puStack_538 = (undefined4 *)FUN_00578730();
            iVar8 = FUN_00578730();
            FUN_00564db0(*puStack_538,*(undefined4 *)(iVar8 + 4));
            fVar14 = (float10)FUN_00564b10();
            fVar14 = fVar14 * fVar14;
            fVar15 = (float10)(unsigned int)(_DAT_006cc7bc);
            iStack_53c = iStack_53c + 1;
            pfStack_530 = pfStack_530 + 0xe;
            pfVar7[7] = (float)(unsigned int)(pfVar11);
            local_544 = pfVar7 + 0xe;
            pfVar7[-4] = (float)(fVar14 * (float10)fVar2 + (float10)fVar1 * (fVar15 - fVar14));
            pfVar7[-3] = (float)((fVar15 - fVar14) * (float10)fVar2 + fVar14 * (float10)fVar1);
          }
        }
        pfVar11 = (float *)(unsigned int)(*pfVar11);
      } while (pfVar11 != pfStack_540);
    }
    param_1[1] = iStack_53c;
    _eh_vector_constructor_iterator_
              (aiStack_3a0,0x38,0x10,(_func_void_void_ptr *)&LAB_0044a300,FUN_0040a880);
    iVar8 = param_1[1];
    piVar10 = param_1 + 2;
    piVar12 = aiStack_3a0;
    for (iVar9 = 0xe0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar12 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar12 = piVar12 + 1;
    }
    iVar9 = 0;
    if (0 < iVar8) {
      piVar10 = aiStack_3a0;
      do {
        fVar2 = (float)(unsigned int)(piVar10[4]) - fStack_528;
        aiStack_3e0[iVar9] = (int)piVar10;
        if ((param_3 < 0) || (4 < param_3)) {
          fVar1 = DAT_006cc7a4;
          if ((10 < param_3) && (param_3 < 0x11)) {
            fVar1 = (float)(unsigned int)(piVar10[param_3 + -5]);
          }
        }
        else {
          fVar1 = (float)(unsigned int)(piVar10[5]);
        }
        pfStack_540 = (float *)(unsigned int)(fVar2 * fVar2 + (fVar1 - local_550) * (fVar1 - local_550));
        afStack_420[iVar9] = (float)(unsigned int)(pfStack_540);
        if (fVar2 < DAT_006cc7a4) {
          afStack_420[iVar9] = (float)(unsigned int)(pfStack_540) * _DAT_006cc8a8;
        }
        iVar9 = iVar9 + 1;
        piVar10 = piVar10 + 0xe;
      } while (iVar9 < iVar8);
    }
    if (0 < param_1[1]) {
      fVar2 = (float)(unsigned int)(param_1[1]);
      pfStack_540 = (float *)(param_1[1] + -1);
      local_550 = fVar2;
      do {
        iVar8 = 0;
        if (0 < (int)pfStack_540) {
          do {
            if (afStack_420[iVar8] < afStack_420[iVar8 + 1]) {
              fVar1 = afStack_420[iVar8];
              iVar9 = aiStack_3e0[iVar8 + 1];
              aiStack_3e0[iVar8 + 1] = aiStack_3e0[iVar8];
              fVar3 = afStack_420[iVar8 + 1];
              afStack_420[iVar8 + 1] = fVar1;
              aiStack_3e0[iVar8] = iVar9;
              afStack_420[iVar8] = fVar3;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)fVar2 + -1);
        }
        local_550 = (float)((int)local_550 + -1);
      } while (local_550 != 0.0);
    }
    iVar8 = 0;
    if (0 < param_1[1]) {
      piVar10 = param_1 + 0xf;
      do {
        piVar12 = (int *)aiStack_3e0[iVar8];
        piVar13 = piVar10 + -0xd;
        for (iVar9 = 0xe; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar13 = *piVar12;
          piVar12 = piVar12 + 1;
          piVar13 = piVar13 + 1;
        }
        if (*(int *)(*piVar10 + 0x1d4) == *(int *)(unsigned int)((*param_1 + 0x82c))) {
          *(char *)(param_1 + 0xe2) = (char)iVar8;
        }
        iVar8 = iVar8 + 1;
        piVar10 = piVar10 + 0xe;
      } while (iVar8 < param_1[1]);
    }
    uStack_14 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_3a0,0x38,0x10,FUN_0040a880);
  }
  ExceptionList = local_1c;
  return;
}
