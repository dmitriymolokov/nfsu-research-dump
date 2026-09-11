/* spd-match: far pct=17.91 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00572D90 */
#include <windows.h>
extern int __cdecl FUN_00421e80(int);
extern int __cdecl FUN_00431f40(void*);
extern int __cdecl FUN_00571920(int);
extern int __cdecl FUN_00572e20(int);
extern int __cdecl FUN_005742b0(void);
extern int DAT_006f08a4;
extern int DAT_007361f0;
extern int DAT_0078a2f0;
void __stdcall FUN_00572d90(int param_1, int obj) {
unsigned char *p1 = (unsigned char *)0x6bbb80;
unsigned char *p2 = (unsigned char *)(obj + 8);
unsigned char c1, c2;
do { c1 = *p2++; c2 = *p1++; } while (c1 && c2 && c1 == c2);
if (c1 == c2) { FUN_00572e20(param_1); return; }
FUN_00431f40(&DAT_0078a2f0);
if ((*(char *)(obj + 0x3c) || *(char *)(obj + 0x3e)) && (DAT_006f08a4 == *(int *)(param_1 + 0x54))) {
FUN_00571920(1);
} else {
FUN_00571920(0);
}
FUN_00421e80(DAT_007361f0);
FUN_005742b0();
}
