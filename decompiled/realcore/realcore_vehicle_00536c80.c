/* spd-match: far pct=7.50 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00536C80 */
extern void __stdcall FUN_00536250(void* p);
void __stdcall FUN_00536c80(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int index) {
    if (index < 4) {
        if (p4 != 0) {
            void* addr = (void*)((index * 11 + p4) * 0x130 + p2 + 4);
            FUN_00536250(addr);
        }
        if (p5 != 0) {
            void* addr = (void*)((index * 11 + p5) * 0x130 + p2 + 4);
            FUN_00536250(addr);
        }
    }
}
