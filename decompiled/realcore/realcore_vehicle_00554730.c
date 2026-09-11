/* spd-match: far pct=18.75 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00554730 */
#include <stddef.h>
extern int __stdcall FUN_004134c0(int);
extern int __cdecl FUN_00495f00(void);
extern int __cdecl FUN_005494d0(void);
extern int __cdecl FUN_005494e0(void);
extern int __cdecl FUN_00555dd0(void);
extern int __cdecl FUN_00424cc0(void);
extern int __cdecl FUN_005500a0(void);
extern int __cdecl FUN_0054a1b0(void);
extern int __cdecl FUN_00549fc0(void);
extern int __cdecl FUN_0059fc40(int,int);
extern int __cdecl FUN_00565da0(void*,...);
extern int __cdecl FUN_00549480(void);
extern int __cdecl FUN_00556220(int,int);
extern int __cdecl FUN_00674898(void);
extern int DAT_006cc568;
extern unsigned char *PTR_DAT_006bce54;
struct Context { char padding[0x100]; int state; int field_68; int field_6c[0x23]; };
void __fastcall FUN_00554730(struct Context *ecx) {
    int *p = (int*)ecx;
    if (FUN_005494d0() == 0) {
        FUN_004134c0(0x6c3944c2); FUN_00495f00();
        FUN_004134c0(0x39f3f535); FUN_00495f00();
        FUN_004134c0(0xba2712ef); FUN_00495f00();
        p[0x68/4] = 0xba18ca6b;
    } else {
        FUN_004134c0(0xfa4a9656); FUN_00495f00();
        FUN_004134c0(0x7ac99493); FUN_00495f00();
        FUN_004134c0(0x49567ba9); FUN_00495f00();
        p[0x68/4] = 0x33650b60;
    }
    p[100/4] = 0;
    FUN_00555dd0();
}
