/* spd-match: far pct=56.14 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_006307E0 */
#include "ghidra_compat.h"
extern void *DAT_0070d364;
extern void *PTR_FUN_006a8318;
extern void *PTR_FUN_006dfaa0;
void __fastcall FUN_00628ed0(void* self);
void* __fastcall FUN_006307e0(void* self, int edx_unused, int param_2)
{
  *(void**)self = &PTR_FUN_006a8318;
  if (*((void**)self + 4) != 0) {
    void** vtable = *(void***)DAT_0070d364;
    ((void (__stdcall *)(void*))vtable[6])(*((void**)self + 4));
  }
  FUN_00628ed0(self);
  if ((param_2 & 1) != 0) {
    ((void (__stdcall *)(void*, int))PTR_FUN_006dfaa0)(self, 0x40);
  }
  return self;
}
