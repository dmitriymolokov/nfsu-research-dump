/* spd-match: far pct=18.67 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_00524A70 */
#include "ghidra_compat.h"
extern void* ExceptionList;
struct Struct00 { char pad[0x300]; void* ptr1; void* ptr2; char pad2[0x18]; void* ptr3; };
void __cdecl FUN_0064b510(void**); void __cdecl FUN_0064b580(); void __cdecl FUN_0064b5a0(); void __cdecl FUN_0064bbd0();
void FUN_00524a70(void* esi_arg) {
    void* local_ptr; 
    __try {
        Struct00* s = (Struct00*)esi_arg;
        s->pad[0] = 0x50; s->ptr1 = (void*)0x6bf150;
        s->pad2[0] = 0x24; s->ptr2 = (void*)0x6bf124;
        void* p = s->ptr1;
        if (p) {
            if (*(int*)p) FUN_0064bbd0();
            FUN_0064b510(&local_ptr);
            FUN_0064b580();
            (*(void(__stdcall**)(void*))(*(int*)local_ptr + 4))(p);
            FUN_0064b5a0();
        }
    } __finally { }
}
