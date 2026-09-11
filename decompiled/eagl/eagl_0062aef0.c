/* spd-match: far pct=9.43 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_0062AEF0 */
#include <windows.h>
extern int __cdecl FUN_00629350(float f);
extern float DAT_006cc7a4;
extern float _DAT_006a7eb0;
extern float _DAT_006a80d4;
extern float _DAT_006cc7bc;
extern float _DAT_006ccb3c;
void __fastcall FUN_0062aef0(void *pThis, void *edx, float f_arg, float *out) {
  unsigned char *pData = *(unsigned char **)((char*)pThis + 0xc);
  int n = *(unsigned short *)(pData + 4) - 1;
  float f = f_arg;
  if (*(pData + 8) & 2) {
    if (f >= DAT_006cc7a4) {
      if (f > (float)n) {
        int i = FUN_00629350((f - (float)n) / (float)n);
        f = (f - (float)n) - (float)(i * n);
      }
    } else {
      int i = FUN_00629350(f / (float)n);
      f = (float)n - (f - (float)(n * i));
    }
  }
  int idx = (int)((f < DAT_006cc7a4 ? f + _DAT_006a7eb0 : f - _DAT_006a7eb0) + 0.5f);
  int div = *(unsigned char *)((char*)pThis + 0x15);
  idx /= div;
  float frac = (f - (float)(div * idx)) / (float)div;
  unsigned char base = *(pData + 9);
  unsigned char *tab = pData + ((base < 2 ? 2 : base) + idx + 10);
  float val = (float)*tab * _DAT_006a80d4 - _DAT_006ccb3c;
  *out = val;
  if (n / div + 1 <= idx) {
    unsigned char *t2 = pData + ((base < 2 ? 2 : base) + idx + 9);
    *out = (frac + _DAT_006cc7bc) * val - ((float)*t2 * _DAT_006a80d4 - _DAT_006ccb3c) * frac;
  } else {
    unsigned char *t3 = pData + ((base < 2 ? 2 : base) + idx + 11);
    *out = (_DAT_006cc7bc - frac) * val + ((float)*t3 * _DAT_006a80d4 - _DAT_006ccb3c) * frac;
  }
}
