/* spd-match: far pct=6.74 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00567160 */
#include <stddef.h>
struct Obj { int pad[4]; int f10; int f14; int f18; int f1c; int pad2[2]; int f24; int f28; };
extern int __cdecl FUN_00566e60(void);
int* __fastcall FUN_00567160(struct Obj* p) {
  int* puVar1;
  if (p->f10 == 0 && (p->f14 & 1)) FUN_00566e60();
  puVar1 = (int*)p->f10;
  p->f18++;
  if (p->f10 != 0) {
    int* next = (int*)*(int*)p->f10;
    if (p->f1c < p->f18) p->f1c = p->f18;
    p->f10 = (int)next;
    if ((p->f14 & 2) && (p->f28 >> 2) > 0) {
      int count = p->f28 >> 2;
      int* dst = (int*)puVar1;
      while(count--) *dst++ = 0;
    }
  }
  return puVar1;
}
