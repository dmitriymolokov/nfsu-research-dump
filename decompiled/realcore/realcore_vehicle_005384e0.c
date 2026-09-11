/* spd-match: far pct=11.72 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_005384E0 */
#include <windows.h>
extern int __stdcall QueryPerformanceCounter(LARGE_INTEGER*);
extern int DAT_007349c8, DAT_007356a8, DAT_00740500, DAT_0077aadc;
extern float _DAT_007301d0;
void __cdecl FUN_00538360(void);
void __cdecl FUN_00538690(void);
void __fastcall FUN_005384e0(int obj) {
  LARGE_INTEGER li;
  int delta, shift;
  float f_delta, f_factor;
  QueryPerformanceCounter(&li);
  shift = DAT_007349c8;
  delta = (int)li.LowPart - *(int*)(obj + 0x27c);
  if (delta < 0) delta = 0;
  *(int*)(obj + 0x8) = delta;
  li.LowPart = 1 << (shift & 0x1f);
  f_delta = (float)delta;
  f_factor = (float)li.LowPart;
  *(float*)(obj + 0x278) = f_factor * f_delta * _DAT_007301d0;
  QueryPerformanceCounter(&li);
  *(int*)(obj + 0x27c) = (int)li.LowPart;
  *(int*)(obj + 0x240) = DAT_00740500;
}
