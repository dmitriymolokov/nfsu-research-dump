/* spd-match: far pct=18.18 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_0057A680 */
#include <windows.h>
struct Vehicle { char gap[0x1d4]; void* sub_ptr; };
extern int __stdcall FUN_00647b70(void* p);
int __fastcall FUN_0057a680(void* esi, void* edx) {
    void* p = *(void**)((char*)esi + 0x1d4);
    int ret = FUN_00647b70((char*)p + 0x1c);
    if (ret == 6) {
        return *(int*)((char*)p + 0x90);
    }
    return 0;
}
