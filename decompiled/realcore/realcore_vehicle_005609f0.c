/* spd-match: far pct=15.38 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_005609F0 */
#include <windows.h>
extern int __cdecl FUN_004ef050(int);
extern int __cdecl FUN_004f3f90(void*);
extern int __cdecl FUN_004f78e0(void*, int);
extern int __cdecl FUN_004fd1e0(int);
extern int __cdecl FUN_004ffb00(int);
extern int __cdecl FUN_0054af80(void*);
extern int __cdecl FUN_00561b50(void*, int);
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern void *PTR_FUN_006bc7c8;
void LAB_006875db(void);
extern void* ExceptionList;
void* FUN_005609f0(int* p1, int p2) {
    int* frame[2];
    int i;
    frame[0] = (int*)ExceptionList;
    frame[1] = (int*)LAB_006875db;
    ExceptionList = frame;
    FUN_004f78e0(p1, p2);
    p1[0] = (int)&PTR_FUN_006bc7c8;
    for(i = 4; i < 204; i++) p1[i] = 0;
    return p1;
}
