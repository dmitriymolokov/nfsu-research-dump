/* spd-match: far pct=9.48 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A7B70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006ee1e4;
extern int DAT_00731b20;
extern int DAT_00731f20;
extern int DAT_00732324;
extern int DAT_00732328;
extern int DAT_00732338;
extern int DAT_00733730;
void __fastcall FUN_005a7b70(undefined4 val, undefined4 param_1, undefined4 param_2, uint param_3)

{

  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  DAT_006ee1e4 = param_3;
  DAT_00732324 = param_2;
  DAT_00732328 = param_1;
  DAT_00733730 = val;
  if (0 < (int)param_3) {
    puVar5 = &DAT_00731f20;
    for (uVar2 = param_3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = &DAT_00731b20;
    for (uVar2 = param_3 & 0x3fffffff; piVar4 = (int *)&DAT_00732338, uVar2 != 0; uVar2 = uVar2 - 1)
    {
      *puVar5 = (int)(0x10000 / (longlong)(int)param_3);
      puVar5 = puVar5 + 1;
    }
    do {
      iVar1 = (iVar3 << 0xc) / (int)param_3;
      iVar3 = iVar3 + 1;
      piVar4[1] = iVar1;
      *piVar4 = iVar1;
      piVar4[-1] = iVar1;
      piVar4[-2] = iVar1;
      piVar4 = piVar4 + 5;
    } while (iVar3 < (int)param_3);
  }
  return;
}
