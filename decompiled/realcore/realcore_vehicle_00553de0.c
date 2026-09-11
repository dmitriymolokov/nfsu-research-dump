/* spd-match: far pct=7.69 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00553DE0 */
#include <string.h>
extern int DAT_007363a4;
extern char DAT_00734718;
extern void* DAT_0073d8d0;
extern void* DAT_0073d8dc;
extern void* DAT_0073dafc;
extern char DAT_006b9172;
void FUN_004f68c0(int, const char*, const char*, const char*);
void FUN_005539a0(int, char*, int, int, int);
void FUN_0054b0e0(void);
int FUN_00664d40(void*, int, void*);
int FUN_00666ea0(void*, int);
void FUN_005540b0(char*, unsigned char*);
void FUN_00553de0(int param_1, char *param_2) {
    int limit = DAT_007363a4 - 1;
    char *p = param_2;
    char *base = param_2;
    int len;
    char target[16];
    char msg[36];
    char local_44[68];
    while (*p) p++;
    len = (int)(p - base);
    if (limit < len) {
        char *src = base + limit + 1;
        char *dst = base + limit;
        while (*src) *dst++ = *src++;
        *dst = '\0';
    }
    FUN_0054b0e0();
}
