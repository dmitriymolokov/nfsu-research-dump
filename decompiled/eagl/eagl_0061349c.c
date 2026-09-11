/* spd-match: far pct=11.46 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0061349C */
#include <malloc.h>
int __cdecl FUN_006133c9(void);
void* __fastcall FUN_0061349c(int param_1) {
    int* src = (int*)param_1;
    int* ebx;
    int i;
    ebx = (int*)malloc(0x60);
    if (!ebx) return 0;
    if (FUN_006133c9() == 0) return 0;
    for(i=4; i<12; i++) ebx[i] = src[i];
    ebx[12] = src[12];
    ebx[13] = src[13];
    ebx[14] = src[14];
    ebx[21] = src[21];
    ebx[22] = src[22];
    return ebx;
}
