/* spd-match: far pct=14.44 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00614CA2 */
#include <windows.h>
typedef unsigned int uint;
int __fastcall FUN_00614ca2(void* ecx) {
    uint* p_ebx = *(uint**)((char*)ecx + 0x98);
    uint uVar6 = *p_ebx & 0xffffff;
    uint loop_idx = 0;
    if (uVar6 != 0) {
        int* piVar7 = (int*)p_ebx[2];
        int* p_target = piVar7 + uVar6;
        int* p_val = piVar7 + uVar6 * 2;
        int* table = *(int**)((char*)ecx + 0x14);
        while (loop_idx < uVar6) {
            int iVal = piVar7[loop_idx];
            int i3 = table[iVal];
            int i4 = table[p_val[loop_idx]];
            int i4_24 = *(int*)(i4 + 0x24);
            if (iVal != p_target[loop_idx] || (i4_24 != iVal && (i4_24 != -1 || i4_24 != *(int*)(i3 + 0x24))) || (*(uint*)(i4 + 0x20) ^ 0x80000) != *(uint*)(i3 + 0x20)) return 1;
            loop_idx++;
        }
    }
    *p_ebx = uVar6 | 0xf0000000;
    *(uint*)((char*)ecx + 0x9c) = uVar6;
    return 0;
}
