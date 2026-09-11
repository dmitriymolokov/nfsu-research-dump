/* spd-match: far pct=10.87 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_006333E0 */
#include <windows.h>
extern float DAT_006cc7a4;
extern float _DAT_006cc7bc;
char FUN_006333e0(void* pThis, float* pOut, float* pIn, float* pExtra) {
  typedef int (__stdcall *fnt)(void*, void*);
  int** vtbl = (int**)pThis;
  fnt f1 = (fnt)(vtbl[8][8]);
  if (!f1(pThis, pOut)) return 0;
  float f_cur = *(float*)((char*)pThis + 0x28);
  if (f_cur == DAT_006cc7a4) return 1;
  fnt f2 = (fnt)(vtbl[9][8]);
  if (!f2(pThis, pIn)) return 0;
  float f_diff = _DAT_006cc7bc - f_cur;
  pOut[0] = pOut[0] * f_diff + pOut[0] * f_cur;
  pOut[1] = pOut[1] * f_diff + pOut[1] * f_cur;
  return 1;
}
