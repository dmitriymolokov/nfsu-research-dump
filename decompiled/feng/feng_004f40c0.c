/* spd-match: far pct=4.55 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F40C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f3bd0();
extern void LAB_004f40d8(void);
void __fastcall FUN_004f40c0(int obj, int param_1)

{

  int iVar1;
  int iVar2;
  
  if (*(int *)(obj + 4) == 0) goto LAB_004f40d8;
  iVar2 = *(int *)(obj + 4) + -4;
  while( true ) {
    iVar1 = obj;
    if (obj == -4) {
      iVar1 = 0;
    }
    if (iVar2 == iVar1) break;
    if ((*(short *)(iVar2 + 0x1c) == 0) || (param_1 != 0)) {
      FUN_004f3bd0();
    }
    if (*(int *)(iVar2 + 4) == 0) {
LAB_004f40d8:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  return;
}
