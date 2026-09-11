/* spd-match: far pct=12.77 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_00558390 */
#include <windows.h>
extern void* ExceptionList;
extern void* __stdcall FUN_0067121a(int);
int __cdecl FUN_005583f0(void*, int);
void* _malloc(unsigned int);
int __cdecl FUN_00558390(int param_1) {
    void* result;
    void* prev_seh = *(void**)__readfsdword(0);
    void* my_seh[2] = { prev_seh, (void*)0x6877d3 };
    __writefsdword(0, (unsigned int)my_seh);
    result = _malloc(0x88c);
    if (result) {
        result = (void*)FUN_005583f0(result, param_1);
    } else {
        result = 0;
    }
    __writefsdword(0, (unsigned int)prev_seh);
    return (int)result;
}
