/* spd-match: far pct=41.18 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047AFC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0061ef30();
extern unsigned char *PTR_FUN_006dfaa0;
void __fastcall FUN_0047afc0(int obj)

{
  int iVar1;

  *(undefined4 *)(obj + 8) = 0;
  *(undefined4 *)(obj + 0x20) = 0;
  *(undefined4 *)(obj + 0xc) = 0;
  *(undefined4 *)(obj + 0x28) = 0;
  *(undefined4 *)(obj + 0x14) = 0;
  *(undefined4 *)(obj + 0x24) = 0;
  *(undefined4 *)(obj + 0x2c) = 0;
  *(undefined1 *)(obj + 0x30) = 0;
  if (*(int **)(obj + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(obj + 0x10) + 0x1c))(1);
  }
  if (*(void **)(obj + 0x14) != (void *)0x0) {
    _free(*(void **)(obj + 0x14));
  }
  iVar1 = *(int *)(obj + 0x1c);
  if (iVar1 != 0) {
    FUN_0061ef30();
    (*(code *)PTR_FUN_006dfaa0)(iVar1,0x2c);
  }
  return;
}
