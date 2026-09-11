/* spd-match: far pct=9.32 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_00571BA0 */
#include <stddef.h>
void __fastcall FUN_00571ba0(int val, char* dst, int* pState, int param_1, int param_4) {
  int* state = pState;
  int esi = state[0x54];
  if (esi + val <= state[0x55]) {
    int i = 0;
    char bl = 0;
    if (val > 0) {
      do {
        bl = ((char*)state)[esi + 0x56 + i];
        dst[i] = bl;
        i++;
      } while (i < val);
    }
    state[0x54] += val;
    if (i < param_1) {
      char al = (param_4 && (bl & 0x80)) ? -1 : 0;
      char* p = dst + i;
      int n = param_1 - i;
      for (; n >= 4; n -= 4) { *(int*)p = (unsigned char)al * 0x01010101; p += 4; }
      while (n-- > 0) *p++ = al;
    }
  }
}
