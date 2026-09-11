/* spd-match: far pct=4.64 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_00443920 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_0044397c(...);
extern void LAB_004439b5(...);

struct ThisCallBox {
  float * FUN_00443920(int obj, float *param_2);
};
float * ThisCallBox::FUN_00443920(int obj, float *param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;

  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float local_10;
  int local_c [3];
  
  iVar1 = *(int *)(((int)this) + 0x14);
  iVar6 = *(int *)(((int)this) + 0xc) + *(char *)(obj + 8) * 0x28;
  iVar4 = (obj - iVar1) / 0x14;
  iVar5 = (int)*(short *)(iVar6 + 2);
  iVar7 = 1;
  if (iVar4 == iVar5) {
    if (*(char *)(iVar6 + 1) != '\0') {
      iVar7 = *(short *)(iVar6 + 4) + -1;
      if (iVar7 < 0) {
        local_c[1] = 0;
      }
      else {
        local_c[1] = iVar1 + iVar7 * 0x14;
      }
      goto LAB_0044397c;
    }
  }
  else {
    local_c[1] = obj + -0x14;
LAB_0044397c:
    iVar7 = 2;
  }
  if (iVar4 == *(short *)(iVar6 + 4) + -1) {
    if (*(char *)(iVar6 + 1) == '\0') goto LAB_004439b5;
    if (iVar5 < 0) {
      local_c[iVar7] = 0;
    }
    else {
      local_c[iVar7] = iVar1 + iVar5 * 0x14;
    }
  }
  else {
    local_c[iVar7] = obj + 0x14;
  }
  iVar7 = iVar7 + 1;
LAB_004439b5:
  pfVar8 = (float *)0x0;
  iVar6 = 0;
  local_10 = 0.0;
  if (iVar7 != 0) {
    do {
      pfVar2 = (float *)local_c[iVar6];
      fVar3 = SQRT((*param_2 - *pfVar2) * (*param_2 - *pfVar2) +
                   (param_2[1] - pfVar2[1]) * (param_2[1] - pfVar2[1]));
      if ((pfVar8 == (float *)0x0) || (fVar3 < local_10)) {
        pfVar8 = pfVar2;
        local_10 = fVar3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  return pfVar8;
}
