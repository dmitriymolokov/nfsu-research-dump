/* spd-match: far pct=28.57 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055FC20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005600c0();
int unaff_ESI;
void __fastcall FUN_0055fc20(int obj)

{

  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  
  FUN_005600c0(*(undefined4 *)(obj + 0x98));
  *(undefined1 *)(obj + 0x8c) = 1;
  if (unaff_ESI == 0x72619778) {
    uVar3 = *(int *)(obj + 0x90) - *(int *)(obj + 0x80);
    *(uint *)(obj + 0x90) = uVar3;
    *(uint *)(obj + 0x90) = uVar3 & ((int)uVar3 < 0) - 1;
    return;
  }
  if (unaff_ESI == -0x6ee3f5b5) {
    iVar1 = *(int *)(obj + 0x90) + *(int *)(obj + 0x80);
    *(int *)(obj + 0x90) = iVar1;
    iVar2 = *(int *)(obj + 0x7c) - *(int *)(obj + 0x80);
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    *(int *)(obj + 0x90) = iVar2;
  }
  return;
}
