/* spd-match: far pct=8.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058A240 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0040db20();
int __cdecl FUN_00545210();
int __cdecl FUN_00589da0();
extern int DAT_006f089c;
extern unsigned char *DAT_00737bc4;
void __fastcall FUN_0058a240(undefined4 val)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;

  int *piVar5;
  int iVar6;
  
  piVar1 = DAT_00737bc4;
  piVar5 = (int *)FUN_0040a880();
  while (piVar3 = piVar1, piVar3 != piVar5) {
    piVar1 = (int *)*piVar3;
    iVar6 = FUN_00545210();
    if ((10 < iVar6) && (iVar6 = FUN_0040db20(val), iVar6 != 0)) {
      if (300 < DAT_006f089c - piVar3[5]) {
        piVar2 = (int *)piVar3[1];
        piVar3[5] = DAT_006f089c;
        iVar6 = *piVar3;
        *piVar2 = iVar6;
        *(int **)(iVar6 + 4) = piVar2;
        piVar4 = DAT_00737bc4;
        piVar2 = DAT_00737bc4 + 1;
        DAT_00737bc4 = piVar3;
        *piVar2 = (int)piVar3;
        piVar3[1] = (int)&DAT_00737bc4;
        *piVar3 = (int)piVar4;
      }
      FUN_00589da0(piVar3);
    }
  }
  return;
}
