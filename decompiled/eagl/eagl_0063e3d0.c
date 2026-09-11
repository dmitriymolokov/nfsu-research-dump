/* spd-match: far pct=24.11 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063E3D0 */
#include <windows.h>
extern void* __stdcall FUN_00672a10(const char*, int);
int __stdcall FUN_0063e3d0(const char* param_1) {
  char local_10c[4];
  char full_path[261];
  char* p_out;
  void* res = FUN_00672a10(param_1, 0x7c);
  if (!res) {
    const char* path = param_1 ? param_1 : ".";
    if (GetFullPathNameA(path, 0x105, full_path, &p_out) > 1) {
      CharUpperA(full_path);
      if (full_path[1] == ':') return (int)full_path[0];
    }
  }
  return 0;
}
