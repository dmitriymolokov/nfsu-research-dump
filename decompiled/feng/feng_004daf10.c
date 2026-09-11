/* spd-match: far pct=5.36 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DAF10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004d8270();
int __cdecl FUN_004d82f0();
int __cdecl FUN_004dbad0();
int __cdecl FUN_00504450();
int __cdecl FUN_005044b0();
int unaff_ESI;
void __fastcall FUN_004daf10(int val)

{
  bool bVar1;
  char cVar2;

  int iVar3;
  int unaff_ESI;
  
  iVar3 = FUN_004dbad0();
  if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x10), iVar3 != 0)) {
    if (val == 0x65) {
      FUN_005044b0(iVar3,0);
      *(undefined1 *)(unaff_ESI + 3000) = 1;
    }
    else if (val == 100) {
      bVar1 = true;
      if ((*(char *)(iVar3 + 0x11) == '\x02') && (cVar2 = FUN_004d8270(), cVar2 == '\0')) {
        bVar1 = false;
      }
      if (((*(char *)(iVar3 + 0x11) != '\x03') || (cVar2 = FUN_004d82f0(), cVar2 != '\0')) &&
         (bVar1)) {
        FUN_00504450();
        return;
      }
    }
  }
  return;
}
