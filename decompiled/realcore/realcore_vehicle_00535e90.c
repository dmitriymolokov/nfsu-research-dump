/* spd-match: far pct=16.35 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_00535E90 */
#include "ghidra_compat.h"

#ifndef GHIDRA_COMPAT_H
#define GHIDRA_COMPAT_H
typedef unsigned int undefined4;
typedef unsigned char undefined1;
#endif
extern "C" {
extern float DAT_006b63c0, DAT_006b63c8, _DAT_006b63d4;
int __cdecl FUN_00564db0(int, int);
}
class ThisCallBox {
public:
    void FUN_00535e90(float f);
};
void ThisCallBox::FUN_00535e90(float f) {
    unsigned char* flag = (unsigned char*)this + 0x11;
    float* e8 = (float*)((char*)this + 0xe8);
    if (*flag != 1 && f >= _DAT_006b63d4) {
        *e8 = f;
        if (*e8 > DAT_006b63c8) *e8 = DAT_006b63c8;
        if (*e8 < DAT_006b63c0) *e8 = DAT_006b63c0;
        *flag = 1;
        FUN_00564db0(*(int*)this, *((int*)this + 1));
    }
}
