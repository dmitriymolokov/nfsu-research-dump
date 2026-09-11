/* spd-match: far pct=17.31 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.3-r2/va_005C51B2 */
#include "ghidra_compat.h"
#include <stdlib.h>

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

void __fastcall FUN_005c51b2(int head)

{
  void *_Memory;

  if (*(undefined4 **)(head + 4) != (undefined4 **)0x0) {
    ((void (__stdcall *)(int))(**(code **)**(undefined4 **)(head + 4)))(1);
  }
  if (*(undefined4 **)(head + 8) != (undefined4 **)0x0) {
    ((void (__stdcall *)(int))(**(code **)**(undefined4 **)(head + 8)))(1);
  }
  _Memory = *(void **)(head + 0xc);
  if (_Memory != (void *)0x0) {
    ((void (__fastcall *)(int))FUN_005c51b2)(head);
    _free(_Memory);
  }
  return;
}
