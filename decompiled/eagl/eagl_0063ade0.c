/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063ADE0 */
#include "ghidra_compat.h"
extern int cRam0070f435;
extern unsigned char *DAT_0070f490;
extern char *DAT_006e75f4;
extern char *PTR_s_cache_dat_006e7610;
int __cdecl func_0x006425e0(void *, int);
int __cdecl FUN_0063cdd0(void *, void *, int);
void FUN_0063ade0(void) {
    char stack_buf[260];
    volatile unsigned char *p = (volatile unsigned char *)DAT_0070f490;
    if (*(unsigned char*)0x0070f435 == 1) {
        int val = *(int *)(p + 0xc);
        int m = val * 0x105;
        *(int *)(void*)p = 0x128;
        *(int *)(void*)(p + 4) = 1;
        *(int *)(void*)(p + 8) = func_0x006425e0((void*)(p + 0x128), m);
        FUN_0063cdd0(stack_buf, (void*)p, m + 0x128);
        *(unsigned char*)0x0070f435 = 0;
    }
}
