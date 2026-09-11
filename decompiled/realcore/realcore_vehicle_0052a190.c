/* spd-match: far pct=11.93 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0052A190 */
#include <windows.h>
extern int __cdecl FUN_00532640(void);
extern int __cdecl FUN_00532640_wrapper(int edx, int edi);
extern int __cdecl FUN_00674898(void);
extern float DAT_006b6668;
extern float DAT_006b666c;
extern float DAT_006cc7a4;
extern float DAT_006cc7bc;
void __fastcall FUN_0052a190(int obj, char param_1) {
  float f_val;
  int idx;
  short val;
  *(int*)(obj + 0x18e8) = 3;
  if (*(float*)(obj + 0x18dc) <= DAT_006b666c || param_1 == 0) {
    f_val = *(float*)(obj + 0x18dc);
  } else {
    f_val = *(float*)(obj + 0x18dc) - DAT_006b6668;
  }
  if (f_val > DAT_006cc7a4) {
    if (f_val < DAT_006cc7bc) {
      f_val = 1.0f;
    } else {
      f_val = DAT_006cc7a4;
    }
  }
  idx = *(int*)(obj + 0x1f0c);
  val = *(short*)(idx + 0x50);
  FUN_00674898();
  *(float*)(obj + 0x1774) = (float)val * f_val;
  FUN_00532640();
}
