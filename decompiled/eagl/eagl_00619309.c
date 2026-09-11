/* spd-match: far pct=14.37 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/m39/va_00619309 */
#include <malloc.h>
#include <string.h>
extern int FUN_0061314d(unsigned int);
extern int FUN_0061319b(void*, int, int, void*);
extern int FUN_00613165(void);
extern void* _malloc(unsigned int);
extern void _free(void*);
int __fastcall FUN_00619309(int param_1) {
    int local_70[10];
    void *local_20, *local_18, *local_14, *local_24, *local_1c;
    int local_10, sz;
    local_20 = local_18 = local_14 = local_24 = local_1c = 0;
    FUN_0061314d(0x47554244);
    memset(local_70, 0, 40);
    local_70[0] = 0x28;
    local_10 = FUN_0061319b(local_70, 0x28, 1, 0);
    if (local_10 < 0) goto exit;
    sz = *(int*)(param_1 + 0xbc);
    if (sz) {
        local_20 = _malloc(sz * 4);
        local_18 = _malloc(sz * 8);
        local_14 = _malloc(sz * 16);
    }
exit:
    _free(local_20);
    _free(local_18);
    _free(local_24);
    _free(local_1c);
    _free(local_14);
    FUN_00613165();
    return local_10;
}
