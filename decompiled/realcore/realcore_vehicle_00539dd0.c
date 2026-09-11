/* spd-match: far pct=6.14 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00539DD0 */
#include <windows.h>
extern int DAT_0077a920; extern int DAT_007356a8; extern int DAT_00758934; extern int DAT_00758930; extern unsigned int DAT_007356d8;
int __fastcall FUN_00539dd0(int esi, int edx, int param_1) {
    int* p = *(int**)(esi + 0x2a8);
    int* d = (int*)*(int*)(esi + 0x2b0);
    int i = 0, sum = 0, max = p[param_1];
    *(int*)(esi + 0x264) = 0;
    *(int*)(esi + 0x260) = param_1;
    if (*(int*)(esi + 0x218) == 0) {
        int hit = 0, ebp = (DAT_0077a920 == 3 || *(int*)(*(int*)(DAT_007356a8 + 0x104) + 0x1b0) == 8) ? DAT_00758930 : DAT_00758934;
        for (i = 0; i < param_1; i++) sum += p[i];
        for (i = sum; i < max; i++) if ((ebp >> (i & 0x1f)) & 1) { hit = 1; d[i] = 1; }
        if (!hit) return -1;
    } else {
        for (i = 0; i < param_1; i++) sum += p[i];
        for (i = sum; i < max; i++) d[i] = 1;
    }
    DAT_007356d8 = (DAT_007356d8 ^ 0x1d872b41);
    DAT_007356d8 = ((DAT_007356d8 >> 5) ^ DAT_007356d8);
    DAT_007356d8 = (DAT_007356d8 << 0x1b) ^ DAT_007356d8 ^ (DAT_007356d8 >> 27);
    *(unsigned int*)(esi + 0x26c) = DAT_007356d8 % p[param_1];
    return 0;
}
