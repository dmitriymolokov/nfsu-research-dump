/* spd-match: far pct=16.26 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00505200 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_00504320();
extern int DAT_0073571c;
extern int DAT_0073578c;
extern int DAT_00735dd4;
extern int DAT_00746104;
undefined4 __fastcall FUN_00505200(int obj)

{
  int iVar1;

  int iVar2;
  undefined4 uVar3;
  
  DAT_0073571c = *(int *)(*(int *)(obj + 0x40) + 8);
  uVar3 = 0;
  if (*(int *)(*(int *)(obj + 0x40) + 0x14) != 0) {
    FUN_00504320(*(undefined4 *)(obj + 0xc));
    iVar1 = DAT_0073578c;
    if (DAT_0073571c == 3) {
      DAT_00735dd4 = 0;
    }
    else if (DAT_0073571c == 2) {
      DAT_00735dd4 = 1;
    }
    uVar3 = *(undefined4 *)(obj + 0xc);
    if (DAT_0073578c != 0) {
      iVar2 = FUN_004f3f90(&DAT_00746104);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = 0;
        if (*(int *)(iVar2 + 0x18) != 0) {
          uVar3 = FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
        }
      }
    }
  }
  return uVar3;
}
