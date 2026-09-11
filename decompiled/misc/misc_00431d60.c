/* spd-match: far pct=8.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00431D60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006ccb98;
void __fastcall FUN_00431d60(undefined4 * obj, int param_1)

{

  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float local_14 [5];
  
  iVar2 = 0x3f;
  puVar1 = obj;
  do {
    *puVar1 = *(undefined4 *)((param_1 - (int)obj) + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_14[1] = *(float *)(param_1 + 0x104);
  local_14[2] = *(float *)(param_1 + 0x108);
  local_14[0] = 8.96831e-44;
  local_14[3] = _DAT_006ccb98 / (*(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x104));
  pfVar3 = local_14;
  pfVar4 = (float *)(obj + 0x40);
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  return;
}
