/* spd-match: far pct=8.33 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s1/va_00467700 */
#include "ghidra_compat.h"
int __cdecl FUN_00401c40();
int __cdecl FUN_00467390();
int __cdecl FUN_00472830();
int __cdecl FUN_00472950();
int __cdecl FUN_00567370();
extern int DAT_006cc7a4;
extern int DAT_0073607c;
extern unsigned char *_DAT_006cc908;
extern int _DAT_006ccb7c;
extern int _DAT_007000d0;
float __fastcall FUN_00467700(int obj, float param_1) {
  float f_res;
  float *p_obj = (float*)obj;
  if (param_1 >= (float)DAT_006cc7a4) {
    p_obj[0x268/4] = -1.0f;
    return p_obj[0x268/4];
  }
  return p_obj[0x268/4];
}
