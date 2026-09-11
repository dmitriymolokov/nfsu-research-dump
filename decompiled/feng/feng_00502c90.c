/* spd-match: far pct=7.94 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00502C90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_006b66e4;
int __fastcall FUN_00502c90(int val, undefined4 param_1, int param_2)

{

  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_2 + 0x1c) != 0) {
    iVar2 = *(int *)(param_2 + 0x20) + 4;
    do {
      if ((int)*(char *)(iVar2 + 3) == *(int *)(&DAT_006b66e4 + val * 4)) {
        return uVar1 * 0x38 + *(int *)(param_2 + 0x20);
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x38;
    } while (uVar1 < *(uint *)(param_2 + 0x1c));
  }
  return 0;
}
