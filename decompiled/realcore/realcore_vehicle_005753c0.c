/* spd-match: far pct=8.57 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_005753C0 */
#include "ghidra_compat.h"
extern float _DAT_006cc980;
extern void *PTR_FUN_006ba714;
struct Object { void *vptr; int f4; int f8; int fc; float f10; float f14; float f18; int f1c; int f20; };
void __fastcall FUN_005753c0(struct Object *obj, int p1) {
  obj->vptr = &PTR_FUN_006ba714;
  obj->f8 = p1;
  obj->f4 = 0;
  obj->f10 = *(float *)(p1 + 0x64);
  obj->fc = *(int *)(p1 + 0x60);
  obj->f14 = (float)*(unsigned short *)(p1 + 0x3b4) * _DAT_006cc980;
  obj->f18 = *(float *)(p1 + 0x3d4);
  obj->f1c = 0;
  obj->f20 = 0;
}
