/* spd-match: far pct=22.64 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0057A760 */
#include <windows.h>
extern int __stdcall sub_647b70(void* arg);
int __stdcall FUN_0057a760(void* esi) {
  int eax;
  void* p_obj = *(void**)((char*)esi + 0x1d4);
  int status = sub_647b70((char*)p_obj + 0x1c);
  if (status == 6) {
    void* v1 = *(void**)((char*)p_obj + 0x90);
    void* v2 = *(void**)((char*)v1 + 0xc);
    return (*(int*)((char*)v2 + 0xc54) == 1);
  }
  return 0;
}
