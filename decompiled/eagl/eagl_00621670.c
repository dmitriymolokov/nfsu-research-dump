/* spd-match: far pct=9.09 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00621670 */
#include <windows.h>
extern void* __stdcall FUN_00621390(void* p1, void* p2);
extern void __stdcall FUN_00622c60(void* p1, int p2);
extern void __stdcall FUN_00622c10(void* p1);
extern void __stdcall FUN_00623500(void* p1);
extern void* PTR_FUN_006dfaa0;
void FUN_00621670(int a, int b) {
    unsigned int* ptr;
    unsigned int entry, step;
    ptr = (unsigned int*)FUN_00621390((void*)b, (void*)(a + 4));
    if (!ptr) return;
    while ((entry = *ptr) != 0) {
        step = entry & 0xFFFF;
        if ((entry >> 0x10) == 4) {
            unsigned int obj = ptr[4];
            if (obj && obj != 0xFFFFFFFF) {
                int count = (int)ptr[8];
                if (count <= 0) {
                    int val = *(int*)(obj + 4);
                    FUN_00622c60(&val, 0);
                } else {
                    int i;
                    for (i = 0; i < count; i++) {
                        int val = *(int*)(obj + 4 + i * 8);
                        FUN_00622c60(&val, 0);
                    }
                }
                ((void (__stdcall *)(unsigned int, int))PTR_FUN_006dfaa0)(obj, 8);
            }
            ptr[4] = 0;
        }
        ptr += step;
    }
}
