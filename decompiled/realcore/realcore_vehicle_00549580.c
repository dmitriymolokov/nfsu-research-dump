/* spd-match: far pct=78.29 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00549580 */
#include "ghidra_compat.h"
extern unsigned char DAT_0078eba0;
extern unsigned char DAT_0078eba1;
extern unsigned char DAT_0078eba2;
unsigned char * __fastcall FUN_00549580(unsigned int val) {
  unsigned char s[16] = {0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46};
  unsigned char idx1 = (unsigned char)(val & 0xF);
  unsigned char idx2 = (unsigned char)((val >> 4) & 0xF);
  DAT_0078eba1 = s[idx1];
  DAT_0078eba0 = s[idx2];
  DAT_0078eba2 = 0;
  return (unsigned char *)0x0078eba0;
}
