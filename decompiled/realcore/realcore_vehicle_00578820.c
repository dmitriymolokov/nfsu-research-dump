/* spd-match: far pct=11.49 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00578820 */
#include <windows.h>
extern int DAT_0078a2fc;
int FUN_00578820(int *esi) {
  register int ecx = -1;
  register const char *edx = "DrawBridge";
  while (*edx) {
    ecx = ecx * 0x21 + (unsigned char)*edx;
    edx++;
  }
  if (*esi != ecx) return 0;
  ecx = -1;
  edx = "TRSABC_Track_Jump";
  while (*edx) {
    ecx = ecx * 0x21 + (unsigned char)*edx;
    edx++;
  }
  return (esi[1] == ecx && DAT_0078a2fc == 1);
}
