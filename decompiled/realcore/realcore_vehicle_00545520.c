/* spd-match: far pct=45.78 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00545520 */
#include <stddef.h>
extern void __stdcall FUN_00545af0(void* p1, int p2, void* p3);
extern void __fastcall FUN_005458f0(void* ecx);
extern void __cdecl FUN_00671102(void* p1);
void __fastcall FUN_00545520(char* ecx) {
    char* base = ecx + 8;
    char* end = base + *(int*)(ecx + 4);
    char* esi = 0;
    char* cur = base;
    while (cur != end) {
        if (*(int*)cur == 0x33310001) {
            esi = cur + 8;
        }
        cur += *(int*)(cur + 4) + 8;
    }
    {
        void* pBase = *(void**)(esi + 0x70);
        FUN_00545af0(pBase, 0, *(void**)((char*)pBase + 0x80));
        if (*(void**)(esi + 0x70) != 0) {
            FUN_005458f0(*(void**)(esi + 0x70));
            FUN_00671102(*(void**)(esi + 0x70));
        }
        *(int*)(esi + 0x70) = 0;
    }
}
