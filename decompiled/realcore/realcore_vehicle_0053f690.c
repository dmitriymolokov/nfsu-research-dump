/* spd-match: far pct=16.90 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0053F690 */
#define DAT_0073d814 (*(int*)0x0073d814)
#define DAT_0073d81c (*(void**)0x0073d81c)
#define DAT_0073557c (*(void**)0x0073557c)
#define DAT_0073d818 (*(void**)0x0073d818)
extern void* __cdecl FUN_00566dc0(int a, const char* b, int c);
void FUN_0053f690(void) {
    void* eax = FUN_00566dc0(0x18, (const char*)0x6bd7dc, 0);
    if (eax != 0) {
        if (DAT_0073d814 == 1) {
            void* ecx = DAT_0073d81c;
            *(void**)ecx = eax;
            DAT_0073d81c = eax;
            *(void**)((char*)eax + 4) = ecx;
            *(void**)eax = (void*)&DAT_0073d818;
        }
    }
    DAT_0073557c = eax;
}
