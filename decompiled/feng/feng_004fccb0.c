/* spd-match: far pct=26.83 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FCCB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fc0e0();
int unaff_ESI;
void __fastcall FUN_004fccb0(int obj)

{
  int iVar1;

  int iVar2;
  int unaff_ESI;
  
  iVar2 = *(int *)(obj + 0x30);
  if (*(char *)(obj + 0x2c) != '\0') {
    iVar2 = FUN_004fc0e0();
  }
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    while ((iVar1 != 0 && (*(int *)(iVar2 + 0xc) < unaff_ESI))) {
      iVar2 = *(int *)(iVar2 + 4);
      iVar1 = *(int *)(iVar2 + 4);
    }
    return;
  }
  return;
}
