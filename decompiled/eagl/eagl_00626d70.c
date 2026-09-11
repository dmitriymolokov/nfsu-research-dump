/* spd-match: close pct=84.62 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.4/va_00626D70 */
#include "ghidra_compat.h"

extern void *PTR_FUN_006dfaa0;
extern void *PTR_FUN_006a7ae0;

void __fastcall FUN_00628ed0(void* self);

struct EAGLObj {
    void* vtable;
    int unknown[5];
};

void* __fastcall FUN_00626d70(struct EAGLObj* self, int dummy_edx, byte flags)
{
    self->vtable = &PTR_FUN_006a7ae0;
    FUN_00628ed0(self);
    if ((flags & 1) != 0) {
        ((void (__cdecl *)(void*, size_t))PTR_FUN_006dfaa0)(self, 0x18);
    }
    return self;
}
