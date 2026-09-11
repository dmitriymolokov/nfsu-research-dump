/* spd-match: far pct=21.35 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063E300 */
#include <windows.h>
#include <string.h>
#include <malloc.h>
extern int __stdcall FUN_0063cf70(void* p1, void* p2, int p3);
extern int __stdcall FUN_0063a150(void* p1);
extern int __stdcall FUN_0063ce90(void* p1, void* p2);
int __cdecl FUN_0063e300(void* param_1, void* param_2) {
    DWORD len;
    char* buf;
    DWORD drives;
    int i;
    SetLastError(0);
    len = GetLogicalDriveStringsA(0, NULL);
    buf = (char*)_alloca((len + 0x803) & ~3);
    if (FUN_0063cf70(param_1, buf, len + 0x7ff) == 0) {
        FUN_0063a150(buf);
    }
    FUN_0063ce90(buf, param_2);
    GetLogicalDriveStringsA(len, buf);
    drives = GetLogicalDrives();
    i = 0;
    while (buf[0] != '\0') {
        if ((drives & (1 << (i & 0x1f))) != 0) {
            if (_stricmp(buf, (char*)param_2) == 0) return i + 'A';
            while (*buf != '\0') buf++;
            buf++;
        }
        i++;
        if (i > 31) return 0;
    }
    return 0;
}
