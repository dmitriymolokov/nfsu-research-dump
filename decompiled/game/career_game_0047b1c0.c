/* spd-match: far pct=57.89 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047B1C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_0070d364;
extern unsigned char *PTR_FUN_006dfaa0;
void __fastcall FUN_0047b1c0(int obj)

{

  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(obj + 0xc) = 0;
  if (*(void **)(obj + 0x14) != (void *)0x0) {
    _free(*(void **)(obj + 0x14));
    *(undefined4 *)(obj + 0x14) = 0;
  }
  *(undefined4 *)(obj + 0x18) = 0;
  if (*(int *)(obj + 0x1c) != 0) {
    (*(code *)PTR_FUN_006dfaa0)(*(int *)(obj + 0x1c),0x40);
    *(undefined4 *)(obj + 0x1c) = 0;
  }
  *(undefined4 *)(obj + 0x20) = 0;
  piVar2 = (int *)(obj + 0x38);
  iVar1 = 4;
  do {
    if (*piVar2 != 0) {
      (**(code **)(*DAT_0070d364 + 0x2c))(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
