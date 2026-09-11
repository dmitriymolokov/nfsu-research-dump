/* spd-match: far pct=4.76 flags=/O2 /c /nologo /TC method=m39 source=m39/m4g0-s01/va_00631300 */
#include <windows.h>
unsigned int __fastcall FUN_00631300(void* p) {
  unsigned char* b = (unsigned char*)p;
  unsigned int div = 1 << b[0x10];
  unsigned int v4 = *(unsigned short*)(b + 4);
  unsigned int v6 = b[6];
  unsigned int rem = v4 % div;
  unsigned int quot = v4 / div;
  unsigned int ecx = (((div + 1) * v6) * 3 + 1) & ~1;
  unsigned int edi = (unsigned int)p + (ecx * quot);
  unsigned int eax = v6 * 3;
  unsigned int res = edi + (eax * 4) + 0x12;
  if (rem > 0) {
    unsigned int t = (rem + 1) * v6;
    res += (t * 3);
  }
  return (res + b[7] + 1) & ~1;
}
