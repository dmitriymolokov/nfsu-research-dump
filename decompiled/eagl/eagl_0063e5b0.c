/* spd-match: close pct=80.00 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063E5B0 */
#include <windows.h>
extern void (__stdcall * const pfn_00697128)(HANDLE);
void __cdecl fn_0063e5b0(void* ptr) {
  void* p = *(void**)((char*)ptr + 4);
  ((void (__stdcall *)(void*))pfn_00697128)(p);
}
