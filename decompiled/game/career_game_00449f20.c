/* spd-match: far pct=9.59 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00449F20 */
#include <stdio.h>
extern int DAT_00734994;
extern void __cdecl FUN_00565da0(const char*, int, int, int);
void FUN_00449f20(char* ebx) {
    char buf[100];
    unsigned int i;
    for (i = 0; i < 25; i++) ((int*)buf)[i] = 0;
    FUN_00565da0("%d.%d.%d", 1, 4, DAT_00734994);
    *ebx = buf[0];
    if (*ebx) {
        char* p = buf;
        char* dest = ebx;
        do {
            *(dest + 1) = *(p + 1);
            dest++;
            p++;
        } while (*(p + 1) != 0);
    }
}
