/* spd-match: far pct=4.17 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F3F20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f7c00();
extern void LAB_004f3f39(void);
void __fastcall FUN_004f3f20(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)

{

  int iVar1;
  int iVar2;
  
  if (*(int *)(obj + 4) == 0) goto LAB_004f3f39;
  iVar2 = *(int *)(obj + 4) + -4;
  while( true ) {
    iVar1 = obj;
    if (obj == -4) {
      iVar1 = 0;
    }
    if (iVar2 == iVar1) break;
    if (((*(int *)(iVar2 + 0x18) != 0) && (param_4 == *(int *)(iVar2 + 0x18))) &&
       (*(int *)(iVar2 + 0x14) != 0)) {
      FUN_004f7c00(param_1,param_2,param_3,param_4);
    }
    if (*(int *)(iVar2 + 4) == 0) {
LAB_004f3f39:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  return;
}
