/* spd-match: far pct=4.46 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_00637610 */
#include <math.h>
extern float DAT_006cc7a4;
extern float _DAT_006a7eb0;
struct StackFrame { float f44; float f48; int i14; int i20; };
int __fastcall FUN_00637610(void* ecx, int dummy, float f2, int p3, int p4) {
    unsigned char* b = (unsigned char*)ecx;
    struct StackFrame sf;
    sf.f44 = f2;
    if (b[0x12]) sf.f44 *= (float)b[0x13];
    if (sf.f44 < DAT_006cc7a4) sf.f44 -= _DAT_006a7eb0;
    else sf.f44 += _DAT_006a7eb0;
    sf.i14 = (int)sf.f44;
    *(short*)(b + 0x10) = (short)sf.i14;
    return 1;
}
