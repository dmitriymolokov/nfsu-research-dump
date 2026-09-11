/* spd-match: far pct=6.67 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_005452F0 */
#include <windows.h>
struct Vec3 { float x, y, z; };
struct State { float data[16]; };
void __fastcall FUN_005452f0(void* eax, void* edx_unused, float* param_1) {
    float local_stack[23];
    int* p_ecx = (int*)((char*)eax + 0x40);
    if (*p_ecx != 0) {
        *(int*)((char*)eax + 0x30) = 0;
        *(int*)((char*)eax + 0x34) = 0;
        *(int*)((char*)eax + 0x38) = 0;
        *(float*)((char*)eax + 0x3c) = 1.0f;
    }
}
