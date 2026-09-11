/* spd-match: far pct=3.03 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_005A67D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

struct ThisCallBox {
  int FUN_005a67d0(int obj, float param_2, uint param_3);
};
int ThisCallBox::FUN_005a67d0(int obj, float param_2, uint param_3)

{
  int iVar1;
  float fVar2;

  int iVar3;
  int *piVar4;
  float local_4;
  
  iVar3 = -1;
  local_4 = 99999.0;
  if (obj < *(int *)(((int)this) + 4)) {
    piVar4 = (int *)(((int)this) + 8 + obj * 4);
    do {
      iVar1 = *piVar4;
      if (((((param_3 & 1) == 0) || (param_2 <= *(float *)(iVar1 + 0x58))) &&
          (((param_3 & 2) == 0 ||
           (*(float *)(iVar1 + 0x58) < param_2 != (*(float *)(iVar1 + 0x58) == param_2))))) &&
         ((fVar2 = ABS(*(float *)(iVar1 + 0x58) - param_2), iVar3 == -1 || (fVar2 < local_4)))) {
        iVar3 = obj;
        local_4 = fVar2;
      }
      obj = obj + 1;
      piVar4 = piVar4 + 1;
    } while (obj < *(int *)(((int)this) + 4));
  }
  return iVar3;
}
