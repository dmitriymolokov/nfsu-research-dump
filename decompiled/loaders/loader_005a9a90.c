/* spd-match: far pct=28.05 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A9A90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006ba148;
extern void LAB_005a9ac1(void);
int __fastcall FUN_005a9a90(int obj)

{
  byte *pbVar1;
  int *piVar2;

  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  
  iVar4 = *(int *)(obj + 0x490);
  if (iVar4 == 0) {
    return 0;
  }
  piVar3 = *(int **)(iVar4 + 0x14);
  piVar2 = piVar3 + *(short *)(iVar4 + 0x1c) * 2;
  if (piVar3 != (int *)0x0) {
    for (; piVar3 < piVar2; piVar3 = piVar3 + 2) {
      if (*piVar3 == 0x10c98090) {
        if (piVar3 != (int *)0x0) {
          iVar4 = piVar3[1];
          goto LAB_005a9ac1;
        }
        break;
      }
    }
  }
  iVar4 = 0;
LAB_005a9ac1:
  puVar6 = &DAT_006ba148;
  uVar5 = 0x5f;
  do {
    iVar4 = iVar4 * 0x21 + uVar5;
    pbVar1 = puVar6 + 1;
    uVar5 = (uint)*pbVar1;
    puVar6 = puVar6 + 1;
  } while (*pbVar1 != 0);
  return iVar4;
}
