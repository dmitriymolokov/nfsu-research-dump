/* spd-match: far pct=58.00 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0053E680 */
/* Decompiled from Speed.exe @ 0053e680 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
#define BASE_ADDR 0x0072f600
void* __stdcall FUN_0053e680(int param_1) {
    unsigned char* p = (unsigned char*)BASE_ADDR;
    int i = 0;
    for (i = 0; i < 64; i++) {
        if (p[i * 16 + 1] == 0) {
            *(int*)(p + (i * 16) + 12) = param_1;
            p[i * 16 + 1] = 1;
            return (void*)(p + (i * 16));
        }
    }
    return 0;
}

