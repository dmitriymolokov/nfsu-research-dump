/* spd-match: far pct=29.67 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00568570 */
#include <windows.h>
#include <malloc.h>
extern void *ExceptionList;
extern void *FUN_00567e60(void *, int);
struct Frame { void *prev; void *obj; int res; };
int FUN_00568570(int param_1) {
    struct Frame f;
    f.prev = ExceptionList;
    ExceptionList = &f.prev;
    f.obj = malloc(0x74);
    f.res = 0;
    if (f.obj != 0) {
        f.res = (int)FUN_00567e60(f.obj, param_1);
    }
    ExceptionList = f.prev;
    return f.res;
}
