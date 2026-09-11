/* spd-match: far pct=5.19 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054BCA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00565b60();
void __fastcall FUN_0054bca0(char * obj, int param_1)

{
  char cVar1;
  int *piVar2;

  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)FUN_00565b60(0x18,0,0,3);
  if (piVar3 != (int *)0x0) {
    cVar1 = *obj;
    piVar2 = piVar3 + 2;
    *(char *)piVar2 = cVar1;
    if (cVar1 != '\0') {
      piVar4 = piVar2;
      do {
        cVar1 = (obj + (1 - (int)piVar2))[(int)piVar4];
        piVar4 = (int *)((int)piVar4 + 1);
        *(char *)piVar4 = cVar1;
      } while (cVar1 != '\0');
    }
    piVar2 = *(int **)(param_1 + 0x288);
    *piVar2 = (int)piVar3;
    *(int **)(param_1 + 0x288) = piVar3;
    piVar3[1] = (int)piVar2;
    *piVar3 = param_1 + 0x284;
  }
  return;
}
