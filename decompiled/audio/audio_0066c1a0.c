/* spd-match: far pct=32.48 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0066C1A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0066c0c0();
int unaff_ESI;
void __fastcall FUN_0066c1a0(int obj)

{
  int iVar1;

  DWORD DVar2;
  int *unaff_ESI;
  bool bVar3;
  
  if (*unaff_ESI != 0) {
    return;
  }
  if (unaff_ESI[3] == *(int *)(obj + 0x84)) {
    DVar2 = GetTickCount();
    *(DWORD *)(obj + 200) = DVar2 - 1000;
    iVar1 = unaff_ESI[2];
    if (iVar1 == 1) {
      unaff_ESI[2] = 2;
      FUN_0066c0c0();
      return;
    }
    if (iVar1 == 2) {
      if (*(int *)(obj + 0x80) != 2) {
        return;
      }
      *(undefined4 *)(obj + 0x80) = 4;
      return;
    }
    if (iVar1 != 3) {
      return;
    }
    bVar3 = *(int *)(obj + 0x80) == 4;
  }
  else {
    bVar3 = unaff_ESI[2] == 1;
  }
  if (bVar3) {
    *(undefined4 *)(obj + 0x80) = 5;
  }
  return;
}
