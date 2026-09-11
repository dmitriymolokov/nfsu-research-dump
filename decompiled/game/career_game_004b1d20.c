/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B1D20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
extern void LAB_004b1d72(void);
extern void LAB_004b1dc1(void);
void __fastcall FUN_004b1d20(int obj)

{

  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(obj + 0xa0) == 0) {
    if (*(int *)(obj + 0xc) != 0) {
      iVar1 = FUN_004f65d0();
      if (iVar1 != 0) {
        iVar1 = FUN_004ffb70();
        if (iVar1 != 0) goto LAB_004b1dc1;
      }
    }
    if (DAT_0073578c != 0) {
      uVar2 = FUN_004ef050(0xf80dbcae);
      FUN_004f6970(uVar2);
      return;
    }
    iVar1 = 0;
LAB_004b1dc1:
    FUN_004f6970(iVar1);
    return;
  }
  if (*(int *)(obj + 0xc) != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004b1d72;
    }
  }
  if (DAT_0073578c != 0) {
    uVar2 = FUN_004ef050(0xf80dbcae);
    FUN_004f6910(uVar2);
    return;
  }
  iVar1 = 0;
LAB_004b1d72:
  FUN_004f6910(iVar1);
  return;
}
