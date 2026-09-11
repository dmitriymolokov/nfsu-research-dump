/* spd-match: far pct=16.42 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.45-s0/va_00574E60 */
#include "ghidra_compat.h"
struct Target { float data[8]; };
extern float _DAT_006cc8a8;
extern void* PTR_DAT_00704570;
class ClassBase {
public:
  void __stdcall FUN_00574e60(Target* out, int p1, int p2);
};
void __stdcall ClassBase::FUN_00574e60(Target* out, int p1, int p2) {
  float* self = (float*)this;
  float f0 = self[0];
  float f1 = self[1];
  float f2 = self[2];
  out->data[0] = f0 * _DAT_006cc8a8;
  out->data[4] = (float)(unsigned int)&PTR_DAT_00704570;
  out->data[5] = 0.0f;
  out->data[6] = (float)p1;
  out->data[7] = (float)p2;
  out->data[1] = f1 * _DAT_006cc8a8;
  out->data[2] = f2 * _DAT_006cc8a8;
}
