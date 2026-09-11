/* spd-match: far pct=17.50 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0057BCF0 */
#include <windows.h>
extern void *ExceptionList;
extern void *PTR_FUN_006ba4e8;
extern void *LAB_00686f18;
void __stdcall FUN_00578060(void *a, void *b, int c);
int __stdcall FUN_00647b70(void *p);
void * __stdcall FUN_0057bcf0(void *param_1, void *param_2) {
    void *prev_seh = ExceptionList;
    int seh_scope = -1;
    void *seh_handler = &LAB_00686f18;
    ExceptionList = &prev_seh;
    FUN_00578060(param_1, param_2, 0);
    seh_scope = 0;
    *(void **)param_1 = &PTR_FUN_006ba4e8;
    if (*((void **)param_1 + 8) != NULL) {
        if (FUN_00647b70((char *)param_1 + 0x1c) == 4) {
            *(unsigned char *)(*((char **)param_1 + 8) + 0x71) = 1;
        }
    }
    ExceptionList = prev_seh;
    return param_1;
}
