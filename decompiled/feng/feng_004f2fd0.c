/* spd-match: far pct=10.00 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_004F2FD0 */
#include "ghidra_compat.h"
struct Obj { int pad[8]; int* off2c; };
int __cdecl call_helper(int);
int __cdecl get_val();
void __fastcall FUN_004f2fd0(struct Obj* esi) {
  int eax = get_val();
  if (eax > 0xff) eax = 0xff;
  if (eax < 0) eax = 0;
  call_helper(eax);
}
