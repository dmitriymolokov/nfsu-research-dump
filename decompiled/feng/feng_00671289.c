/* spd-match: close pct=86.96 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_00671289 */
#include "ghidra_compat.h"
extern int __cdecl FUN_0067122c(void*);
extern int __cdecl FUN_00678217(void*);
struct Data { char _[13]; unsigned char f; void* p; };
int __cdecl FUN_00671289(struct Data* esi) {
  if (FUN_0067122c(esi)) return -1;
  if (esi->f & 0x40) {
    int r = FUN_00678217(esi->p);
    return (r != 0) ? -1 : 0;
  }
  return 0;
}
