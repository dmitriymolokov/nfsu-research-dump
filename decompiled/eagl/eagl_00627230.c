/* spd-match: close pct=84.62 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.4/va_00627230 */
#include "ghidra_compat.h"

extern void *PTR_FUN_006dfaa0;
extern void *PTR_FUN_006a7e50;

void __fastcall FUN_00628ed0(undefined4 *param_1);

struct EaglContract {
  void *vtable;
};

struct ThisCallBox {
  undefined4 * FUN_00627230(byte param_2);
};

undefined4 * ThisCallBox::FUN_00627230(byte param_2)
{
  EaglContract *self = (EaglContract *)this;
  self->vtable = &PTR_FUN_006a7e50;
  FUN_00628ed0((undefined4 *)self);
  if (param_2 & 1) {
    ((void (__cdecl *)(void *, int))PTR_FUN_006dfaa0)(self, 0x14);
  }
  return (undefined4 *)self;
}
