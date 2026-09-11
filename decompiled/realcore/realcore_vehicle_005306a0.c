/* spd-match: far pct=20.00 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_005306A0 */
#include <windows.h>
extern void *PTR_FUN_006be5b8;
extern void *PTR_FUN_006be634;
extern void *PTR_FUN_006b9694;
extern void *PTR_LAB_006c7d78;
extern void *PTR_LAB_006be7c4;
extern void *LAB_00684db6;
extern void __cdecl _free(void*);
void __fastcall FUN_005306a0(int *this) {
    int *p_exc;
    int frame[4];
    frame[1] = (int)&LAB_00684db6;
    frame[0] = (int)__readfsdword(0);
    __writefsdword(0, (unsigned int)frame);
    this[0] = (int)&PTR_FUN_006be5b8;
    if (this[0xc9]) {
        ((void (__cdecl *)())PTR_FUN_006be634)();
        *(char*)((char*)this + 0x34e) = 0;
    }
    if (this[0xca]) {
        (*(void (__fastcall **)(int*))(*this + 0x80))(this);
        *(char*)((char*)this + 0x350) = 0;
    }
    this[0xb3] = (int)&PTR_FUN_006b9694;
    if ((void*)this[0xb7] != (this + 0xb8)) _free((void*)this[0xb7]);
    this[0xb3] = (int)&PTR_LAB_006c7d78;
    *this = (int)&PTR_LAB_006be7c4;
    __writefsdword(0, frame[0]);
}
