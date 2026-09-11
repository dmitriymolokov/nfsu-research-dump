/* spd-match: far pct=4.90 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005679B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

extern void LAB_00567a94(void);
extern void LAB_00567ad3(void);
extern void LAB_00567c02(void);
extern void LAB_00567c22(void);
undefined4 __fastcall FUN_005679b0(float * obj, int param_1, int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;

  ushort uVar6;
  int iVar5;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  bool bVar11;
  int local_8;
  
  fVar2 = *obj;
  fVar3 = obj[1];
  iVar9 = 0;
  bVar11 = false;
  iVar5 = param_2 + -1;
  local_8 = 0;
  if (3 < param_2) {
    iVar8 = iVar5 * 8;
    pfVar7 = (float *)(param_1 + 4);
    iVar4 = 3;
    do {
      iVar5 = iVar4;
      if ((((*pfVar7 < fVar3 != (*pfVar7 == fVar3)) &&
           (pfVar10 = (float *)(iVar8 + 4 + param_1), fVar3 < *pfVar10)) ||
          ((fVar1 = *(float *)(iVar8 + 4 + param_1), pfVar10 = (float *)(iVar8 + 4 + param_1),
           fVar1 < fVar3 != (fVar1 == fVar3) && (fVar3 < *pfVar7)))) &&
         (fVar2 < ((*(float *)(iVar8 + param_1) - pfVar7[-1]) * (fVar3 - *pfVar7)) /
                  (*pfVar10 - *pfVar7) + pfVar7[-1])) {
        bVar11 = bVar11 == false;
      }
      if (pfVar7[2] < fVar3 == (pfVar7[2] == fVar3)) {
        if (*pfVar7 < fVar3 != (*pfVar7 == fVar3)) goto LAB_00567a94;
      }
      else {
        if (*pfVar7 <= fVar3) {
LAB_00567a94:
          if (pfVar7[2] <= fVar3) goto LAB_00567ad3;
        }
        if (fVar2 < ((fVar3 - pfVar7[2]) * (pfVar7[-1] - pfVar7[1])) / (*pfVar7 - pfVar7[2]) +
                    pfVar7[1]) {
          bVar11 = bVar11 == false;
        }
      }
LAB_00567ad3:
      if ((((pfVar7[4] < fVar3 != (pfVar7[4] == fVar3)) && (fVar3 < pfVar7[2])) ||
          ((pfVar7[2] < fVar3 != (pfVar7[2] == fVar3) && (fVar3 < pfVar7[4])))) &&
         (fVar2 < ((fVar3 - pfVar7[4]) * (pfVar7[1] - pfVar7[3])) / (pfVar7[2] - pfVar7[4]) +
                  pfVar7[3])) {
        bVar11 = bVar11 == false;
      }
      if ((((pfVar7[6] < fVar3 != (pfVar7[6] == fVar3)) && (fVar3 < pfVar7[4])) ||
          ((pfVar7[4] < fVar3 != (pfVar7[4] == fVar3) && (fVar3 < pfVar7[6])))) &&
         (fVar2 < ((fVar3 - pfVar7[6]) * (pfVar7[3] - pfVar7[5])) / (pfVar7[4] - pfVar7[6]) +
                  pfVar7[5])) {
        bVar11 = bVar11 == false;
      }
      iVar8 = (0x14 - param_1) + (int)pfVar7;
      iVar9 = local_8 + 4;
      pfVar7 = pfVar7 + 8;
      iVar4 = iVar5 + 4;
      local_8 = iVar9;
    } while (iVar5 + 4 < param_2);
  }
  if (iVar9 < param_2) {
    iVar8 = iVar5 * 8;
    pfVar7 = (float *)(param_1 + 4 + iVar9 * 8);
    param_2 = param_2 - iVar9;
    do {
      uVar6 = (ushort)((uint)iVar5 >> 0x10);
      if (*pfVar7 < fVar3 == (*pfVar7 == fVar3)) {
LAB_00567c02:
        fVar1 = *(float *)(iVar8 + 4 + param_1);
        pfVar10 = (float *)(iVar8 + 4 + param_1);
        iVar5 = CONCAT22(uVar6,(ushort)(fVar1 < fVar3) << 8 |
                               (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
                               (ushort)(fVar1 == fVar3) << 0xe);
        if (fVar1 < fVar3 != (fVar1 == fVar3)) {
          fVar1 = *pfVar7;
          iVar5 = CONCAT22(uVar6,(ushort)(fVar3 < fVar1) << 8 |
                                 (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar3 == fVar1) << 0xe);
          if (fVar3 < fVar1) goto LAB_00567c22;
        }
      }
      else {
        pfVar10 = (float *)(iVar8 + 4 + param_1);
        iVar5 = (uint)uVar6 << 0x10;
        if (*pfVar10 <= fVar3) goto LAB_00567c02;
LAB_00567c22:
        fVar1 = ((fVar3 - *pfVar7) * (*(float *)(iVar8 + param_1) - pfVar7[-1])) /
                (*pfVar10 - *pfVar7) + pfVar7[-1];
        iVar5 = CONCAT22((short)((uint)iVar5 >> 0x10),
                         (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                         (ushort)(fVar1 == fVar2) << 0xe);
        if (fVar1 < fVar2 == 0 && (fVar1 == fVar2) == 0) {
          bVar11 = bVar11 == false;
          iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),bVar11);
        }
      }
      iVar8 = (-4 - param_1) + (int)pfVar7;
      pfVar7 = pfVar7 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),bVar11);
}
