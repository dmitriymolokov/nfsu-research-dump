/* spd-match: far pct=27.35 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00554420 */
#include <windows.h>
extern int __stdcall FUN_004134a0(const char* name, int flags);
extern int __fastcall FUN_005544a0(void* ecx_param);
int FUN_00554420(int param1) {
    int result = 0;
    int object = 0;
    __try {
        object = FUN_004134a0("OnlineGameRoomChallenge", 0);
        if (object != 0) {
            result = FUN_005544a0((void*)object);
        }
    } __except (0x6881d3) {
        result = 0;
    }
    return result;
}
