/* spd-match: far pct=12.18 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00531DD0 */
#include <windows.h>
struct Frame { float s14; float s18; float s20; float s24; float s28; int i10; int i20; };
extern int DAT_006cc7a4; extern int _DAT_006cc7bc; extern int _DAT_006ccc3c; extern int _DAT_006ccc68; extern int _DAT_006ccc70;
int __cdecl FUN_00567370(float, float, float, float, float, float, float, float);
int __fastcall FUN_00531dd0(void* p) {
  struct Frame f;
  int* edx = *(int**)((char*)p + 0x21c);
  int* eax = *(int**)((char*)edx + 0x64);
  int* c1 = *(int**)((char*)eax + 0x258);
  int* c2 = *(int**)((char*)eax + 0x25c);
  int esi = 0, ebx = 0;
  if (*((char*)c1 + 0x15) == 0) esi = c1[0x50];
  if (*((char*)c2 + 0x15) == 0) ebx = c2[0x50];
  if (esi == 0) { if (ebx == 0) return 4; esi = ebx; }
  f.s14 = *(float*)(esi + 0xb4);
  f.s18 = *(float*)(esi + 0xb8);
  f.s20 = *(float*)(edx + 0x74);
  f.s24 = *(float*)(edx + 0x78);
  f.i10 = *(int*)(esi + 0xb0);
  f.i20 = edx[0x1c];
  FUN_00567370(f.s14, f.s18, f.s20, f.s24, (float)f.i10, 0, 0, 0);
  return 4;
}
