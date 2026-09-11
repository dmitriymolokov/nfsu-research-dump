/* spd-match: far pct=4.73 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00415120 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004151c0();
extern unsigned char *DAT_0071b7b0;
void __fastcall FUN_00415120(int val, int param_1)

{
  int *piVar1;

  int iVar2;
  
  if (val == -0x6edfbf62) {
    piVar1 = (int *)(param_1 + 0x7c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x7c) = 4;
    }
    if (*(int *)(&DAT_0071b7b0 + *(int *)(param_1 + 0x7c) * 4) == 0) {
      do {
        piVar1 = (int *)(param_1 + 0x7c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          *(undefined4 *)(param_1 + 0x7c) = 4;
        }
      } while (*(int *)(&DAT_0071b7b0 + *(int *)(param_1 + 0x7c) * 4) == 0);
      FUN_004151c0();
      return;
    }
  }
  else if (val == -0x4a68e40f) {
    iVar2 = *(int *)(param_1 + 0x7c) + 1;
    *(int *)(param_1 + 0x7c) = iVar2;
    if (4 < iVar2) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    iVar2 = *(int *)(&DAT_0071b7b0 + *(int *)(param_1 + 0x7c) * 4);
    while (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x7c) + 1;
      *(int *)(param_1 + 0x7c) = iVar2;
      if (4 < iVar2) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      iVar2 = *(int *)(&DAT_0071b7b0 + *(int *)(param_1 + 0x7c) * 4);
    }
  }
  FUN_004151c0();
  return;
}
