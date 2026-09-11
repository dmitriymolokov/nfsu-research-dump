/* spd-match: far pct=16.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00572D20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00572b50();
int unaff_ESI;
undefined4 __fastcall FUN_00572d20(undefined4 val)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;

  int *piVar4;
  int unaff_ESI;
  
  piVar4 = (int *)FUN_00572b50(val,0);
  if (piVar4 != (int *)0x0) {
    iVar1 = *piVar4;
    piVar2 = (int *)piVar4[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    puVar3 = *(undefined4 **)(unaff_ESI + 0x6c);
    *puVar3 = piVar4;
    *(int **)(unaff_ESI + 0x6c) = piVar4;
    piVar4[1] = (int)puVar3;
    *piVar4 = unaff_ESI + 0x68;
    return 1;
  }
  return 0;
}
