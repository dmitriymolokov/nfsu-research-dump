/* spd-match: far pct=5.60 flags=/Ob2 /c /nologo /TP method=m39 source=m39/m39/va_00628C90 */
#include <windows.h>
void __stdcall FUN_00628c90(int* this_ptr, int* out, int* mask) {
  int i, limit;
  int* src;
  int* lookup;
  limit = this_ptr[2];
  lookup = (int*)this_ptr[3];
  src = this_ptr + 6;
  if (mask == 0) {
    if (lookup == 0) {
      for (i = 0; i < limit; i++) {
        out[0] = src[-2]; out[1] = src[-1]; out[2] = src[0];
        out[3] = 0x3f800000; out[4] = src[2]; out[5] = src[3];
        out[6] = src[4]; out[7] = src[5]; out[8] = src[6];
        out[9] = src[7]; out[10] = src[8]; out[11] = 0x3f800000;
        out += 12; src += 28;
      }
    }
  }
}
