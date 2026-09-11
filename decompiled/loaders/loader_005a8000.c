/* spd-match: far pct=6.07 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_005A8000 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006ee1e4;
extern int DAT_00731aa0;
extern unsigned char *DAT_00732338;

struct ThisCallBox {
  void FUN_005a8000(int obj, int param_2, int param_3, int param_4, int param_5);
};
void ThisCallBox::FUN_005a8000(int obj, int param_2, int param_3, int param_4, int param_5)

{

  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  local_10 = obj - ((int)this);
  if (local_10 < -1) {
    local_10 = -1;
  }
  local_8 = ((int)this) + obj;
  if (DAT_006ee1e4 < local_8) {
    local_8 = DAT_006ee1e4;
  }
  iVar3 = obj + 1;
  iVar1 = obj + -1;
  local_4 = &DAT_00731aa0;
  piVar4 = (int *)(&DAT_00732338 + iVar1 * 0x14);
  piVar5 = (int *)(&DAT_00732338 + iVar3 * 0x14);
  local_c = iVar1;
  while ((iVar3 < local_8 || (local_10 < iVar1))) {
    local_4 = local_4 + 1;
    iVar2 = *local_4;
    if (iVar3 < local_8) {
      iVar1 = (piVar5[-2] - param_2) * iVar2;
      piVar5[-2] = piVar5[-2] - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar1 = (piVar5[-1] - param_3) * iVar2;
      piVar5[-1] = piVar5[-1] - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar1 = (*piVar5 - param_4) * iVar2;
      *piVar5 = *piVar5 - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar1 = (piVar5[1] - param_5) * iVar2;
      piVar5[1] = piVar5[1] - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 5;
      iVar1 = local_c;
    }
    if (local_10 < iVar1) {
      iVar1 = (piVar4[-2] - param_2) * iVar2;
      piVar4[-2] = piVar4[-2] - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar1 = (piVar4[-1] - param_3) * iVar2;
      piVar4[-1] = piVar4[-1] - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar1 = (*piVar4 - param_4) * iVar2;
      *piVar4 = *piVar4 - ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffffU)) >> 0x12);
      iVar2 = (piVar4[1] - param_5) * iVar2;
      iVar1 = local_c + -1;
      piVar4[1] = piVar4[1] - ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffffU)) >> 0x12);
      piVar4 = piVar4 + -5;
      local_c = iVar1;
    }
  }
  return;
}
