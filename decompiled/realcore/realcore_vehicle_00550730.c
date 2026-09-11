/* spd-match: far pct=16.33 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_00550730 */
#include "ghidra_compat.h"
extern int __cdecl FUN_00438a60();
extern int __cdecl FUN_004f6910(void*);
extern int __cdecl FUN_004f6970();
extern void __fastcall FUN_00550780();
struct Vehicle { void* p; int field_1c; char field_20; };
void __fastcall FUN_00550730(struct Vehicle* esi, int edx, int val) {
  esi->field_1c = val;
  if (FUN_00438a60() && esi->field_1c != 1) {
    FUN_004f6970();
  } else {
    FUN_004f6910(esi->p);
  }
  FUN_00550780();
}
