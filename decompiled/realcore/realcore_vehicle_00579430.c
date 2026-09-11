/* spd-match: far pct=22.97 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00579430 */
extern void* __cdecl FUN_00566dc0(int, const char*, int);
extern void* DAT_007345bc;
extern int DAT_0073d814;
extern void* DAT_0073d81c;
extern int DAT_0073d818;
void FUN_00579430(void) {
    void* p = FUN_00566dc0(0xf0, (const char*)0x6ba628, 0);
    DAT_007345bc = p;
    if (p == 0) return;
    if (DAT_0073d814 == 1) {
        void* old = DAT_0073d81c;
        *(void**)p = old;
        DAT_0073d81c = p;
        *(void**)((char*)p + 4) = old;
        *(void**)p = (void*)&DAT_0073d818;
    }
    DAT_007345bc = p;
}
