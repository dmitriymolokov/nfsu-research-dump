/* spd-match: far pct=4.85 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005328B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_007361bc;
extern unsigned char *DAT_007361c0;
extern int DAT_007361c4;
int __fastcall FUN_005328b0(float * obj)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  int iVar8;
  
  if (DAT_007361c4 < 2) {
    return *(int *)(DAT_007361bc + 4);
  }
  iVar1 = *(int *)(DAT_007361bc + 4);
  fVar2 = *(float *)(iVar1 + 0x60) - *obj;
  iVar8 = *(int *)(DAT_007361c0 + 4);
  fVar4 = *(float *)(iVar1 + 100) - obj[1];
  fVar3 = *(float *)(iVar1 + 0x68) - obj[2];
  fVar5 = *(float *)(iVar8 + 0x60) - *obj;
  fVar6 = *(float *)(iVar8 + 100) - obj[1];
  fVar7 = *(float *)(iVar8 + 0x68) - obj[2];
  if (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) <=
      SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7)) {
    iVar8 = iVar1;
  }
  return iVar8;
}
