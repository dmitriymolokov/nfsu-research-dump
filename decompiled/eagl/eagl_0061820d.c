/* spd-match: far pct=7.38 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0061820D */
#include <windows.h>
extern double _DAT_0069f3c8;
int __stdcall FUN_0061556b(int a, void* b, int c, int d, int e);
int __fastcall FUN_0061808b(void* p);
int __fastcall FUN_0061820d(int pThis) {
    unsigned int* pu1;
    unsigned int u2;
    int* pi3;
    int* pE;
    int* pR;
    int rv;
    pu1 = *(unsigned int**)(pThis + 0x98);
    u2 = *pu1;
    if ((u2 & 0xff000000) == 0x25000000) {
        pE = (int*)*(int*)(*(int*)(pu1 + 2) + (u2 & 0xffffff) * 4);
        pi3 = (int*)*(int*)(*(int*)(pThis + 0x14) + (*pE) * 4);
        pR = (int*)*(int*)(*(int*)(pThis + 0x10) + (*pi3) * 4);
        if (((((unsigned char*)pR)[4]) & 0x80) == 0 || (*(double*)(pi3 + 4) != _DAT_0069f3c8)) return 1;
    }
    pR = (int*)FUN_0061556b((u2 & 0xffffff) | 0x24000000, pu1, 0, 2, 1);
    if (!pR) return 1;
    rv = FUN_0061808b(pR);
    if (rv == 0) *pR = 0;
    return rv;
}
