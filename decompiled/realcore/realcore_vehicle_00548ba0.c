/* spd-match: far pct=19.42 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00548BA0 */
#include "ghidra_compat.h"
extern float _DAT_006cc7dc;
extern float _DAT_006cc858;
void __fastcall FUN_00548ba0(char *obj, int param_1, char *src, float p3, float p4) {
  int iVar;
  float fVal;
  char *d = obj;
  do { *d++ = *src; } while (*src++);
  *(float *)(obj + 304) = p3;
  *(float *)(obj + 308) = p4;
  *(int *)(obj + 300) = param_1;
  iVar = (1 << (param_1 & 0x1f)) - 1;
  fVal = (float)iVar;
  if (iVar < 0) fVal += _DAT_006cc858;
  fVal = (p4 - p3) / fVal;
  *(int *)(obj + 320) = 0x7f7fffff;
  *(int *)(obj + 324) = 0xff7fffff;
  *(char *)(obj + 328) = 1;
  *(float *)(obj + 316) = fVal;
  *(float *)(obj + 312) = fVal * _DAT_006cc7dc;
}
