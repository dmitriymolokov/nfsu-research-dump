/* spd-match: far pct=16.25 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_005212E0 */
#include <stdlib.h>
struct State { int pad[0x570/4]; int s570, s574, s578, s57c, s580, s584, s588, s58c, s590, s594, s598, s59c, s5a0, s5a4, s5a8; };
void FUN_005212e0(int p) {
  struct State* s = (struct State*)p;
  s->s580 = 0x10; s->s584 = 0x10; s->s588 = 0x10;
  s->s59c = 0x36; s->s5a0 = 0x36;
  s->s570 = 0; s->s574 = 2; s->s578 = 0xc; s->s57c = 0xc;
  s->s58c = 0x12; s->s590 = 0x21; s->s594 = 0x30; s->s598 = 0x33;
  s->s5a4 = 0x46; s->s5a8 = 0x5a;
}
