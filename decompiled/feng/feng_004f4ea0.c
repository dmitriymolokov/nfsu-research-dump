/* spd-match: far pct=10.48 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_004F4EA0 */
#include <windows.h>
extern int __stdcall FUN_004f4d00(void* edi, short* p, int zero);
float __cdecl FUN_004f4ea0(short* obj, int param_1) {
    float result;
    short sVar1;
    int edi = 0;
    result = (float)FUN_004f4d00((void*)edi, obj, 0);
    sVar1 = *obj++;
    if (sVar1 != 0) {
        do {
            if (((param_1 & 0x20) != 0) || (sVar1 != 0x0A && sVar1 != 0x5E)) {
                float fVar2 = (float)FUN_004f4d00((void*)edi, obj, 0);
                if (result < fVar2) result = fVar2;
            }
            sVar1 = *obj++;
        } while (sVar1 != 0);
    }
    return result;
}
