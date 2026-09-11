/* spd-match: far pct=20.45 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_0057B8F0 */
#include <malloc.h>
extern void *ExceptionList;
extern void *PTR_FUN_006ba4bc;
extern void *LAB_00684ceb;
void *FUN_00578060(void *, int, int);
void * FUN_0057b8f0(int param_1) {
    void *res = 0;
    struct Frame { void *next; void *handler; } f;
    f.handler = &LAB_00684ceb;
    f.next = ExceptionList;
    ExceptionList = &f;
    res = malloc(0x90);
    if (res) {
        FUN_00578060(res, param_1, 0);
        *(void **)res = &PTR_FUN_006ba4bc;
    }
    ExceptionList = f.next;
    return res;
}
