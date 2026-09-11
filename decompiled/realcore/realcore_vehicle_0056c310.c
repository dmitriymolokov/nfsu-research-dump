/* spd-match: far pct=8.48 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0056C310 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00580b00();
void __fastcall FUN_0056c310(undefined4 val)

{

  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 4) = val;
  FUN_00580b00(unaff_ESI + 0x40);
  if (*(int *)(unaff_ESI + 0x458) != *(int *)(unaff_ESI + 0x710)) {
    *(int *)(unaff_ESI + 0x710) = *(int *)(unaff_ESI + 0x458);
    *(undefined4 *)(unaff_ESI + 0x714) = 0xffffffff;
  }
  if (*(int *)(unaff_ESI + 0x45c) != *(int *)(unaff_ESI + 0x720)) {
    *(int *)(unaff_ESI + 0x720) = *(int *)(unaff_ESI + 0x45c);
    *(undefined4 *)(unaff_ESI + 0x724) = 0xffffffff;
  }
  if (*(int *)(unaff_ESI + 0x464) != *(int *)(unaff_ESI + 0x750)) {
    *(int *)(unaff_ESI + 0x750) = *(int *)(unaff_ESI + 0x464);
    *(undefined4 *)(unaff_ESI + 0x754) = 0xffffffff;
  }
  if (*(int *)(unaff_ESI + 0x460) != *(int *)(unaff_ESI + 0x730)) {
    *(int *)(unaff_ESI + 0x730) = *(int *)(unaff_ESI + 0x460);
    *(undefined4 *)(unaff_ESI + 0x734) = 0xffffffff;
  }
  if (*(int *)(unaff_ESI + 0x460) != *(int *)(unaff_ESI + 0xe40)) {
    *(int *)(unaff_ESI + 0xe40) = *(int *)(unaff_ESI + 0x460);
    *(undefined4 *)(unaff_ESI + 0xe44) = 0xffffffff;
  }
  if (*(int *)(unaff_ESI + 0x460) != *(int *)(unaff_ESI + 0xe60)) {
    *(int *)(unaff_ESI + 0xe60) = *(int *)(unaff_ESI + 0x460);
    *(undefined4 *)(unaff_ESI + 0xe64) = 0xffffffff;
  }
  return;
}
