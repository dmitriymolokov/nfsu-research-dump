/* spd-match: far pct=16.06 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0050D130 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004c96c0();
int __cdecl FUN_004f3f90();
extern int DAT_00746104;
void __fastcall FUN_0050d130(int obj)

{
  char cVar1;

  int iVar2;
  
  cVar1 = *(char *)(obj + 0x11);
  if (cVar1 == '\0') {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0))
    {
      (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x2cbd3c8d,0,0,*(int *)(iVar2 + 0x18));
      return;
    }
  }
  else if (cVar1 == '\x01') {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0))
    {
      (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x2cbd3c6b,0,0,*(int *)(iVar2 + 0x18));
      return;
    }
  }
  else {
    if (cVar1 == '\x02') {
      FUN_004c96c0(0x2cbd3c6c);
      return;
    }
    if (cVar1 == '\x03') {
      FUN_004c96c0(0x2cbd3c6d);
      return;
    }
    if (cVar1 == '\x04') {
      FUN_004c96c0(0x2cbd3c8f);
    }
  }
  return;
}
