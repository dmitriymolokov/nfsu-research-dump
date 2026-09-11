/* spd-match: far pct=8.72 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00524DA0 */
#include <math.h>
extern int* DAT_0073619c;
extern int* DAT_007361f8;
extern float* unaff_EBX;
int FUN_00524da0(float param_1) {
    int limit = *(int*)((char*)DAT_0073619c + 0x24);
    int* ptr = (int*)((char*)DAT_007361f8 + 0x28);
    if (limit <= 0) return 0;
    do {
        int* node = (int*)*ptr;
        if (node != 0) {
            int* sub = *(int**)((char*)node + 0x14);
            if (sub != 0 && sub[1] == 1 && *(char*)((char*)sub + 0x734) == 0) {
                float dx = *(float*)((char*)node + 0x60) - unaff_EBX[0];
                float dy = *(float*)((char*)node + 0x64) - unaff_EBX[1];
                float dz = *(float*)((char*)node + 0x68) - unaff_EBX[2];
                if (sqrt(dx * dx + dy * dy + dz * dz) < param_1) return (int)node;
            }
        }
        ptr++;
        limit--;
    } while (limit > 0);
    return 0;
}
