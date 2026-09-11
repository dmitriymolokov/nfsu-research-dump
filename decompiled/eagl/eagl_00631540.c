/* spd-match: far pct=56.14 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_00631540 */
#include "ghidra_compat.h"
extern void *DAT_0070d364;
extern void *PTR_FUN_006a8388;
extern void *PTR_FUN_006dfaa0;
void __fastcall FUN_00628ed0(void* self);
struct Container { void* vptr; char pad[0x1C]; void* obj; };
Container* __fastcall FUN_00631540(Container* self, void* edx, int flags) {
  self->vptr = &PTR_FUN_006a8388;
  if (self->obj != 0) {
    void** vtbl = *(void***)DAT_0070d364;
    ((void (__stdcall *)(void*))vtbl[6])(self->obj);
  }
  FUN_00628ed0(self);
  if ((flags & 1) != 0) {
    ((void (__stdcall *)(Container*, int))PTR_FUN_006dfaa0)(self, 0x30);
  }
  return self;
}
