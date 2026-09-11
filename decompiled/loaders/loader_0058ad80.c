/* spd-match: far pct=13.04 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_0058AD80 */
#include "ghidra_compat.h"
void __fastcall FUN_0058ad80(int eax_val, char *ecx_src) {
  char *dst = (char *)(eax_val + 8);
  char dl = *ecx_src;
  *dst = dl;
  if (dl != 0) {
    char *p = dst;
    int offset = (int)(ecx_src - dst);
    do {
      dl = p[offset + 1];
      p++;
      *p = dl;
    } while (dl != 0);
  }
  *(unsigned short *)(eax_val + 0x50) = 0;
  *(unsigned char *)(eax_val + 0x52) = 0;
  *(unsigned char *)(eax_val + 0x53) = 0;
  *(unsigned int *)(eax_val + 0x54) = 0;
}
