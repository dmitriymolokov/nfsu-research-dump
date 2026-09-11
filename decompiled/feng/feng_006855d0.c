/* spd-match: far pct=20.83 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_006855D0 */
#include <windows.h>
extern void __cdecl FUN_0042ac80(void* ptr);
void __stdcall _eh_vector_destructor_iterator_(void* ptr, size_t size, int count, void (__cdecl *dtor)(void*));
void FUN_006855d0(int arg1) {
  _eh_vector_destructor_iterator_((void*)(*(int*)((char*)&arg1 + 4) + 0xe0), 0x18, 2, FUN_0042ac80);
}
