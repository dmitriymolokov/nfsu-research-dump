/* spd-match: far pct=14.97 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_0057B9F0 */
#include <windows.h>
extern int __cdecl FUN_00567160(void);
extern int __cdecl FUN_005782b0(void*, const char*);
extern int __cdecl FUN_00591b80(int, int);
extern int DAT_007361f8;
extern void* PTR_LAB_006ba3e0;
void* FUN_0057b9f0(void* param_1) {
    int* p = (int*)param_1;
    int ebx_saved;
    int res;
    int final_val;
    int i;
    unsigned char* str;
    int* p_base;
    ebx_saved = p[7];
    __try {
        FUN_005782b0(p, "Barrel");
        p[0] = (int)&PTR_LAB_006ba3e0;
        res = FUN_00567160();
        final_val = 0;
        if (res != 0) {
            i = -1;
            str = (unsigned char*)"SMOKEBOMB";
            while (*str) {
                i = i * 0x21 + *str;
                str++;
            }
            final_val = FUN_00591b80(i, 0);
        }
        p[12] = final_val;
        p_base = (int*)(*(int*)(&DAT_007361f8) + 0x28);
        *(int*)(ebx_saved + 0x80) = p_base[0x18];
        *(int*)(ebx_saved + 0x84) = p_base[0x19];
        *(int*)(ebx_saved + 0x88) = p_base[0x1A];
    } __except(1) {
        return param_1;
    }
    return param_1;
}
