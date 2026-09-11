/* spd-match: far pct=36.84 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0056C250 */
#include <string.h>
struct Block { float f1, f2; int i1; float f3, f4; int i2; float f5, f6; int i3; float f7, f8; int i4; };
void __fastcall FUN_0056c250(void* ecx, int edx) {
    int p_addr = *(int*)(edx + 8);
    if (p_addr == 0) {
        memset((void*)(edx + 0x510), 0, 32);
    } else {
        char* p = (char*)p_addr;
        *(float*)(edx + 0x510) = -*(float*)(p + 0x13c);
        *(float*)(edx + 0x514) = -*(float*)(p + 0x140);
        *(int*)(edx + 0x530) = *(int*)(p + 0x134);
        *(float*)(edx + 0x518) = -*(float*)(p + 0x16c);
        *(float*)(edx + 0x51c) = -*(float*)(p + 0x170);
        *(int*)(edx + 0x534) = *(int*)(p + 0x164);
        *(float*)(edx + 0x520) = -*(float*)(p + 0x19c);
        *(float*)(edx + 0x524) = -*(float*)(p + 0x1a0);
        *(int*)(edx + 0x538) = *(int*)(p + 0x194);
        *(float*)(edx + 0x528) = -*(float*)(p + 0x1cc);
        *(float*)(edx + 0x52c) = -*(float*)(p + 0x1d0);
        *(int*)(edx + 0x53c) = *(int*)(p + 0x1c4);
    }
}
