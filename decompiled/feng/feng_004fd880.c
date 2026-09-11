/* spd-match: far pct=5.13 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_004FD880 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc7b8;
extern int _DAT_006cc7bc;
extern void LAB_004fd99b(...);
extern void LAB_004fda2d(...);
extern void LAB_004fda96(...);

struct ThisCallBox {
  void FUN_004fd880(int val, int param_2);
};
void ThisCallBox::FUN_004fd880(int val, int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  int iVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  
  uVar3 = *(uint *)(((int)this) + 0x58);
  if (((byte)uVar3 & 0x60) == 0x60) {
    return;
  }
  if ((uVar3 & 0x20) != 0) {
    val = 0;
  }
  if ((uVar3 & 0x40) != 0) {
    param_2 = 0;
  }
  if (val == 0) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    if ((uVar3 & 0x20) == 0) {
      uVar12 = *(int *)(((int)this) + 0x84) + val;
      uVar4 = *(uint *)(((int)this) + 0x5c);
      if ((uVar3 & 4) == 0) {
        iVar8 = *(int *)(((int)this) + 0x74);
        if ((int)uVar12 < 0) {
          uVar9 = uVar4 + uVar12;
          uVar2 = *(undefined4 *)(iVar8 + 4 + uVar9 * 0xc);
          *(undefined4 *)(((int)this) + 0x90) = uVar2;
          *(undefined4 *)(((int)this) + 0x6c) = uVar2;
          do {
            iVar1 = uVar9 * 0xc;
            uVar9 = (uVar9 + 1) % uVar4;
            *(float *)(((int)this) + 0x6c) = *(float *)(iVar8 + iVar1) + *(float *)(((int)this) + 0x6c);
          } while (uVar9 != *(uint *)(((int)this) + 0x84));
        }
        else {
          if ((int)uVar12 < (int)uVar4) {
            *(uint *)(((int)this) + 0x84) = uVar12;
            *(undefined4 *)(((int)this) + 0x90) = *(undefined4 *)(iVar8 + 4 + uVar12 * 0xc);
            goto LAB_004fd99b;
          }
          uVar9 = *(uint *)(((int)this) + 0x84);
          *(undefined4 *)(((int)this) + 0x90) = *(undefined4 *)(((int)this) + 0x6c);
          do {
            uVar10 = uVar9 % uVar4;
            uVar9 = uVar9 + 1;
            *(float *)(((int)this) + 0x90) =
                 *(float *)(iVar8 + uVar10 * 0xc) + *(float *)(((int)this) + 0x90);
          } while (uVar9 != uVar12);
        }
        *(uint *)(((int)this) + 0x58) = uVar3 | 8;
        *(uint *)(((int)this) + 0x84) = uVar12 % uVar4;
      }
      else {
        if ((int)uVar4 <= (int)uVar12) {
          uVar12 = uVar4 - 1;
        }
        if ((int)uVar12 < 0) {
          uVar12 = 0;
        }
        iVar8 = *(int *)(((int)this) + 0x74);
        *(uint *)(((int)this) + 0x84) = uVar12;
        *(undefined4 *)(((int)this) + 0x90) = *(undefined4 *)(iVar8 + 4 + uVar12 * 0xc);
      }
LAB_004fd99b:
      uVar3 = *(uint *)(((int)this) + 0x84);
      fVar5 = DAT_006cc7a4;
      if (uVar3 < uVar4) {
        pfVar11 = (float *)(iVar8 + uVar3 * 0xc);
        iVar8 = *(int *)(((int)this) + 0x5c) - uVar3;
        do {
          fVar5 = fVar5 + *pfVar11;
          pfVar11 = pfVar11 + 3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if ((*(uint *)(((int)this) + 0x58) & 4) == 0) {
        if (fVar5 < *(float *)(((int)this) + 100)) {
          *(uint *)(((int)this) + 0x58) = *(uint *)(((int)this) + 0x58) | 8;
        }
      }
      else if (fVar5 < *(float *)(((int)this) + 100)) {
        *(float *)(((int)this) + 0x90) =
             *(float *)(((int)this) + 0x90) - (*(float *)(((int)this) + 100) - fVar5);
      }
      *(uint *)(((int)this) + 0x58) = *(uint *)(((int)this) + 0x58) | 0x20;
    }
    if (param_2 == 0) goto LAB_004fda96;
  }
  uVar3 = *(uint *)(((int)this) + 0x58);
  if ((uVar3 & 0x40) != 0) goto LAB_004fda96;
  uVar4 = *(uint *)(((int)this) + 0x60);
  uVar12 = *(int *)(((int)this) + 0x88) + param_2;
  if ((uVar3 & 4) == 0) {
    if ((int)uVar12 < 0) {
      iVar8 = *(int *)(((int)this) + 0x78);
      uVar9 = uVar4 + uVar12;
      uVar2 = *(undefined4 *)(iVar8 + 4 + uVar9 * 0xc);
      *(undefined4 *)(((int)this) + 0x94) = uVar2;
      *(undefined4 *)(((int)this) + 0x70) = uVar2;
      do {
        iVar1 = uVar9 * 0xc;
        uVar9 = (uVar9 + 1) % uVar4;
        *(float *)(((int)this) + 0x70) = *(float *)(iVar8 + iVar1) + *(float *)(((int)this) + 0x70);
      } while (uVar9 != *(uint *)(((int)this) + 0x88));
    }
    else {
      if ((int)uVar12 < (int)uVar4) goto LAB_004fda2d;
      uVar9 = *(uint *)(((int)this) + 0x88);
      iVar8 = *(int *)(((int)this) + 0x78);
      *(undefined4 *)(((int)this) + 0x94) = *(undefined4 *)(((int)this) + 0x70);
      do {
        uVar10 = uVar9 % uVar4;
        uVar9 = uVar9 + 1;
        *(float *)(((int)this) + 0x94) = *(float *)(iVar8 + uVar10 * 0xc) + *(float *)(((int)this) + 0x94);
      } while (uVar9 != uVar12);
    }
    *(uint *)(((int)this) + 0x58) = uVar3 | 8;
    *(uint *)(((int)this) + 0x88) = uVar12 % uVar4;
  }
  else {
    if ((int)uVar4 <= (int)uVar12) {
      uVar12 = uVar4 - 1;
    }
    if ((int)uVar12 < 0) {
      uVar12 = 0;
    }
LAB_004fda2d:
    iVar8 = *(int *)(((int)this) + 0x78);
    *(uint *)(((int)this) + 0x88) = uVar12;
    *(undefined4 *)(((int)this) + 0x94) = *(undefined4 *)(iVar8 + 4 + uVar12 * 0xc);
  }
  uVar3 = *(uint *)(((int)this) + 0x88);
  fVar5 = DAT_006cc7a4;
  if (uVar3 < uVar4) {
    pfVar11 = (float *)(iVar8 + uVar3 * 0xc);
    iVar8 = *(int *)(((int)this) + 0x60) - uVar3;
    do {
      fVar5 = fVar5 + *pfVar11;
      pfVar11 = pfVar11 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((*(uint *)(((int)this) + 0x58) & 4) == 0) {
    if (fVar5 < *(float *)(((int)this) + 0x68)) {
      *(uint *)(((int)this) + 0x58) = *(uint *)(((int)this) + 0x58) | 0x10;
    }
  }
  else if (fVar5 < *(float *)(((int)this) + 0x68)) {
    *(float *)(((int)this) + 0x94) = *(float *)(((int)this) + 0x94) - (*(float *)(((int)this) + 0x68) - fVar5);
  }
  *(uint *)(((int)this) + 0x58) = *(uint *)(((int)this) + 0x58) | 0x40;
LAB_004fda96:
  *(uint *)(((int)this) + 0x58) = *(uint *)(((int)this) + 0x58) | 2;
  fVar5 = *(float *)(((int)this) + 0x90) - *(float *)(((int)this) + 0x6c);
  fVar7 = *(float *)(((int)this) + 0x94) - *(float *)(((int)this) + 0x70);
  *(float *)(((int)this) + 0x98) = fVar5;
  *(float *)(((int)this) + 0x9c) = fVar7;
  fVar6 = SQRT(fVar5 * fVar5 + fVar7 * fVar7);
  if (_DAT_006cc7b8 <= fVar6) {
    fVar6 = _DAT_006cc7bc / fVar6;
    *(float *)(((int)this) + 0x98) = fVar6 * fVar5;
    *(float *)(((int)this) + 0x9c) = fVar7 * fVar6;
  }
  else {
    *(undefined4 *)(((int)this) + 0x6c) = *(undefined4 *)(((int)this) + 0x90);
    *(undefined4 *)(((int)this) + 0x70) = *(undefined4 *)(((int)this) + 0x94);
    uVar3 = *(uint *)(((int)this) + 0x58);
    *(uint *)(((int)this) + 0x58) = uVar3 & 0xffffff9d;
    if (*(int *)(((int)this) + 0x84) == 0) {
      *(uint *)(((int)this) + 0x58) = uVar3 & 0xffffff95;
      *(undefined4 *)(((int)this) + 0x6c) = 0;
    }
    if (*(int *)(((int)this) + 0x88) == 0) {
      *(uint *)(((int)this) + 0x58) = *(uint *)(((int)this) + 0x58) & 0xffffffef;
      *(undefined4 *)(((int)this) + 0x70) = 0;
      return;
    }
  }
  return;
}
