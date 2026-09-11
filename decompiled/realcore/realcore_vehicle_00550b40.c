/* spd-match: close pct=94.19 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00550B40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00550b40(int obj)

{
  void *_Memory;

  int iVar1;
  undefined4 *puVar2;
  
  _free(*(void **)(obj + 0x34));
  *(undefined4 *)(obj + 0x34) = 0;
  puVar2 = (undefined4 *)(obj + 0x38);
  iVar1 = 6;
  do {
    _Memory = (void *)*puVar2;
    if (_Memory != (void *)0x0) {
      if (*(void **)((int)_Memory + 0x10) != (void *)0x0) {
        _free(*(void **)((int)_Memory + 0x10));
      }
      *(undefined4 *)((int)_Memory + 0x10) = 0;
      _free(_Memory);
    }
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
