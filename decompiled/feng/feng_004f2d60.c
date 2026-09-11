/* spd-match: far pct=21.21 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F2D60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00514510();
extern unsigned char *DAT_00735704;
void __fastcall FUN_004f2d60(int obj, int param_1)

{
  int iVar1;
  int iVar2;

  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)(obj + 0x10);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    while (piVar4[2] != param_1) {
      piVar4 = (int *)*piVar4;
      if (piVar4 == piVar3) {
        return;
      }
    }
    iVar1 = *piVar4;
    piVar3 = (int *)piVar4[1];
    *piVar3 = iVar1;
    *(int **)(iVar1 + 4) = piVar3;
    FUN_00514510();
    iVar2 = DAT_00735704;
    iVar1 = *(int *)(DAT_00735704 + 0x18);
    *piVar4 = *(int *)(DAT_00735704 + 0x10);
    *(int *)(iVar2 + 0x18) = iVar1 + -1;
    *(int **)(iVar2 + 0x10) = piVar4;
  }
  return;
}
