/* spd-match: far pct=13.19 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DCFD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004dd080();
int __cdecl FUN_004eede0();
int __cdecl FUN_004f39a0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004fd1e0();
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern void LAB_004dd034(void);
int __fastcall FUN_004dcfd0(undefined4 val)

{
  int iVar1;

  int iVar2;
  int iVar3;
  
  FUN_004f39a0();
  iVar3 = 1;
  iVar2 = FUN_004f65d0();
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x18) + 1;
  }
  if (DAT_0073578c != 0) {
    iVar1 = *(int *)(DAT_0073578c + 8);
    iVar2 = iVar1 + 0xdc;
    if (iVar2 != 0) {
      iVar2 = FUN_004fd1e0(iVar2);
      if (iVar2 != 0) goto LAB_004dd034;
    }
    FUN_004eede0(iVar1,val,iVar3 + 0x10,0xff);
  }
LAB_004dd034:
  iVar2 = FUN_004f65d0();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x14);
    if (iVar2 != 0) {
      FUN_004dd080(iVar2);
    }
    return iVar2;
  }
  return 0;
}
