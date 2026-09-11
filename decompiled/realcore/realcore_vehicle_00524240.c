/* spd-match: far pct=10.94 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00524240 */
#include <windows.h>
extern int *DAT_0073619c;
extern float *DAT_006f81d0;
void __fastcall FUN_00524240(float p1) {
  unsigned char* edi = (unsigned char*)0;
  if (*DAT_0073619c == 3) {
    if (*(float*)0x006f81d0 < 0.0f) {
        *(float*)(edi + 0x1f1c) = *(float*)(edi + 0x1fc8);
        *(float*)(edi + 0x1f8c) = *(float*)(edi + 0x1fcc);
    }
  }
}
