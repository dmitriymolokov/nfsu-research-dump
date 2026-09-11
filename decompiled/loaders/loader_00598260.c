/* spd-match: far pct=13.89 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00598260 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_00402d30();
int __cdecl FUN_0040a880();
extern int DAT_0078e9e0;
int unaff_EDI;
void __fastcall FUN_00598260(int val, undefined4 param_1, int param_2, int param_3, float param_4)

{
  int iVar1;
  int iVar2;

  int *piVar3;
  int *piVar4;
  int *unaff_EDI;
  
  param_3 = val * 0x1d + param_3;
  piVar4 = *(int **)(param_2 + param_3 * 8);
  if (piVar4 != (int *)(param_2 + param_3 * 8)) {
    piVar3 = (int *)FUN_0040a880();
    if (piVar4 != piVar3) {
      do {
        FUN_00401cd0();
        iVar1 = unaff_EDI[2];
        iVar2 = *unaff_EDI;
        piVar4[0x1d] = unaff_EDI[1];
        piVar4[0x1e] = iVar1;
        piVar4[0x1c] = iVar2;
        piVar4[0x1f] = 0;
        FUN_00402d30(&DAT_0078e9e0,piVar4,-param_4,0);
        piVar4 = (int *)*piVar4;
      } while (piVar4 != piVar3);
    }
  }
  return;
}
