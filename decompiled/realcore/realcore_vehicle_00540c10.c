/* spd-match: far pct=66.67 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00540C10 */
#include <windows.h>

void __fastcall FUN_00540c10(int *obj) {
    int *p = (int*)((char*)obj + 0x38);
    *p = (int)p;
    *(p + 1) = (int)p;
}
