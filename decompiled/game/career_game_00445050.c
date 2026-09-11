/* spd-match: far pct=38.75 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_00445050 */
#include <windows.h>
extern int __cdecl FUN_00445180();
extern int __cdecl FUN_005715d0(int);
extern int DAT_007360d0, DAT_007360d4, DAT_007360d8, DAT_007360dc;
void __fastcall FUN_00445050(void *ptr) {
LARGE_INTEGER li; unsigned char f1, res;
QueryPerformanceCounter(&li);
f1 = (*(unsigned char*)((char*)ptr + 0x15c) == 0);
res = (unsigned char)FUN_00445180();
if (res && *(void**)((char*)ptr + 0x588)) {
((void (*)(int))(*(void**)((char*)ptr + 0x588)))(*(int*)((char*)ptr + 0x58c));
*(int*)((char*)ptr + 0x588) = 0;
*(int*)((char*)ptr + 0x58c) = 0;
}
if (!f1 && res) {
FUN_005715d0(0xbe43edbb);
FUN_005715d0(0x72923c81);
DAT_007360d0 = DAT_007360d4 = DAT_007360d8 = DAT_007360dc = 0;
}
}
