/* spd-match: far pct=33.93 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_004C7750 */
#include "ghidra_compat.h"
int __cdecl FUN_004c7750(int edi_val) {
  unsigned int** esi = (unsigned int**)0x006fadf0;
  while (1) {
    unsigned char* ecx = (unsigned char*)*esi;
    int edx = -1;
    unsigned char al = *ecx;
    if (al != 0) {
      do {
        edx = (edx * 33) + al;
        al = *++ecx;
      } while (al != 0);
    }
    if (edi_val == edx) return 1;
    esi++;
    if (esi >= (unsigned int**)0x6fae18) break;
  }
  return 0;
}
