/* spd-match: far pct=15.20 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0053A130 */
#include <windows.h>
extern int DAT_007355D8; extern int DAT_007355DC;
extern void __fastcall FUN_00538F80(void);
void __fastcall FUN_0053A130(char *p) {
    int *edi = (int*)p;
    int *p4 = *(int**)(p + 4);
    int *pC4 = *(int**)(p + 0x310);
    int eax = edi[0x0B];
    if (*(int*)((char*)pC4 + 0x2C) == 0) {
        if (p4[10] != DAT_007355D8 || p4[12] != DAT_007355DC) {
            *(int*)(pC4 + 3) = 0;
            DAT_007355D8 = p4[10];
            DAT_007355DC = p4[12];
        }
    }
    FUN_00538F80();
}
