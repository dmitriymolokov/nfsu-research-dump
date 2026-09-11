/* spd-match: far pct=12.39 flags=/O1 /Gr /c /nologo /TP method=m39 source=m39/m39/va_00632A40 */
#include <stdio.h>
extern "C" void __fastcall FUN_00633720(void*);
extern "C" void __cdecl FUN_00629140(void*, void*, void*, void*);
extern "C" void __cdecl FUN_006327a0(void*, void*, void*);
struct Frame {
  float pad[20];
  float f1, f2, f3, f4;
  float f5, f6, f7, f8;
};
extern "C" int __stdcall FUN_00632A40(void* obj, float* dst) {
  Frame f;
  void* ecx1 = *(void**)((char*)obj + 0x10);
  void* ecx2 = *(void**)((char*)obj + 0x14);
  void* edx = *(void**)((char*)obj + 0x18);
  FUN_00633720(ecx1);
  FUN_00633720(ecx2);
  FUN_00629140(edx, &f.f1, &f.f5, &f.f7);
  f.f1 = 0.0f; f.f5 = 1.0f; f.f7 = 0.0f; f.f8 = 1.0f;
  FUN_006327a0(&f.f7, &f.f1, &f.f5);
  dst[0] = f.f3;
  dst[1] = f.f7;
  return 1;
}
