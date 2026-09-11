/* spd-match: far pct=11.25 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.6-control100/va_00613405 */
#include <windows.h>
extern int __cdecl FUN_005d77e9(int);
struct Data { int vals[24]; };
void* __stdcall FUN_00613405(void* _this, int* src, int p3, int p4, int p5) {
  FUN_005d77e9(0x11);
  int* b = (int*)_this;
  *b = 0x6a6120;
  for(int i=0; i<8; ++i) b[4+i] = src[i];
  b[0x0c] = p3; b[0x0d] = p4; b[0x0e] = p5;
  b[0x0f] = b[0x10] = b[0x15] = b[0x16] = 0;
  b[0x11] = b[0x12] = b[0x13] = b[0x14] = 0;
  return _this;
}
