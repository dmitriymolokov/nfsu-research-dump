/* spd-match: far pct=16.36 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00528D70 */
#include <windows.h>
extern int DAT_006f1dd8; extern int _DAT_006ccac8; extern int _DAT_007058e4; int __cdecl FUN_00532840();
void FUN_00528d70(int param_1) {
  if (DAT_006f1dd8) {
    float fVal = *(float*)(*(int*)(param_1 + 4) + 0x1f1c);
    float threshold = *(float*)&_DAT_006ccac8;
    if (fVal >= threshold) {
      _DAT_007058e4 = (int)fVal;
      FUN_00532840();
    }
  }
}
