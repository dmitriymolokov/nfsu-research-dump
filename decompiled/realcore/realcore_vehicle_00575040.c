/* spd-match: far pct=13.46 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00575040 */
#include <stdio.h>
extern unsigned char* DAT_007361f8;
extern float _DAT_006cc7bc;
extern float DAT_006cc7a4;
extern unsigned char* DAT_0073b220;
extern int __stdcall FUN_00674898();
extern float __stdcall FUN_00574b70();
extern void __stdcall FUN_005ac436(void*);
extern void __stdcall FUN_0040b990(void*, void*);
extern void __stdcall FUN_0040ba40(void*, void*);
extern void __stdcall FUN_0040b930();
extern void __stdcall FUN_005ac68f(void*, void*, float*);
void FUN_00575040(int param_1) {
  float fVar3, v_60, v_5c, v_58;
  int idx;
  unsigned char dummy[64];
  if (*(float*)(DAT_007361f8 + 0x2e0) < _DAT_006cc7bc) return;
  idx = (param_1 == 2) ? 1 : 0;
  if (param_1 < 1 || param_1 > 3) return;
  if ((FUN_00674898() & 1) && *(int*)(DAT_0073b220 + (idx * 32) + 0x10) != 0)
      fVar3 = FUN_00574b70();
  else fVar3 = DAT_006cc7a4;
  v_60 = fVar3 * *(float*)(DAT_0073b220 + (idx * 32) + 0x1c);
  v_5c = fVar3 * *(float*)(DAT_0073b220 + (idx * 32) + 0x20);
  v_58 = fVar3 * *(float*)(DAT_0073b220 + (idx * 32) + 0x24);
  FUN_005ac436(dummy);
  FUN_00674898();
  FUN_0040b990(dummy, dummy);
  FUN_00674898();
  FUN_0040ba40(dummy, dummy);
  FUN_00674898();
  FUN_0040b930();
  FUN_005ac68f(dummy, dummy, &v_5c);
}
