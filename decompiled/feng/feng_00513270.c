/* spd-match: far pct=14.58 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00513270 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004af5d0();
int __cdecl FUN_004f8340();
int __cdecl FUN_004f8910();
int __cdecl FUN_00513310();
int unaff_EDI;
void __fastcall FUN_00513270(int obj)

{
  int iVar1;

  int unaff_EDI;
  
  FUN_004af5d0();
  iVar1 = *(int *)(obj + 0x40);
  if (unaff_EDI == -0x6edfbf62) {
    if ((iVar1 != *(int *)(obj + 0x44)) && (*(int *)(obj + 0x44) != obj + 0x44)) {
      *(undefined4 *)(obj + 0x40) = *(undefined4 *)(iVar1 + 4);
    }
  }
  else if (((unaff_EDI == -0x4a68e40f) &&
           (*(undefined4 **)(obj + 0x40) != *(undefined4 **)(obj + 0x48))) &&
          (*(int *)(obj + 0x44) != obj + 0x44)) {
    *(undefined4 *)(obj + 0x40) = **(undefined4 **)(obj + 0x40);
  }
  if (*(int *)(obj + 0x40) != iVar1) {
    FUN_004f8910();
    FUN_00513310();
    if (unaff_EDI == -0x6edfbf62) {
      FUN_004f8340(*(undefined4 *)(obj + 0xc));
      return;
    }
    FUN_004f8340(*(undefined4 *)(obj + 0xc));
  }
  return;
}
