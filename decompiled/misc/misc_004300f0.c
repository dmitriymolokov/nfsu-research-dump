/* spd-match: far pct=6.54 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_0040bc10();
int __cdecl FUN_0042a710();
int __cdecl FUN_0042acb0();
int __cdecl FUN_0042fee0();
int __cdecl FUN_00430020();
int __cdecl FUN_00430060();
int __cdecl FUN_00564db0();
int __cdecl FUN_00567280();
int __cdecl FUN_00593d40();
int __cdecl FUN_0059d740();
int __cdecl FUN_0059def0();
extern int DAT_006b7ad0;
extern int DAT_006b7ad4;
extern int DAT_006b7ae8;
extern int DAT_006cc7a4;
extern int DAT_00700d1c;
extern int DAT_0073457c;
extern int DAT_0073ad34;
extern int _DAT_006b72dc;
extern int _DAT_006b7abc;
extern int _DAT_006b7ac0;
extern int _DAT_006b7ac4;
extern int _DAT_006b7ac8;
extern int _DAT_006b7acc;
extern int _DAT_006b7ad8;
extern int _DAT_006b7adc;
extern int _DAT_006b7ae0;
extern int _DAT_006b7afc;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8a8;
extern int _DAT_006cc8bc;
extern int _DAT_006cc978;
extern int _DAT_006cc97c;
extern int _DAT_006cc980;
int unaff_EBX;

void FUN_004300f0(void)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar9;
  undefined4 extraout_EDX;
  int unaff_EBX;
  float *pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST1;
  int local_98;
  float local_94 [9];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  if (*(int *)(unaff_EBX + 4) != 0) {
    if ((*(int *)(unaff_EBX + 0x130) == 0) && (*(int *)(unaff_EBX + 0x128) < 5)) {
      uVar2 = *(undefined4 *)(&((int)DAT_00700d1c) + *(int *)(unaff_EBX + 0x128) * 4);
      iVar8 = FUN_0059def0();
      if (iVar8 != 0) {
        FUN_0042acb0(iVar8,0);
        fVar11 = (float10)FUN_00567280();
        if (fVar11 < (float10)((int)_DAT_006b7afc) != (fVar11 == (float10)((int)_DAT_006b7afc))) {
          FUN_0042fee0(uVar2);
        }
      }
    }
    local_94[5] = 9999.0;
    local_94[6] = 9999.0;
    local_94[7] = 9999.0;
    local_94[8] = 9999.0;
    local_94[1] = 0.0;
    local_94[2] = 0.0;
    local_94[3] = 0.0;
    local_94[4] = 0.0;
    if (*(int *)(unaff_EBX + 0x130) != 0) {
      local_94[0] = *(float *)(unaff_EBX + 0x184);
      FUN_0040bc10();
      FUN_004300f0(local_60,*(int *)(unaff_EBX + 4) + 0x60,local_50);
      iVar8 = *(int *)(*(int *)(unaff_EBX + 0x130) + 4);
      fVar11 = (float10)FUN_0059d740(*(undefined4 *)(unaff_EBX + 0x184),unaff_EBX + 0x184,0x3ba3d70a
                                    );
      *(float *)(unaff_EBX + 0x180) = (float)fVar11;
      local_98 = 0;
      do {
        FUN_0042a710(local_70);
        FUN_004300f0(local_70,local_70,local_50);
        fVar11 = (float10)FUN_0059d740(*(undefined4 *)(unaff_EBX + 0x184),0,0x3ba3d70a);
        local_94[local_98 + 5] = (float)fVar11;
        fVar11 = (float10)((int)_DAT_006cc7bc) / (fVar11 + (float10)((int)_DAT_006cc8bc));
        fVar1 = (float)fVar11;
        fVar3 = _DAT_006cc8a8;
        if (((float10)((int)_DAT_006cc8a8) < fVar11) && (fVar3 = fVar1, _DAT_006cc7bc < fVar1)) {
          fVar3 = _DAT_006cc7bc;
        }
        local_98 = local_98 + 1;
        local_94[local_98] = fVar3 * fVar3;
      } while (local_98 < 4);
      if ((*(int *)(unaff_EBX + 0x128) < 5) &&
         (*(int *)(unaff_EBX + 300) == *(int *)(&((int)DAT_00700d1c) + *(int *)(unaff_EBX + 0x128) * 4))) {
        iVar9 = *(int *)(unaff_EBX + 0x18c);
        if (iVar9 == -1) {
          *(undefined4 *)(unaff_EBX + 0x188) = *(undefined4 *)(unaff_EBX + 0x184);
          *(undefined4 *)(unaff_EBX + 0x18c) = 0;
        }
        else {
          FUN_00430020(local_94[0],*(undefined4 *)(unaff_EBX + 0x188),*(undefined4 *)(iVar8 + 0xc));
          fVar11 = (float10)FUN_00430020(*(undefined4 *)(unaff_EBX + 0x188),
                                         *(undefined4 *)(unaff_EBX + 0x184),extraout_ECX);
          fVar12 = (float10)FUN_00430020(extraout_EDX,*(undefined4 *)(unaff_EBX + 0x184),
                                         extraout_ECX_00);
          if (((fVar12 <= (float10)((int)DAT_006cc7a4)) || (extraout_ST1 <= (float10)((int)DAT_006cc7a4))) ||
             ((float)fVar11 < DAT_006cc7a4)) {
            if (((fVar12 < (float10)((int)DAT_006cc7a4)) &&
                (extraout_ST1 < (float10)((int)DAT_006cc7a4) != (extraout_ST1 == (float10)((int)DAT_006cc7a4))))
               && ((float)fVar11 < DAT_006cc7a4)) {
              *(int *)(unaff_EBX + 0x18c) = iVar9 + -1;
            }
          }
          else {
            *(int *)(unaff_EBX + 0x18c) = iVar9 + 1;
          }
        }
        fVar11 = (float10)FUN_00430060();
        if ((float10)((int)_DAT_006cc7bc) <= fVar11) {
          *(undefined4 *)(unaff_EBX + 0x104) = 0;
          *(float *)(unaff_EBX + 0x11c) =
               *(float *)(unaff_EBX + 0x11c) + *(float *)(unaff_EBX + 0x118);
          *(undefined4 *)(unaff_EBX + 0x118) = 0;
          FUN_0042fee0(0);
          *(int *)(unaff_EBX + 0x128) = (*(int *)(unaff_EBX + 0x128) + 1) % 5;
        }
      }
    }
    iVar8 = *(int *)(unaff_EBX + 4);
    fVar1 = ((int)_DAT_006b7ac4) * local_94[1];
    fVar5 = ((int)_DAT_006b7ac4) * local_94[2];
    fVar4 = ((int)_DAT_006b7ac4) * local_94[3];
    fVar3 = ((int)_DAT_006b7ac4) * local_94[4];
    fVar6 = DAT_006cc7a4;
    if (_DAT_006b72dc <= *(float *)(iVar8 + 0x3d0)) {
      sVar7 = FUN_00564db0(*(undefined4 *)(iVar8 + 0x70),*(undefined4 *)(iVar8 + 0x74));
      local_94[0] = (float)(uint)(ushort)(*(short *)(iVar8 + 0x3b4) - sVar7);
      fVar6 = (float)(int)local_94[0] * ((int)_DAT_006cc980);
      if (_DAT_006cc97c < fVar6) {
        fVar6 = fVar6 - _DAT_006cc978;
      }
    }
    uVar2 = DAT_006b7ad0;
    *(float *)(unaff_EBX + 0x10c) =
         *(float *)(*(int *)(unaff_EBX + 4) + 0x3d4) * ((int)_DAT_006b7acc) * ABS(fVar6) * ((int)_DAT_006b7ac8) *
         (fVar3 + fVar4 + fVar5 + fVar1) * ((int)DAT_0073457c) + _DAT_006b7abc;
    *(undefined4 *)(*(int *)(unaff_EBX + 0x108) + 0x24) = uVar2;
    *(undefined4 *)(*(int *)(unaff_EBX + 0x108) + 0x28) = DAT_006b7ad4;
    fVar1 = *(float *)(unaff_EBX + 0x10c);
    pfVar10 = *(float **)(unaff_EBX + 0x108);
    pfVar10[2] = fVar1;
    if (fVar1 != *pfVar10) {
      *(undefined2 *)(pfVar10 + 0xb) = 2;
    }
    iVar8 = 0;
    FUN_00593d40(DAT_0073457c,0,0);
    fVar1 = **(float **)(unaff_EBX + 0x108);
    if (**(float **)(unaff_EBX + 0x108) <= DAT_006cc7a4) {
      fVar1 = DAT_006cc7a4;
    }
    *(float *)(unaff_EBX + 0x110) = fVar1;
    if (fVar1 < _DAT_006b7ad8) {
      *(undefined4 *)(unaff_EBX + 0x114) = 0;
    }
    else if ((*(int *)(unaff_EBX + 0x114) == 0) || (*(int *)(unaff_EBX + 0x114) == 0x7fffffff)) {
      *(undefined4 *)(unaff_EBX + 0x114) = DAT_0073ad34;
    }
    if (*(int *)(unaff_EBX + 0x130) != 0) {
      if (_DAT_006b7ae0 < *(float *)(*(int *)(unaff_EBX + 4) + 0x3d4)) {
        iVar9 = 0;
        pfVar10 = (float *)(*(int *)(unaff_EBX + 4) + 0x3a4);
        fVar1 = DAT_006cc7a4;
        do {
          if (ABS(local_94[iVar9 + 5]) < ((int)DAT_006b7ae8) * ((int)_DAT_006cc7dc) !=
              (ABS(local_94[iVar9 + 5]) == ((int)DAT_006b7ae8) * ((int)_DAT_006cc7dc))) {
            *(undefined1 *)((int)local_94 + iVar9) = 1;
            fVar1 = fVar1 + *pfVar10;
            iVar8 = iVar8 + 1;
          }
          iVar9 = iVar9 + 1;
          pfVar10 = pfVar10 + 1;
        } while (iVar9 < 4);
        if (0 < iVar8) {
          fVar1 = fVar1 * ((int)_DAT_006b7ac0) * ((int)DAT_0073457c) + *(float *)(unaff_EBX + 0x104);
          *(float *)(unaff_EBX + 0x104) = fVar1;
          *(float *)(unaff_EBX + 0x118) =
               fVar1 * *(float *)(unaff_EBX + 0x110) * ((int)_DAT_006b7adc) * ((int)DAT_0073457c) +
               *(float *)(unaff_EBX + 0x118);
        }
      }
      fVar1 = *(float *)(unaff_EBX + 0x118);
      if (*(float *)(unaff_EBX + 0x118) < *(float *)(unaff_EBX + 0x120)) {
        fVar1 = *(float *)(unaff_EBX + 0x120);
      }
      *(float *)(unaff_EBX + 0x120) = fVar1;
    }
  }
  return;
}
