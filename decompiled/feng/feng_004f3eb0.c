/* spd-match: far pct=5.75 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F3EB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f80e0();
extern void LAB_004f3ec8(void);
void __fastcall FUN_004f3eb0(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3)

{

  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  if (*(int *)(obj + 4) == 0) goto LAB_004f3ec8;
  iVar2 = *(int *)(obj + 4) + -4;
  while( true ) {
    iVar1 = obj;
    if (obj == -4) {
      iVar1 = 0;
    }
    if (iVar2 == iVar1) break;
    if (((*(int *)(iVar2 + 0x18) != 0) && (unaff_EBX == *(int *)(iVar2 + 0x18))) &&
       (*(int *)(iVar2 + 0x14) != 0)) {
      FUN_004f80e0(param_2,param_3,unaff_EBX);
    }
    if (*(int *)(iVar2 + 4) == 0) {
LAB_004f3ec8:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  return;
}
