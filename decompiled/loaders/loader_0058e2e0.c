/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058E2E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0058dca0();
int __cdecl FUN_0058dff0();
extern int DAT_00731330;
extern int DAT_007313d0;
extern int DAT_00737b20;
undefined4 * __fastcall FUN_0058e2e0(float * obj, byte param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;

  int *piVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int *piVar14;
  int iVar15;
  int *local_1c;
  int *local_18;
  
  piVar9 = DAT_00737b20;
  fVar2 = *obj;
  fVar3 = obj[1];
  fVar4 = obj[2];
  piVar14 = &DAT_00731330;
  local_1c = &DAT_00731330;
  local_18 = DAT_00737b20;
  piVar10 = (int *)FUN_0040a880();
  if (piVar9 != piVar10) {
    do {
      if (&DAT_007313d0 <= piVar14) break;
      pfVar13 = *(float **)local_18[4];
      if ((((pfVar13 != (float *)0x0) &&
           (pfVar13[4] < ABS(fVar2 - *pfVar13) == (pfVar13[4] == ABS(fVar2 - *pfVar13)))) &&
          (pfVar13[5] < ABS(fVar3 - pfVar13[1]) == (pfVar13[5] == ABS(fVar3 - pfVar13[1])))) &&
         (pfVar13[6] < ABS(fVar4 - pfVar13[2]) == (pfVar13[6] == ABS(fVar4 - pfVar13[2])))) {
        if (0 < *(short *)((int)pfVar13 + 0xe)) {
          pfVar13 = (float *)FUN_0058dca0(pfVar13,fVar2,fVar3,fVar4);
        }
        if (pfVar13 != (float *)0x0) {
          sVar1 = *(short *)((int)pfVar13 + 0xe);
          iVar5 = local_18[5];
          iVar12 = 0;
          if (0 < -(int)sVar1) {
            pfVar13 = pfVar13 + 7;
            do {
              if ((int *)0x7313cf < piVar14) break;
              iVar15 = *(short *)pfVar13 * 0x20 + iVar5;
              fVar6 = ABS(fVar2 - *(float *)(iVar15 + 0x10));
              fVar8 = ABS(fVar3 - *(float *)(iVar15 + 0x14));
              fVar7 = ABS(fVar4 - *(float *)(iVar15 + 0x18));
              if ((fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7 <
                   *(float *)(iVar15 + 0x1c) * *(float *)(iVar15 + 0x1c)) &&
                 ((1 << (param_1 & 0x1f) & *(uint *)(iVar15 + 0xc)) != 0)) {
                iVar11 = FUN_0058dff0(*(undefined4 *)(iVar15 + 4));
                *(int *)(iVar11 + 0x10) = iVar15;
                *local_1c = iVar11;
                local_1c = local_1c + 1;
              }
              iVar12 = iVar12 + 1;
              pfVar13 = (float *)((int)pfVar13 + 2);
              piVar14 = local_1c;
            } while (iVar12 < -(int)sVar1);
          }
        }
      }
      local_18 = (int *)*local_18;
    } while (local_18 != piVar10);
    if (piVar14 != &DAT_00731330) {
      *piVar14 = 0;
      return &DAT_00731330;
    }
  }
  return (undefined4 *)0x0;
}
