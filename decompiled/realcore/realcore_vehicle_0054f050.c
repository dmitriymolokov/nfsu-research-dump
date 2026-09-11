/* spd-match: far pct=10.42 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0054F050 */
#include <stddef.h>
extern int __cdecl FUN_004c96c0(int);
extern int __cdecl FUN_004ef050(int);
extern int __cdecl FUN_004f0700(int, int, int, int, int);
extern int __cdecl FUN_004f3f90(void*);
extern int __cdecl FUN_004f65d0(void);
extern int __cdecl FUN_004f7660(float, float);
extern int __cdecl FUN_004ffb70(int, int);
extern unsigned int *DAT_0070649c;
extern unsigned int *DAT_007064a0;
extern unsigned char DAT_007064b2;
extern int *DAT_0073578c;
extern int DAT_00746104;
void FUN_0054f050(int ebx) {
    int *ebp = (int *)(ebx + 0x40);
    int i = 5;
    do {
        if (*ebp != 0 && DAT_007064b2 != 0) {
            float f1 = (float)((unsigned int)DAT_0070649c - 0x140);
            float f2 = (float)((unsigned int)DAT_007064a0 - 0xf0);
            if (FUN_004f7660(f1, f2)) {
                int obj = *(int *)(*ebp + 0x10);
                int res = 0;
                if (*(int *)(ebx + 0xc) == 0) goto label_mid;
                res = FUN_004f65d0();
                if (res != 0) res = FUN_004ffb70(obj, res);
                if (res == 0) {
                    label_mid:
                    if (DAT_0073578c != 0) res = FUN_004ef050(obj);
                }
                if (DAT_0073578c != 0 && DAT_0073578c[2] != 0) {
                    FUN_004f0700(0x0c407210, *ebp, *(int *)(ebx + 0x78), res, 0);
                }
            }
        }
        ebp++;
    } while (--i > 0);
}
