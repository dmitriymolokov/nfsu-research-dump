/* spd-match: far pct=12.24 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.G.1-filter100/va_005408F0 */
#include <windows.h>
struct Data { unsigned long d[4]; };
class ThisCallBox {
public:
    void __stdcall FUN_005408f0(Data* dest, unsigned long p1, unsigned long p2, unsigned long p3);
};
void __stdcall ThisCallBox::FUN_005408f0(Data* dest, unsigned long p1, unsigned long p2, unsigned long p3) {
    unsigned long* src = (unsigned long*)this;
    src[0] = p1;
    src[1] = p2;
    src[2] = p3;
    dest[0] = *(Data*)this;
}
