/* spd-match: far pct=21.00 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0054F720 */
#include <windows.h>
extern unsigned long DAT_0073dda0; extern unsigned long DAT_0073dda4; extern unsigned char DAT_00730188; extern unsigned char DAT_00777c70; extern unsigned char DAT_00730189; extern unsigned char DAT_00777c71; extern unsigned long DAT_00734f70; extern unsigned long DAT_0073578c; extern unsigned char DAT_00746104; extern int __stdcall FUN_004f3f90(void*); extern int __stdcall FUN_004f0800(int, int);
int __stdcall FUN_0054f720(void) {
    unsigned char c;
    unsigned long *p0;
    unsigned char *p1;
    unsigned char *p2;
    unsigned long esi;
    unsigned long eax;
    int i;
    DAT_0073dda4 = DAT_0073dda0;
    c = DAT_00730188;
    DAT_0073dda0 = 0xd;
    DAT_00777c70 = c;
    if (c != 0) {
        i = 0;
        do {
            c = (&DAT_00730189)[i];
            (&DAT_00777c71)[i] = c;
            i++;
        } while (c != 0);
    }
    esi = DAT_0073578c;
    if (esi != 0) {
        eax = (unsigned long)FUN_004f3f90(&DAT_00746104);
        if (eax != 0) {
            eax = *(unsigned long*)(eax + 0x18);
            if (eax != 0) {
                return FUN_004f0800(*(int*)(esi + 8), (int)eax);
            }
        }
    }
    return 0;
}
