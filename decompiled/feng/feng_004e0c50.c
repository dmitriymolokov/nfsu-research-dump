/* spd-match: far pct=10.14 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E0C50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
extern void LAB_004e0ca2(void);
void __fastcall FUN_004e0c50(int obj)

{

  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(obj + 0xc0) = 0xffffffff;
  if (*(int *)(obj + 0xc) != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004e0ca2;
    }
  }
  if (DAT_0073578c != 0) {
    uVar2 = FUN_004ef050(0x7af8fe3f);
    FUN_004f6910(uVar2);
    return;
  }
  iVar1 = 0;
LAB_004e0ca2:
  FUN_004f6910(iVar1);
  return;
}
