/* spd-match: far pct=28.05 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A9AF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_005a9b21(void);
int __fastcall FUN_005a9af0(int obj)

{
  byte *pbVar1;
  int *piVar2;

  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
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
          goto LAB_005a9b21;
        }
        break;
      }
    }
  }
  iVar4 = 0;
LAB_005a9b21:
  pcVar6 = "_WHEEL_INNER_MASK";
  uVar5 = 0x5f;
  do {
    iVar4 = iVar4 * 0x21 + uVar5;
    pbVar1 = (byte *)(pcVar6 + 1);
    uVar5 = (uint)*pbVar1;
    pcVar6 = pcVar6 + 1;
  } while (*pbVar1 != 0);
  return iVar4;
}
