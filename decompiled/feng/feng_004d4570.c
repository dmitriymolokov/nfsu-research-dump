/* spd-match: far pct=20.55 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D4570 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
extern int DAT_0073578c;
extern int DAT_00735e20;
extern int DAT_00746104;
extern int DAT_00777b4c;
extern int DAT_00777cc4;
undefined4 __fastcall FUN_004d4570(int obj)

{

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0xff;
  }
  iVar1 = DAT_0073578c;
  if (DAT_00777b4c == 8) {
    if (DAT_0073578c == 0) {
      DAT_00735e20 = 0;
      DAT_00777cc4 = 0;
      return *(undefined4 *)(obj + 0xc);
    }
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (iVar2 == 0) {
      DAT_00735e20 = 0;
      DAT_00777cc4 = 0;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 0x18);
    if (iVar2 == 0) {
      DAT_00735e20 = 0;
      DAT_00777cc4 = 0;
      return 0;
    }
    uVar3 = *(undefined4 *)(iVar1 + 8);
  }
  else {
    if (DAT_0073578c == 0) {
      DAT_00735e20 = 0;
      DAT_00777cc4 = 0;
      return *(undefined4 *)(obj + 0xc);
    }
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (iVar2 == 0) {
      DAT_00735e20 = 0;
      DAT_00777cc4 = 0;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 0x18);
    if (iVar2 == 0) {
      DAT_00735e20 = 0;
      DAT_00777cc4 = 0;
      return 0;
    }
    uVar3 = *(undefined4 *)(iVar1 + 8);
  }
  uVar3 = FUN_004f0800(uVar3,iVar2);
  DAT_00735e20 = 0;
  DAT_00777cc4 = 0;
  return uVar3;
}
