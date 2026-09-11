/* spd-match: far pct=14.58 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_006166AF */
#include <windows.h>
extern int __stdcall FUN_005b1f01(void* a, void* b, int c, void* d, int e);
extern void* DAT_006cc568;
struct Obj { int pad[38]; void* unk; int pad2[2]; int status; };
int __stdcall FUN_006166af(int p1, int p2, unsigned short p3, int p4, int p5, struct Obj* p6) { int l10 = p2; int l14 = p1; unsigned char buf[16]; if (p2 == -1) { int tmp = *(int*)((char*)p6 + 0x98); if (tmp && *(int*)(tmp + 0x34) && *(int*)(*(int*)(tmp + 0x34) + 4) == 0xc) { l10 = *(int*)(*(int*)(tmp + 0x34) + 0x40); p2 = *(int*)(*(int*)(tmp + 0x34) + 0x44); if (p2 == -1) p2 = 0; } else { p2 = 0; } } if ((p3 - 2 == 0) || (p3 - 6 == 0)) { FUN_005b1f01(*(void**)((char*)p6 + 0x2c), buf, p4 + 5000, &DAT_006cc568, p5); *(int*)((char*)p6 + 0x38) = 1; } return 0; }
