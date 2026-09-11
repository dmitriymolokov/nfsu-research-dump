/* spd-match: far pct=53.33 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00573970 */
#include "ghidra_compat.h"
struct Data { int pad[2]; int v8; int vc; int v10; int v14; int v18; int v1c; int v20; };
void __fastcall FUN_00573970(struct Data *p, int edx, int arg1) {
  p->v8 = edx;
  p->v14 = arg1;
  p->v10 = 0;
  p->vc = 0;
  p->v1c = 0;
  p->v18 = 0;
  p->v20 = 0;
}
