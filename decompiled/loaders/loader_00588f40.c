/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00588e10();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_006f06e8;
extern int DAT_006f06ec;
extern int DAT_006f06f0;
extern int DAT_006f06f4;
extern int DAT_006f06f8;
extern int DAT_006f06fc;
extern int DAT_006f0704;
extern int DAT_00734520;
extern int _DAT_006cc7bc;
extern int _DAT_006cca64;
extern int _DAT_006f0700;
extern int _DAT_006f0724;
void __fastcall FUN_00588f40(int obj, int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *unaff_EDI;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  fVar2 = *(float *)(*(int *)(obj + 0x40) + 0x40);
  fVar1 = *(float *)(*(int *)(obj + 0x40) + 0x44);
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  if (param_1 != 0) {
    FUN_00588e10(unaff_EDI);
  }
  uVar9 = DAT_006f06fc;
  fVar4 = DAT_006f06f0;
  fVar3 = DAT_006f06ec;
  if (DAT_00734520 != 0) {
    *unaff_EDI = DAT_006f06e8;
    unaff_EDI[4] = DAT_006f06f4;
    uVar5 = DAT_006f0704 << 8;
    unaff_EDI[1] = fVar3;
    fVar1 = DAT_006f06f8;
    uVar5 = uVar5 | _DAT_006f0700;
    unaff_EDI[2] = fVar4;
    unaff_EDI[3] = fVar1;
    unaff_EDI[5] = (float)((uVar5 << 8 | uVar9) & 0xffffff | 0x80000000);
    return;
  }
  iVar7 = 0;
  unaff_EDI[3] = 0.0;
  unaff_EDI[4] = 0.0;
  *unaff_EDI = 0.0;
  unaff_EDI[1] = 0.0;
  unaff_EDI[2] = 0.0;
  if (0 < (int)unaff_EDI[0xc1e]) {
    pfVar6 = unaff_EDI + 0x11;
    do {
      iVar7 = iVar7 + 1;
      fVar3 = pfVar6[-1] - fVar2;
      fVar4 = *pfVar6 - fVar1;
      pfVar6[6] = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      pfVar6 = pfVar6 + 0x14;
    } while (iVar7 < (int)unaff_EDI[0xc1e]);
  }
  iVar7 = -1;
  iVar8 = 0;
  _DAT_006f0724 = -1;
  if (0 < (int)unaff_EDI[0xc1e]) {
    pfVar6 = unaff_EDI + 0xc;
    fVar1 = _DAT_006cca64;
    do {
      if (pfVar6[-1] <= pfVar6[0xb]) {
        pfVar6[0xc] = 5.60519e-45;
        pfVar6[0xd] = 0.0;
      }
      else {
        fVar2 = DAT_006cc7a4;
        if (*pfVar6 <= pfVar6[0xb]) {
          fVar2 = (pfVar6[0xb] - *pfVar6) / (pfVar6[-1] - *pfVar6);
        }
        pfVar6[0xd] = _DAT_006cc7bc - fVar2;
        if (fVar2 == DAT_006cc7a4) {
          pfVar6[0xc] = 1.4013e-45;
          pfVar6[0xd] = 1.0;
          if (pfVar6[-1] < fVar1) {
            fVar1 = pfVar6[-1];
            iVar7 = iVar8;
          }
        }
        else {
          pfVar6[0xc] = 2.8026e-45;
        }
      }
      iVar8 = iVar8 + 1;
      pfVar6 = pfVar6 + 0x14;
    } while (iVar8 < (int)unaff_EDI[0xc1e]);
    _DAT_006f0724 = iVar7;
    if (iVar7 != -1) {
      iVar8 = 0;
      if (0 < (int)unaff_EDI[0xc1e]) {
        pfVar6 = unaff_EDI + 0x19;
        do {
          if ((iVar8 != iVar7) && (pfVar6[-1] == 1.4013e-45)) {
            *pfVar6 = 0.0;
          }
          if (pfVar6[-1] == 2.8026e-45) {
            unaff_EDI[iVar7 * 0x14 + 0x19] =
                 (_DAT_006cc7bc - *pfVar6) * unaff_EDI[iVar7 * 0x14 + 0x19];
          }
          iVar8 = iVar8 + 1;
          pfVar6 = pfVar6 + 0x14;
        } while (iVar8 < (int)unaff_EDI[0xc1e]);
      }
    }
  }
  iVar7 = 0;
  uVar9 = 0;
  if (0 < (int)unaff_EDI[0xc1e]) {
    pfVar6 = unaff_EDI + 0x19;
    do {
      if (*pfVar6 != DAT_006cc7a4) {
        *unaff_EDI = pfVar6[-5] * *pfVar6 + *unaff_EDI;
        unaff_EDI[1] = pfVar6[-4] * *pfVar6 + unaff_EDI[1];
        unaff_EDI[2] = pfVar6[-3] * *pfVar6 + unaff_EDI[2];
        unaff_EDI[3] = pfVar6[-0xf] * *pfVar6 + unaff_EDI[3];
        unaff_EDI[4] = pfVar6[-0x10] * *pfVar6 + unaff_EDI[4];
        iVar8 = FUN_00674898();
        local_28 = local_28 + iVar8;
        iVar8 = FUN_00674898();
        local_2c = local_2c + iVar8;
        iVar8 = FUN_00674898();
        local_30 = local_30 + iVar8;
      }
      iVar7 = iVar7 + 1;
      pfVar6 = pfVar6 + 0x14;
      uVar9 = local_30;
    } while (iVar7 < (int)unaff_EDI[0xc1e]);
  }
  unaff_EDI[5] = (float)(((uVar9 | 0xffff8000) << 8 | local_2c) << 8 | local_28);
  if (param_1 != 0) {
    unaff_EDI[0xc1c] = 0.0;
    unaff_EDI[0xc1d] = 0.0;
    unaff_EDI[0xc1e] = 0.0;
    unaff_EDI[0xc1f] = 0.0;
  }
  return;
}
