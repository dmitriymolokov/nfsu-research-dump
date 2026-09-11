/* spd-match: far pct=19.77 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_005376D0 */
#include <windows.h>
extern void* _except_list;
extern const void* PTR_FUN_006be150;
extern const void* PTR_LAB_006bdd40;
extern void __cdecl _eh_vector_destructor_iterator_(void*, unsigned int, int, void*);
extern void LAB_00537580(void);
void __fastcall FUN_005376d0(void* pThis) {
    void* pPrev = _except_list;
    unsigned long frame[2] = { (unsigned long)&pPrev, 0x684d08 };
    _except_list = frame;
    *(void**)pThis = (void*)&PTR_FUN_006be150;
    __try {
        _eh_vector_destructor_iterator_((char*)pThis + 0x40, 0x2e0, 2, (void*)&LAB_00537580);
    } __finally {
        *(void**)pThis = (void*)&PTR_LAB_006bdd40;
    }
    _except_list = pPrev;
}
