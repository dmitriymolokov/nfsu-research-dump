/* spd-match: far pct=17.97 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005627E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f6850();
int __cdecl FUN_00562690();
int __cdecl FUN_005628a0();
int __cdecl FUN_0059fb80();
int unaff_ESI;
void __fastcall FUN_005627e0(int val)

{
  int UNK_006bc76c[4];

  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x84) + val;
  *(int *)(unaff_ESI + 0x84) = iVar1;
  if (2 < iVar1) {
    *(undefined4 *)(unaff_ESI + 0x84) = 3;
  }
  if (*(int *)(unaff_ESI + 0x84) < 1) {
    *(undefined4 *)(unaff_ESI + 0x84) = 0;
  }
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f6850(iVar1);
  *(undefined4 *)(unaff_ESI + 0x8c) =
       *(undefined4 *)((char *)UNK_006bc76c + *(int *)(unaff_ESI + 0x84) * 4);
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f6850(iVar1);
  FUN_005628a0();
  FUN_00562690();
  return;
}
