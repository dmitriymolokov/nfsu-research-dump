/* spd-match: far pct=20.00 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0055FCA0 */
#include "ghidra_compat.h"
extern int __cdecl FUN_0055fd00();
struct Object { char pad[0x88]; int field_88; char field_8c; };
void __fastcall FUN_0055fca0(unsigned int val, struct Object *this_ptr) {
  if (val > 0xc519bfc2) {
    if (val == 0xd9feec59) goto label_true;
  } else if (val == 0xc519bfc2) {
    goto label_true;
  } else if (val == 0x5073ef13 || val == 0xc519bfc1) {
    this_ptr->field_88 = (val == 0xc519bfc1) ? 0 : 1;
    goto common;
  }
  return;
label_true:
  this_ptr->field_88 = 1;
common:
  FUN_0055fd00();
  this_ptr->field_8c = 1;
}
