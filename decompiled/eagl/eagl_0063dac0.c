/* spd-match: far pct=38.10 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_0063DAC0 */
#include <windows.h>
extern int DAT_0070f48c;
extern int DAT_0070f488;
int FUN_0063dac0(int param) {
int* base = (int*)DAT_0070f48c;
int idx = ~param;
if (base && param < 0 && idx < DAT_0070f488) {
char* p = (char*)base + (idx * 36);
if (*p != 0) {
int res = (signed char)p[2];
if (res != 0) {
p[2] = 0;
return res;
}
}
}
SetLastError(6);
return 0;
}
