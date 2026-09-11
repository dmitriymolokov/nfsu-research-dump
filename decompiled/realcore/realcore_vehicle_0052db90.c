/* spd-match: far pct=19.28 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_0052DB90 */
#include "ghidra_compat.h"
extern float _DAT_006f8154;
float __cdecl FUN_00564b10(int val);
void __cdecl FUN_0052db90(void *obj) {
    float f1, f2;
    struct Data { float pad[0x24]; float m90, m94, m60, m64, m68, m98; };
    struct Data *d = (struct Data*)(*(char**)((char*)obj + 0x10) + 0x234 - 0x90);
    f1 = FUN_00564b10(0x8000);
    f2 = FUN_00564b10(0x4000);
    *(float*)((char*)obj + 0x220) = (f1 * d->m90 - f2 * d->m94) * _DAT_006f8154 + d->m60;
    *(float*)((char*)obj + 0x224) = (f1 * d->m94 + f2 * d->m90) * _DAT_006f8154 + d->m64;
    *(float*)((char*)obj + 0x228) = d->m68 + d->m98;
    f1 = FUN_00564b10(0xC000);
    f2 = FUN_00564b10(0x0);
    *(float*)((char*)obj + 0x230) = (f1 * d->m90 - f2 * d->m94) * _DAT_006f8154 + d->m60;
    *(float*)((char*)obj + 0x234) = (f1 * d->m94 + f2 * d->m90) * _DAT_006f8154 + d->m64;
    *(float*)((char*)obj + 0x238) = d->m68 + d->m98;
}
