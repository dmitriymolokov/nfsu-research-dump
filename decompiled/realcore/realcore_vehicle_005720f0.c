/* spd-match: far pct=9.92 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_005720F0 */
#include <windows.h>
extern void* ExceptionList;
extern void* LAB_00685fb6;
extern int* DAT_0073c1ac;
extern int DAT_0073c1a8;
extern void __cdecl _free(void*);

void __stdcall FUN_005720f0(int p) {
    int* head = (int*)(p + 0x70);
    int* curr = *(int**)head;
    void* seh[2];
    seh[0] = ExceptionList;
    seh[1] = LAB_00685fb6;
    ExceptionList = seh;
    *(int*)(p + 20) = 1;
    while (curr != head) {
        int* next = (int*)*curr;
        int* prev = (int*)curr[1];
        *prev = (int)next;
        *(int**)((char*)next + 4) = prev;
        if (curr[14] == 0) {
            _free(curr);
        } else {
            int* prev_head = DAT_0073c1ac;
            *prev_head = (int)curr;
            curr[1] = (int)prev_head;
            DAT_0073c1ac = curr;
            *curr = (int)&DAT_0073c1a8;
        }
        curr = next;
    }
    ExceptionList = seh[0];
}
