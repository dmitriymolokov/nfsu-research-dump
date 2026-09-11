/* spd-match: far pct=5.49 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069_void_illegal */
#include "ghidra_compat.h"

int __cdecl FUN_00401c80();
int __cdecl FUN_00424d60();
int __cdecl FUN_0042c4b0();
int __cdecl FUN_0042c640();
int __cdecl FUN_0042da40();
int __cdecl FUN_004663a0();
int __cdecl FUN_004663d0();
int __cdecl FUN_00565230();
int __cdecl FUN_00567370();
int __cdecl FUN_0058db20();
int __cdecl FUN_0058dbe0();
extern int DAT_006b72c0;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern unsigned char *DAT_007361f8;
extern int DAT_0073ad34;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int _DAT_006b7298;
extern int _DAT_006b729c;
extern int _DAT_006b72a0;
extern int _DAT_006b72a4;
extern int _DAT_006b72a8;
extern int _DAT_006b72ac;
extern int _DAT_006b72b0;
extern int _DAT_006b72b4;
extern int _DAT_006b72b8;
extern int _DAT_006b72bc;
extern int _DAT_006b72c4;
extern int _DAT_006b72c8;
extern int _DAT_006b72cc;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc960;
extern void LAB_004661ed(void);

void FUN_00465d00(int param_1,float *param_2,float *param_3)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  float fStack_124;
  float fStack_120;
  undefined1 auStack_11c [4];
  float fStack_118;
  float local_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  int local_f0;
  int local_e8 [2];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_88;
  float fStack_78;
  float fStack_68;
  float fStack_58;
  undefined1 auStack_50 [76];
  
  local_114 = SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
  if (DAT_006b72c0 <= local_114) {
    local_114 = DAT_006b72c0;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 100) + 600);
  local_e8[0] = 0;
  local_e8[1] = 0;
  if (*(char *)(iVar6 + 0x15) == '\0') {
    local_e8[0] = iVar6;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 100) + 0x25c);
  if (*(char *)(iVar6 + 0x15) == '\0') {
    local_e8[1] = iVar6;
  }
  local_f0 = 0;
  do {
    piVar1 = (int *)local_e8[local_f0];
    if (piVar1 != (int *)0x0) {
      if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) {
        if (local_f0 == 0) {
          iVar6 = *(int *)(*(int *)(param_1 + 100) + 0x25c);
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 100) + 600);
        }
        fVar3 = _DAT_006b72c8;
        if ((((iVar6 != 0) && (*(char *)(iVar6 + 0x15) == '\x04')) && (*(int *)(iVar6 + 0x140) != 0)
            ) && ((iVar6 = *(int *)(*(int *)(iVar6 + 0x140) + 0xc), iVar6 == 0x24cebc53 ||
                  (iVar6 == 0x427a6453)))) {
          fVar3 = _DAT_006b72cc;
        }
        if ((fVar3 <= local_114) && (iVar6 = piVar1[0x50], *(int *)(iVar6 + 0x28) == 1)) {
          iVar10 = *(int *)(iVar6 + 0x868);
          *(undefined1 *)(iVar6 + 0x874) = 1;
          if ((iVar10 != 0) && (*(char *)(iVar10 + 8) != '\x01')) {
            *(undefined1 *)(iVar10 + 8) = 1;
            FUN_0058db20();
          }
          *(undefined4 *)(*(int *)(*(int *)(piVar1[0x50] + 0x34) + 0x48) + 0x8c) = 0x3fc00000;
        }
      }
      if (((_DAT_006b72bc <= local_114) && (*(int *)(piVar1[0x50] + 0x38) == 0)) &&
         (((*(char *)(*(int *)(*(int *)(param_1 + 100) + 600) + 0x15) == '\0' &&
           (*(char *)(*(int *)(*(int *)(param_1 + 100) + 0x25c) + 0x15) == '\0')) ||
          (cVar5 = FUN_004663d0(), cVar5 != '\0')))) {
        *(undefined4 *)(param_1 + 0x10) = 1;
        iVar6 = piVar1[0x50];
        *(undefined4 *)(iVar6 + 0x38) = 1;
        *(undefined4 *)(iVar6 + 0x4cc) = 0;
        if ((*(int *)(*(int *)(iVar6 + 0x14) + 4) == 1) &&
           (*(char *)(*(int *)(iVar6 + 0x14) + 0x734) == '\0')) {
          *(undefined4 *)(iVar6 + 0x4c8) = DAT_0073ad34;
        }
        pfVar7 = (**(float * (**)())(*piVar1 + 8))();
        fStack_10c = param_2[1] - pfVar7[1];
        fStack_108 = param_2[2] - pfVar7[2];
        fStack_110 = *param_2 - *pfVar7;
        if (local_f0 == 0) {
          fStack_100 = *param_3;
          fStack_fc = param_3[1];
          fStack_f8 = param_3[2];
        }
        else {
          fStack_100 = -*param_3;
          fStack_fc = -param_3[1];
          fStack_f8 = -param_3[2];
          fStack_88 = fStack_f8;
        }
        FUN_00567370();
        fStack_e0 = fStack_b0;
        fStack_d8 = fStack_a8;
        fStack_dc = fStack_ac;
        (**(code **)(*piVar1 + 0xc))();
        FUN_00567370();
        fStack_c8 = fStack_b8;
        fStack_cc = fStack_bc;
        fStack_118 = fStack_bc * fStack_dc + fStack_b8 * fStack_d8 + fStack_e0 * fStack_c0;
        if (fStack_118 < _DAT_006b72b4) {
          fStack_a0 = fStack_c0 * fStack_118;
          fStack_9c = fStack_bc * fStack_118;
          fStack_58 = fStack_b8 * fStack_118;
          fStack_100 = fStack_e0 - fStack_a0;
          fStack_fc = fStack_dc - fStack_9c;
          fStack_f8 = fStack_d8 - fStack_58;
          fStack_78 = fStack_f8;
          FUN_00567370();
          fStack_f8 = 0.0;
          fVar3 = -(ABS(fStack_118) * _DAT_006b7298 * local_114);
          fStack_100 = fStack_100 * fVar3;
          fStack_fc = fVar3 * fStack_fc;
          (**(code **)(*piVar1 + 0x4c))(&fStack_100,&fStack_110);
        }
        pfVar7 = (**(float * (**)())(*piVar1 + 8))();
        fStack_110 = *param_2 - *pfVar7;
        fStack_10c = param_2[1] - pfVar7[1];
        fStack_108 = param_2[2] - pfVar7[2];
        fStack_68 = fStack_108;
        (**(code **)(*piVar1 + 0x14))();
        FUN_00565230();
        FUN_00465d00(&fStack_110,&fStack_110,auStack_50);
        fStack_108 = 0.0;
        if (_DAT_006b72b4 <= fStack_118) {
          cVar5 = FUN_004663a0();
          if (cVar5 != '\0') {
            fVar3 = ABS(*(float *)(*(int *)(piVar1[0x50] + 0x20) + 0x14) -
                        *(float *)(*(int *)(piVar1[0x50] + 0x20) + 0x44)) * _DAT_006b72a4 *
                    _DAT_006cc7dc;
            fVar4 = fStack_10c * _DAT_006b72a4;
            fStack_10c = fVar3;
            if ((fVar4 <= fVar3) && (fStack_10c = fVar4, fVar4 < -fVar3)) {
              fStack_10c = -fVar3;
            }
            fStack_110 = fStack_110 * _DAT_006b72a8;
            goto LAB_004661ed;
          }
        }
        else {
          uVar2 = *(uint *)(DAT_007361f8 + 0x2d0);
          uVar11 = uVar2 ^ 0x1d872b41;
          uVar8 = uVar11 >> 5 ^ uVar11;
          *(uint *)(DAT_007361f8 + 0x2d0) = uVar8 << 0x1b ^ uVar8 ^ uVar11;
          if (0x31 < uVar2 % 100) {
            fStack_110 = -(fStack_110 * _DAT_006b72ac);
          }
          if (_DAT_006b72b0 < ABS(fStack_10c)) {
            fStack_10c = fStack_10c * _DAT_006cc960;
          }
LAB_004661ed:
          uVar9 = (**(code **)(*piVar1 + 0x14))();
          FUN_00465d00(&fStack_110,&fStack_110,uVar9);
          fVar3 = _DAT_006b72c4;
          if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
            fVar3 = _DAT_006cc7bc;
          }
          fStack_108 = 0.0;
          fStack_f8 = _DAT_006b729c * fVar3;
          fStack_10c = 0.0;
          fVar12 = (float10)FUN_00401c80(ABS(fStack_124) * _DAT_006b72a0 * fStack_120 * fVar3,
                                         -fStack_f8,fStack_f8);
          fStack_104 = (float)fVar12;
          (**(code **)(*piVar1 + 0x4c))(&fStack_10c,auStack_11c);
        }
        if ((((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) &&
            (cVar5 = FUN_004663a0(), cVar5 != '\0')) && (_DAT_006b72b8 <= local_114)) {
          iVar6 = piVar1[0x50];
          iVar10 = FUN_00424d60();
          if (((iVar10 != 0) && (iVar6 = *(int *)(*(int *)(iVar6 + 0x18) + 0x60), iVar6 != 6)) &&
             ((iVar6 != 7 && (cVar5 = FUN_0042c4b0(), cVar5 != '\0')))) {
            cVar5 = FUN_0042da40(6,0,1,1);
            if (cVar5 == '\0') {
              FUN_0042c640();
            }
            else {
              iVar6 = *(int *)(piVar1[0x50] + 0x868);
              if ((iVar6 != 0) && (FUN_0058dbe0(), *(char *)(iVar6 + 8) != '\x01')) {
                *(undefined1 *)(iVar6 + 8) = 1;
                FUN_0058db20();
              }
            }
          }
        }
      }
    }
    local_f0 = local_f0 + 1;
    if (1 < local_f0) {
      return;
    }
  } while( true );
}
