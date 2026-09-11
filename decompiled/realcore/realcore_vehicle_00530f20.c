/* spd-match: far pct=15.00 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00530F20 */
#include <windows.h>
extern void __stdcall FUN_0052ea00(void* p, int val);
void __fastcall FUN_00530f20(int ecx_val) {
    float buffer[16];
    int* p_data = (int*)(*(int*)(ecx_val + 0x21c) + 0x30);
    buffer[0] = *(float*)(p_data + 0);
    buffer[1] = *(float*)(p_data + 1);
    buffer[2] = *(float*)(p_data + 2);
    *(int*)(ecx_val + 0x220) = *(int*)&buffer[0];
    *(int*)(ecx_val + 0x224) = *(int*)&buffer[1];
    *(int*)(ecx_val + 0x228) = *(int*)&buffer[2];
    FUN_0052ea00(&buffer[0], 0);
}
