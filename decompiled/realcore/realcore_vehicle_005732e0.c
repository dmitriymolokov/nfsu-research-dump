/* spd-match: far pct=49.28 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_005732E0 */
#define DAT_007345d0 (*(int*)0x007345d0)
#define DAT_006f08a4 (*(int*)0x006f08a4)
#define DAT_007361f0 (*(int*)0x007361f0)
extern int __stdcall FUN_00572b50(int, int);
extern void __stdcall FUN_00572d90(int);
extern void __stdcall FUN_00421c00(int, int, int);
void __stdcall FUN_005732e0(int* pState) {
    int* pS;
    int iVar1, iVar3, next;
    pS = pState;
    iVar1 = DAT_007345d0;
    *(pS + 4) = -1;
    iVar3 = FUN_00572b50(0, 0x6bbb80);
    if (iVar3 != 0) {
        *(int*)(iVar3 + 0x150) = 0;
        *(char*)(iVar3 + 0x3d) = 1;
        FUN_00572d90(iVar1);
        *(char*)(iVar3 + 0x3d) = 0;
        *(int*)(iVar1 + 0xa4) = DAT_006f08a4;
        *(int*)(iVar1 + 8) = 0;
        iVar1 = DAT_007345d0;
    }
    next = *(pS + 4) + 1;
    iVar3 = FUN_00572b50(next, 0x6bbb54);
    if (iVar3 != 0) {
        *(pS + 4) = next;
        *(pS + 5) = iVar3;
        FUN_00421c00(DAT_007361f0, 0xe, iVar3);
    }
}
