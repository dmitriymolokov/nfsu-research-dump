/* spd-match: far pct=11.99 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00566BF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
int unaff_EDI;
void __fastcall FUN_00566bf0(float * obj)

{
  float fVar1;
  float fVar2;
  float fVar3;

  uint uVar4;
  float *unaff_EDI;
  float local_50 [4];
  float local_40 [11];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_40[0] = *obj;
  local_40[1] = obj[1];
  local_40[2] = obj[2];
  local_40[4] = obj[4];
  local_40[6] = obj[6];
  local_40[8] = obj[8];
  local_40[3] = obj[3];
  local_40[5] = obj[5];
  local_40[10] = obj[10];
  local_40[7] = obj[7];
  local_40[9] = obj[9];
  fVar1 = local_40[10] + local_40[5] + local_40[0];
  local_14 = obj[0xb];
  local_10 = obj[0xc];
  local_c = obj[0xd];
  local_8 = obj[0xe];
  local_4 = obj[0xf];
  local_50[0] = 1.4013e-45;
  local_50[1] = 2.8026e-45;
  local_50[2] = 0.0;
  if (DAT_006cc7a4 < fVar1) {
    fVar1 = SQRT(fVar1 + _DAT_006cc7bc);
    unaff_EDI[3] = _DAT_006cc7dc * fVar1;
    fVar1 = _DAT_006cc7dc / fVar1;
    *unaff_EDI = (local_40[6] - local_40[9]) * fVar1;
    unaff_EDI[1] = (local_40[8] - local_40[2]) * fVar1;
    unaff_EDI[2] = (local_40[1] - local_40[4]) * fVar1;
    return;
  }
  uVar4 = (uint)(local_40[0] < local_40[5]);
  if (local_40[uVar4 * 5] < local_40[10]) {
    uVar4 = 2;
  }
  fVar1 = local_50[uVar4];
  fVar2 = local_50[(int)fVar1];
  fVar3 = SQRT((local_40[uVar4 * 5] - (local_40[(int)fVar2 * 5] + local_40[(int)fVar1 * 5])) +
               _DAT_006cc7bc);
  local_50[uVar4] = _DAT_006cc7dc * fVar3;
  if (fVar3 != DAT_006cc7a4) {
    fVar3 = _DAT_006cc7dc / fVar3;
  }
  local_50[3] = (local_40[(int)fVar2 + (int)fVar1 * 4] - local_40[(int)fVar1 + (int)fVar2 * 4]) *
                fVar3;
  local_50[(int)fVar1] =
       (local_40[uVar4 + (int)fVar1 * 4] + local_40[(int)fVar1 + uVar4 * 4]) * fVar3;
  local_50[(int)fVar2] =
       (local_40[uVar4 + (int)fVar2 * 4] + local_40[(int)fVar2 + uVar4 * 4]) * fVar3;
  *unaff_EDI = local_50[0];
  unaff_EDI[1] = local_50[1];
  unaff_EDI[2] = local_50[2];
  unaff_EDI[3] = local_50[3];
  return;
}
