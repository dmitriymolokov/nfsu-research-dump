/* spd-match: far pct=11.98 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00623F40 */
#include <windows.h>
extern int DAT_0070a758[8], DAT_0070a778[8], DAT_0070a798[8], DAT_0070a7b8[8], DAT_0070a7d8[8], DAT_0070a7f8[8], DAT_0070a818[8], DAT_0070a838[8], DAT_0070a858[8], DAT_0070a878[8], DAT_0070a898[8], DAT_0070a8b8[8], DAT_0070a8d8[8], DAT_0070a8f8[8], DAT_0070a918[8], DAT_0070a938[8], DAT_0070a958[8], DAT_0070a978;
void FUN_00623f40(void) {
  int eax = 0, ecx = 0, edx = 1, esi = 2;
  do {
    if (eax != ecx) { DAT_0070a758[eax] = edx; } else { DAT_0070a758[0] = 4; }
    DAT_0070a778[eax] = edx;
    DAT_0070a798[eax] = esi;
    DAT_0070a7b8[eax] = edx;
    if (eax != ecx) { DAT_0070a7d8[eax] = edx; } else { DAT_0070a7d8[0] = esi; }
    DAT_0070a7f8[eax] = edx;
    DAT_0070a818[eax] = esi;
    DAT_0070a838[eax] = edx;
    DAT_0070a858[eax] = edx;
    DAT_0070a878[eax] = ecx;
    DAT_0070a898[eax] = ecx;
    DAT_0070a8b8[eax] = ecx;
    DAT_0070a8d8[eax] = ecx;
    DAT_0070a8f8[eax] = eax;
    DAT_0070a918[eax] = ecx;
    DAT_0070a938[eax] = ecx;
    DAT_0070a958[eax] = ecx;
  } while (++eax < 8);
  DAT_0070a978 = ecx;
}
