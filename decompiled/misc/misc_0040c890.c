/* spd-match: far pct=5.69 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040C890 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00701440;
extern int DAT_0071aad8;
extern unsigned char *DAT_0071abb8;
void __fastcall FUN_0040c890(int val, int param_1)

{

  int *piVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x14) + 0x34);
    do {
      *piVar1 = (*piVar1 * 2 - val) + *(int *)(param_1 + 0x18);
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 0xf;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  iVar3 = 0;
  puVar2 = &DAT_00701440;
  while (((*(uint *)(param_1 + 0xc) & *puVar2) == 0 && (*puVar2 != 0))) {
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + 1;
    if (0x70146f < (int)puVar2) {
      *(undefined **)(param_1 + 0x3c) = &DAT_0071aad8;
      return;
    }
  }
  *(undefined4 **)(param_1 + 0x3c) = &DAT_0071abb8 + *(int *)(iVar3 * 0xc + 0x701444) * 0x38;
  return;
}
