/* spd-match: far pct=13.51 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DC550 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int unaff_EBX;
undefined4 * __fastcall FUN_004dc550(undefined4 * obj)

{
  undefined4 *puVar1;

  undefined4 *puVar2;
  int unaff_EBX;
  int iVar3;
  
  puVar1 = (undefined4 *)*obj;
  iVar3 = 0;
  puVar2 = (undefined4 *)FUN_0040a880();
  while( true ) {
    if (puVar1 == puVar2) {
      return (undefined4 *)0x0;
    }
    if (unaff_EBX == iVar3) break;
    puVar1 = (undefined4 *)*puVar1;
    iVar3 = iVar3 + 1;
  }
  return puVar1;
}
