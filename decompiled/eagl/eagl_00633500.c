/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_00633500 */
#include <windows.h>
extern "C" int __cdecl FUN_00628c90(int, int);
extern "C" int __cdecl FUN_00629140(float, void*, void*, void*);
extern "C" int __cdecl FUN_006327a0(void*, void*, void*);
extern "C" void* __cdecl FUN_00634150();
extern float DAT_006cc7a4;
struct Manager { char FUN_00633500(int p2);
};
char Manager::FUN_00633500(int p2) {
  void* p_res = FUN_00634150();
  int res = *(int*)p_res;
  char (__stdcall *callback)(void*, int, int) = (char (__stdcall *)(void*, int, int))(*(void***)(*(char**)this + 0x18));
  if (!callback(*(char**)this + 0x18, p2, res)) return 0;
  if (*(float*)((char*)this + 0x28) != DAT_006cc7a4) {
    FUN_00628c90(res, 0);
    if (!callback(*(char**)this + 0x1c, p2, res)) return 0;
    float f = *(float*)((char*)this + 0x28);
    char out_buf[16];
    FUN_00629140(f, (char*)p_res + 0x10, out_buf, out_buf);
  }
  return 1;
}
